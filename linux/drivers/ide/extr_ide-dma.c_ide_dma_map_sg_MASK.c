
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ide_cmd {int tf_flags; int sg_nents; int orig_sg_nents; int sg_dma_direction; } ;
struct TYPE_4__ {int dev; struct scatterlist* sg_table; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct scatterlist*,int,int ) ;

__attribute__((used)) static int FUNC_1(ide_drive_t *VAR_3, struct ide_cmd *VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 struct scatterlist *VAR_6 = VAR_5->sg_table;
 int VAR_7;

 if (VAR_4->tf_flags & VAR_2)
  VAR_4->sg_dma_direction = VAR_1;
 else
  VAR_4->sg_dma_direction = VAR_0;

 VAR_7 = FUNC_0(VAR_5->dev, VAR_6, VAR_4->sg_nents, VAR_4->sg_dma_direction);
 if (VAR_7) {
  VAR_4->orig_sg_nents = VAR_4->sg_nents;
  VAR_4->sg_nents = VAR_7;
 }

 return VAR_7;
}
