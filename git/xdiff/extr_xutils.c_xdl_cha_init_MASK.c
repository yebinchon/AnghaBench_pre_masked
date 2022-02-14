
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long isize; long nsize; scalar_t__ scurr; int * sncur; int ancur; int * tail; int head; } ;
typedef TYPE_1__ chastore_t ;



int FUNC_0(chastore_t *VAR_0, long VAR_1, long VAR_2) {

 VAR_0->head = *(VAR_0->tail = ((void*)0));
 VAR_0->isize = VAR_1;
 VAR_0->nsize = VAR_2 * VAR_1;
 VAR_0->ancur = *(VAR_0->sncur = ((void*)0));
 VAR_0->scurr = 0;

 return 0;
}
