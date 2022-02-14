
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int command_list_dma; int rxfis_dma; scalar_t__ mmio; TYPE_1__* dd; scalar_t__* completed; int flags; } ;
struct TYPE_2__ {int slot_groups; scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct mtip_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mtip_port *VAR_12)
{
 int VAR_13;
 FUNC_0(VAR_12);


 if (FUNC_1(VAR_12->dd->mmio + VAR_1) & VAR_2) {
  FUNC_3((VAR_12->command_list_dma >> 16) >> 16,
    VAR_12->mmio + VAR_10);
  FUNC_3((VAR_12->rxfis_dma >> 16) >> 16,
    VAR_12->mmio + VAR_6);
  FUNC_2(VAR_4, &VAR_12->flags);
 }

 FUNC_3(VAR_12->command_list_dma & 0xFFFFFFFF,
   VAR_12->mmio + VAR_9);
 FUNC_3(VAR_12->rxfis_dma & 0xFFFFFFFF, VAR_12->mmio + VAR_5);


 FUNC_3(FUNC_1(VAR_12->mmio + VAR_11), VAR_12->mmio + VAR_11);


 for (VAR_13 = 0; VAR_13 < VAR_12->dd->slot_groups; VAR_13++)
  FUNC_3(0xFFFFFFFF, VAR_12->completed[VAR_13]);


 FUNC_3(FUNC_1(VAR_12->mmio + VAR_8), VAR_12->mmio + VAR_8);


 FUNC_3(FUNC_1(VAR_12->dd->mmio + VAR_3),
     VAR_12->dd->mmio + VAR_3);


 FUNC_3(VAR_0, VAR_12->mmio + VAR_7);
}
