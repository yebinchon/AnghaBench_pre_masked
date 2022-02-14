
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_device {TYPE_1__* func; int head; scalar_t__ pri; int event; scalar_t__ disable_mask; } ;
struct TYPE_2__ {struct nvkm_device* (* dtor ) (struct nvkm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nvkm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 struct nvkm_subdev* FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nvkm_subdev**) ;
 struct nvkm_device* FUNC_8 (struct nvkm_device*) ;

void
FUNC_9(struct nvkm_device **VAR_2)
{
 struct nvkm_device *VAR_3 = *VAR_2;
 int VAR_4;
 if (VAR_3) {
  FUNC_3(&VAR_1);
  VAR_3->disable_mask = 0;
  for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--) {
   struct nvkm_subdev *VAR_5 =
    FUNC_5(VAR_3, VAR_4);
   FUNC_7(&VAR_5);
  }

  FUNC_6(&VAR_3->event);

  if (VAR_3->pri)
   FUNC_0(VAR_3->pri);
  FUNC_2(&VAR_3->head);

  if (VAR_3->func->dtor)
   *VAR_2 = VAR_3->func->dtor(VAR_3);
  FUNC_4(&VAR_1);

  FUNC_1(*VAR_2);
  *VAR_2 = ((void*)0);
 }
}
