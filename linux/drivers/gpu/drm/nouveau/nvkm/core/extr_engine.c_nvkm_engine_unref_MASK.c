
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct nvkm_engine {scalar_t__ usecount; TYPE_1__ subdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(struct nvkm_engine **VAR_0)
{
 struct nvkm_engine *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_0(&VAR_1->subdev.mutex);
  if (--VAR_1->usecount == 0)
   FUNC_2(&VAR_1->subdev, 0);
  FUNC_1(&VAR_1->subdev.mutex);
  *VAR_0 = ((void*)0);
 }
}
