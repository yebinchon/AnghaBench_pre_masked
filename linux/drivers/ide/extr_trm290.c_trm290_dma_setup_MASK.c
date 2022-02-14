
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_cmd {int tf_flags; } ;
struct TYPE_5__ {unsigned int dmatable_dma; scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_2__*,struct ide_cmd*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_1, struct ide_cmd *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 unsigned int VAR_4, VAR_5 = (VAR_2->tf_flags & VAR_0) ? 1 : 2;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == 0)

  return 1;

 FUNC_1(VAR_3->dmatable_dma | VAR_5, VAR_3->dma_base);

 FUNC_2(VAR_4 * 2 - 1, VAR_3->dma_base + 2);

 return 0;
}
