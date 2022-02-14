
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {int parent_rate; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int) ;

int
FUNC_2(struct gk20a_clk *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_6->base.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 u32 VAR_9, VAR_10;

 switch (VAR_6->parent_rate) {
 case 12000000:
 case 12800000:
 case 13000000:
  VAR_9 = 0x2b;
  VAR_10 = 0x0b;
  break;
 case 19200000:
  VAR_9 = 0x12;
  VAR_10 = 0x08;
  break;
 case 38400000:
  VAR_9 = 0x04;
  VAR_10 = 0x05;
  break;
 default:
  FUNC_0(VAR_7, "invalid parent clock rate %u KHz",
      VAR_6->parent_rate / VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_1, 0xff << VAR_2,
  VAR_9 << VAR_2);
 FUNC_1(VAR_8, VAR_3, 0xff << VAR_4,
  VAR_10 << VAR_4);

 return 0;
}
