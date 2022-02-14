
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_msgqueue {TYPE_1__* func; } ;
struct TYPE_2__ {int (* dtor ) (struct nvkm_msgqueue*) ;} ;


 int FUNC_0 (struct nvkm_msgqueue*) ;

void
FUNC_1(struct nvkm_msgqueue **VAR_0)
{
 if (*VAR_0) {
  (*VAR_0)->func->dtor(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
