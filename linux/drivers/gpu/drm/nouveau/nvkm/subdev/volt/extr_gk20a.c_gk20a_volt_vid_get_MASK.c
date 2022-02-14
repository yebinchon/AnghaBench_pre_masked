
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_volt {int dummy; } ;
struct TYPE_4__ {int vid_nr; TYPE_1__* vid; } ;
struct gk20a_volt {TYPE_2__ base; int vdd; } ;
struct TYPE_3__ {int uv; } ;


 int VAR_0 ;
 struct gk20a_volt* FUNC_0 (struct nvkm_volt*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_volt *VAR_1)
{
 struct gk20a_volt *VAR_2 = FUNC_0(VAR_1);
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_2->vdd);

 for (VAR_3 = 0; VAR_3 < VAR_2->base.vid_nr; VAR_3++)
  if (VAR_2->base.vid[VAR_3].uv >= VAR_4)
   return VAR_3;

 return -VAR_0;
}
