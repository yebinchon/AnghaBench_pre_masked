
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_i2c_pad {int id; TYPE_1__* i2c; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_i2c_pad_mode { ____Placeholder_nvkm_i2c_pad_mode } nvkm_i2c_pad_mode ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;



 int FUNC_0 (int ) ;


 int FUNC_1 (int) ;
 int FUNC_2 (struct nvkm_device*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_i2c_pad *VAR_0, enum nvkm_i2c_pad_mode VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->i2c->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 const u32 VAR_4 = (VAR_0->id - FUNC_0(0)) * 0x50;

 switch (VAR_1) {
 case 128:
  FUNC_2(VAR_3, 0x00d97c + VAR_4, 0x00000001, 0x00000001);
  break;
 case 129:
  FUNC_2(VAR_3, 0x00d970 + VAR_4, 0x0000c003, 0x0000c001);
  FUNC_2(VAR_3, 0x00d97c + VAR_4, 0x00000001, 0x00000000);
  break;
 case 130:
  FUNC_2(VAR_3, 0x00d970 + VAR_4, 0x0000c003, 0x00000002);
  FUNC_2(VAR_3, 0x00d97c + VAR_4, 0x00000001, 0x00000000);
  break;
 default:
  FUNC_1(1);
  break;
 }
}
