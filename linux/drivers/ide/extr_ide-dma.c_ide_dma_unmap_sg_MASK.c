
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ide_cmd {int sg_dma_direction; int orig_sg_nents; } ;
struct TYPE_4__ {int sg_table; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(ide_drive_t *VAR_0, struct ide_cmd *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;

 FUNC_0(VAR_2->dev, VAR_2->sg_table, VAR_1->orig_sg_nents,
       VAR_1->sg_dma_direction);
}
