
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int index; char* name; int * tp_ops; int gendev_rel_comp; int timer; int lock; int major; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_3, unsigned int VAR_4)
{

 VAR_3->index = VAR_4;
 VAR_3->major = VAR_1[VAR_4];

 VAR_3->name[0] = 'i';
 VAR_3->name[1] = 'd';
 VAR_3->name[2] = 'e';
 VAR_3->name[3] = '0' + VAR_4;

 FUNC_2(&VAR_3->lock);

 FUNC_3(&VAR_3->timer, VAR_2, 0);

 FUNC_1(&VAR_3->gendev_rel_comp);

 VAR_3->tp_ops = &VAR_0;

 FUNC_0(VAR_3);
}
