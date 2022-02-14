
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gk104_fifo {TYPE_2__ base; } ;


 int FUNC_0 (struct gk104_fifo*) ;
 int VAR_0 ;
 struct nvkm_enum* FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,char*) ;
 int FUNC_3 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_4(struct gk104_fifo *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_3(VAR_3, 0x00254c);
 u32 VAR_5 = VAR_4 & 0x000000ff;
 const struct nvkm_enum *VAR_6 =
  FUNC_1(VAR_0, VAR_5);

 FUNC_2(VAR_2, "SCHED_ERROR %02x [%s]\n", VAR_5, VAR_6 ? VAR_6->name : "");

 switch (VAR_5) {
 case 0x0a:
  FUNC_0(VAR_1);
  break;
 default:
  break;
 }
}
