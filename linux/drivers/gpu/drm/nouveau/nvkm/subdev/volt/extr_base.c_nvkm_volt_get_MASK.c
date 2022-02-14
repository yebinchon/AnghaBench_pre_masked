
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_volt {int vid_nr; TYPE_1__* vid; TYPE_2__* func; } ;
struct TYPE_4__ {int (* volt_get ) (struct nvkm_volt*) ;int (* vid_get ) (struct nvkm_volt*) ;} ;
struct TYPE_3__ {int vid; int uv; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_volt*) ;
 int FUNC_1 (struct nvkm_volt*) ;

int
FUNC_2(struct nvkm_volt *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->func->volt_get)
  return VAR_1->func->volt_get(VAR_1);

 VAR_2 = VAR_1->func->vid_get(VAR_1);
 if (VAR_2 >= 0) {
  for (VAR_3 = 0; VAR_3 < VAR_1->vid_nr; VAR_3++) {
   if (VAR_1->vid[VAR_3].vid == VAR_2)
    return VAR_1->vid[VAR_3].uv;
  }
  VAR_2 = -VAR_0;
 }
 return VAR_2;
}
