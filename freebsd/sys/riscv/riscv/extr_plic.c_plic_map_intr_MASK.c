
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plic_softc {size_t ndev; TYPE_1__* isrcs; } ;
struct intr_map_data_fdt {int ncells; size_t* cells; } ;
struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct plic_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 struct intr_map_data_fdt *VAR_6;
 struct plic_softc *VAR_7;

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_4->type != VAR_2)
  return (VAR_1);

 VAR_6 = (struct intr_map_data_fdt *)VAR_4;
 if (VAR_6->ncells != 1 || VAR_6->cells[0] > VAR_7->ndev)
  return (VAR_0);

 *VAR_5 = &VAR_7->isrcs[VAR_6->cells[0]].isrc;

 return (0);
}
