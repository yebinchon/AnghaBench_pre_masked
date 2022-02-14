
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct trapframe {int dummy; } ;
struct plic_softc {int dummy; } ;
struct TYPE_2__ {struct trapframe* td_intr_frame; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct plic_softc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct plic_softc*,int ) ;
 int FUNC_3 (struct plic_softc*,int ,scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct plic_softc*,scalar_t__,struct trapframe*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3)
{
 struct plic_softc *VAR_4;
 struct trapframe *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_4 = VAR_3;
 VAR_7 = FUNC_0(VAR_1);

 VAR_6 = FUNC_2(VAR_4, FUNC_1(VAR_4, VAR_7));
 if (VAR_6) {
  VAR_5 = VAR_2->td_intr_frame;
  FUNC_4(VAR_4, VAR_6, VAR_5);
  FUNC_3(VAR_4, FUNC_1(VAR_4, VAR_7), VAR_6);
 }

 return (VAR_0);
}
