
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fault {int nrpfb; int event; TYPE_1__** buffer; } ;
struct TYPE_2__ {int object; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,int *,int ,int ,int *) ;

int
FUNC_1(struct nvkm_fault *VAR_1)
{
 return FUNC_0(&VAR_1->buffer[0]->object, &VAR_1->event,
    VAR_0, 1, ((void*)0), 0, 0,
    &VAR_1->nrpfb);
}
