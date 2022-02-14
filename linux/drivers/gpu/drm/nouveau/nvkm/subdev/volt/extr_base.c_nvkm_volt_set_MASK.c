
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_volt {int max_uv; int vid_nr; TYPE_2__* vid; TYPE_1__* func; struct nvkm_subdev subdev; } ;
struct TYPE_4__ {int uv; int vid; } ;
struct TYPE_3__ {int (* volt_set ) (struct nvkm_volt*,int) ;int (* vid_set ) (struct nvkm_volt*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_volt*,int) ;
 int FUNC_3 (struct nvkm_volt*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_volt *VAR_1, u32 VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 int VAR_4, VAR_5 = -VAR_0, VAR_6 = VAR_1->max_uv, VAR_7 = -1;

 if (VAR_1->func->volt_set)
  return VAR_1->func->volt_set(VAR_1, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1->vid_nr; VAR_4++) {
  int VAR_8 = VAR_1->vid[VAR_4].uv - VAR_2;
  if (VAR_8 < 0 || VAR_8 > VAR_6)
   continue;

  VAR_6 = VAR_8;
  VAR_7 = VAR_4;
  if (VAR_6 == 0)
   break;
 }

 if (VAR_7 == -1) {
  FUNC_1(VAR_3, "couldn't set %iuv\n", VAR_2);
  return VAR_5;
 }

 VAR_5 = VAR_1->func->vid_set(VAR_1, VAR_1->vid[VAR_7].vid);
 FUNC_0(VAR_3, "set req %duv to %duv: %d\n", VAR_2,
     VAR_1->vid[VAR_7].uv, VAR_5);
 return VAR_5;
}
