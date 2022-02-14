
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_outp {int dummy; } ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_i2c {int dummy; } ;
struct nvkm_dp {struct nvkm_outp outp; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_6__ {TYPE_2__ subdev; } ;
struct nvkm_disp {TYPE_3__ engine; } ;
struct dcb_output {scalar_t__ location; int extdev; int i2c_index; } ;
struct TYPE_4__ {struct nvkm_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nvkm_dp* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nvkm_disp*,int,struct dcb_output*,struct nvkm_i2c_aux*,struct nvkm_dp*) ;
 struct nvkm_i2c_aux* FUNC_4 (struct nvkm_i2c*,int ) ;

int
FUNC_5(struct nvkm_disp *VAR_2, int VAR_3, struct dcb_output *VAR_4,
     struct nvkm_outp **VAR_5)
{
 struct nvkm_i2c *VAR_6 = VAR_2->engine.subdev.device->i2c;
 struct nvkm_i2c_aux *VAR_7;
 struct nvkm_dp *VAR_8;

 if (VAR_4->location == 0)
  VAR_7 = FUNC_4(VAR_6, FUNC_0(VAR_4->i2c_index));
 else
  VAR_7 = FUNC_4(VAR_6, FUNC_1(VAR_4->extdev));

 if (!(VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 *VAR_5 = &VAR_8->outp;

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8);
}
