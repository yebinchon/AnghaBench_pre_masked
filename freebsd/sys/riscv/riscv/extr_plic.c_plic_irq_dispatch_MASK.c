
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct plic_softc {int dev; struct plic_irqsrc* isrcs; } ;
struct plic_irqsrc {int isrc; } ;


 int FUNC_0 (int ,char*,size_t) ;
 scalar_t__ FUNC_1 (int *,struct trapframe*) ;

__attribute__((used)) static inline void
FUNC_2(struct plic_softc *VAR_0, u_int VAR_1,
    struct trapframe *VAR_2)
{
 struct plic_irqsrc *VAR_3;

 VAR_3 = &VAR_0->isrcs[VAR_1];

 if (FUNC_1(&VAR_3->isrc, VAR_2) != 0)
  FUNC_0(VAR_0->dev, "Stray irq %u detected\n", VAR_1);
}
