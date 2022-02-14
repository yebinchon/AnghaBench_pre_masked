
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct plic_softc {int dummy; } ;
struct plic_irqsrc {int dummy; } ;
struct intr_map_data {int dummy; } ;
struct intr_irqsrc {int isrc_cpu; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct plic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct intr_irqsrc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, struct intr_irqsrc *VAR_2,
    struct resource *VAR_3, struct intr_map_data *VAR_4)
{
 struct plic_softc *VAR_5;
 struct plic_irqsrc *VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = (struct plic_irqsrc *)VAR_2;


 FUNC_0(FUNC_1(VAR_0), &VAR_2->isrc_cpu);
 FUNC_3(VAR_1, VAR_2);

 return (0);
}
