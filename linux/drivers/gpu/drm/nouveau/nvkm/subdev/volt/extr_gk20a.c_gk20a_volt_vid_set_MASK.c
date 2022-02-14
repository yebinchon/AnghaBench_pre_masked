
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct nvkm_volt {int dummy; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vid; struct nvkm_subdev subdev; } ;
struct gk20a_volt {TYPE_2__ base; int vdd; } ;
struct TYPE_3__ {int uv; } ;


 struct gk20a_volt* FUNC_0 (struct nvkm_volt*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_volt *VAR_0, u8 VAR_1)
{
 struct gk20a_volt *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_3 = &VAR_2->base.subdev;

 FUNC_1(VAR_3, "set voltage as %duv\n", VAR_2->base.vid[VAR_1].uv);
 return FUNC_2(VAR_2->vdd, VAR_2->base.vid[VAR_1].uv, 1200000);
}
