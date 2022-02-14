
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_2__* client; } ;
struct nvkm_fifo_chan {int chid; TYPE_3__ object; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fb {int dummy; } ;
struct nvkm_enum {char* name; scalar_t__ data; } ;
struct nvkm_device {int chipset; struct nvkm_fifo* fifo; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct nv50_fb {TYPE_1__ base; } ;
struct TYPE_5__ {char* name; } ;


 struct nv50_fb* FUNC_0 (struct nvkm_fb*) ;
 struct nvkm_enum* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,char*,int,int,int,int,int,char*,int,char*,int,char*,int,char*,int,char*) ;
 struct nvkm_fifo_chan* FUNC_3 (struct nvkm_fifo*,int,unsigned long*) ;
 int FUNC_4 (struct nvkm_fifo*,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (struct nvkm_device*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct nvkm_fb *VAR_3)
{
 struct nv50_fb *VAR_4 = FUNC_0(VAR_3);
 struct nvkm_subdev *VAR_5 = &VAR_4->base.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 struct nvkm_fifo *VAR_7 = VAR_6->fifo;
 struct nvkm_fifo_chan *VAR_8;
 const struct nvkm_enum *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 u32 VAR_13[6], VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 VAR_14 = FUNC_5(VAR_6, 0x100c90);
 if (!(VAR_14 & 0x80000000))
  return;
 VAR_14 &= 0x00ffffff;

 for (VAR_21 = 0; VAR_21 < 6; VAR_21++) {
  FUNC_6(VAR_6, 0x100c90, VAR_14 | VAR_21 << 24);
  VAR_13[VAR_21] = FUNC_5(VAR_6, 0x100c94);
 }
 FUNC_6(VAR_6, 0x100c90, VAR_14 | 0x80000000);


 if (VAR_6->chipset < 0xa3 ||
     VAR_6->chipset == 0xaa || VAR_6->chipset == 0xac) {
  VAR_16 = (VAR_13[0] & 0x0000000f) >> 0;
  VAR_17 = (VAR_13[0] & 0x000000f0) >> 4;
  VAR_18 = (VAR_13[0] & 0x00000f00) >> 8;
  VAR_19 = (VAR_13[0] & 0x0000f000) >> 12;
 } else {
  VAR_16 = (VAR_13[0] & 0x000000ff) >> 0;
  VAR_17 = (VAR_13[0] & 0x0000ff00) >> 8;
  VAR_18 = (VAR_13[0] & 0x00ff0000) >> 16;
  VAR_19 = (VAR_13[0] & 0xff000000) >> 24;
 }
 VAR_15 = ((VAR_13[2] << 16) | VAR_13[1]) << 12;

 VAR_9 = FUNC_1(VAR_1, VAR_16);
 VAR_10 = FUNC_1(VAR_2 , VAR_17);
 VAR_11 = FUNC_1(VAR_0, VAR_18);
 if (VAR_11 && VAR_11->data) VAR_12 = FUNC_1(VAR_11->data, VAR_19);
 else if (VAR_9 && VAR_9->data) VAR_12 = FUNC_1(VAR_9->data, VAR_19);
 else VAR_12 = ((void*)0);

 VAR_8 = FUNC_3(VAR_7, VAR_15, &VAR_20);
 FUNC_2(VAR_5, "trapped %s at %02x%04x%04x on channel %d [%08x %s] "
      "engine %02x [%s] client %02x [%s] "
      "subclient %02x [%s] reason %08x [%s]\n",
     (VAR_13[5] & 0x00000100) ? "read" : "write",
     VAR_13[5] & 0xff, VAR_13[4] & 0xffff, VAR_13[3] & 0xffff,
     VAR_8 ? VAR_8->chid : -1, VAR_15,
     VAR_8 ? VAR_8->object.client->name : "unknown",
     VAR_16, VAR_9 ? VAR_9->name : "",
     VAR_18, VAR_11 ? VAR_11->name : "", VAR_19, VAR_12 ? VAR_12->name : "",
     VAR_17, VAR_10 ? VAR_10->name : "");
 FUNC_4(VAR_7, VAR_20, &VAR_8);
}
