
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_8__ {TYPE_3__* client; } ;
struct nvkm_fifo_chan {int chid; TYPE_4__ object; TYPE_2__* inst; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct nvkm_falcon {TYPE_1__ engine; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {int addr; } ;


 int VAR_0 ;
 struct nvkm_enum* FUNC_0 (int ,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,char*,int,int ,char*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_falcon *VAR_1, struct nvkm_fifo_chan *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_2(VAR_4, 0x087040) & 0x0000ffff;
 u32 VAR_6 = FUNC_2(VAR_4, 0x087040) >> 16;
 u32 VAR_7 = (VAR_6 & 0x07ff) << 2;
 u32 VAR_8 = (VAR_6 & 0x3800) >> 11;
 u32 VAR_9 = FUNC_2(VAR_4, 0x087044);
 const struct nvkm_enum *VAR_10 =
  FUNC_0(VAR_0, VAR_5);

 FUNC_1(VAR_3, "DISPATCH_ERROR %04x [%s] ch %d [%010llx %s] "
      "subc %d mthd %04x data %08x\n", VAR_5,
     VAR_10 ? VAR_10->name : "UNKNOWN", VAR_2 ? VAR_2->chid : -1,
     VAR_2 ? VAR_2->inst->addr : 0,
     VAR_2 ? VAR_2->object.client->name : "unknown",
     VAR_8, VAR_7, VAR_9);
}
