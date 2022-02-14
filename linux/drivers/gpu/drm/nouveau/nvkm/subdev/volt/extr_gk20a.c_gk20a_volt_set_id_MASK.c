
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
struct TYPE_3__ {int uv; int vid; } ;


 struct gk20a_volt* FUNC_0 (struct nvkm_volt*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_volt *VAR_0, u8 VAR_1, int VAR_2)
{
 struct gk20a_volt *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 int VAR_5 = FUNC_3(VAR_3->vdd);
 int VAR_6 = VAR_3->base.vid[VAR_1].uv;
 int VAR_7;

 FUNC_2(VAR_4, "prev=%d, target=%d, condition=%d\n",
     VAR_5, VAR_6, VAR_2);
 if (!VAR_2 ||
  (VAR_2 < 0 && VAR_6 < VAR_5) ||
  (VAR_2 > 0 && VAR_6 > VAR_5)) {
  VAR_7 = FUNC_1(&VAR_3->base, VAR_3->base.vid[VAR_1].vid);
 } else {
  VAR_7 = 0;
 }

 return VAR_7;
}
