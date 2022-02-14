
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ ide_hwif_t ;
typedef int ide_handler_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_2__*,int *,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(ide_drive_t *VAR_0, ide_handler_t *VAR_1,
       unsigned int VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_0->hwif;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);
}
