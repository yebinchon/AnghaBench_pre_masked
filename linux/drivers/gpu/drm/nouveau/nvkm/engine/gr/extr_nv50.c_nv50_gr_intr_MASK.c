
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_gr {int dummy; } ;
struct TYPE_8__ {TYPE_3__* client; } ;
struct nvkm_fifo_chan {int chid; TYPE_4__ object; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_device {int fifo; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct nv50_gr {TYPE_2__ base; } ;
typedef int msg ;
struct TYPE_7__ {char* name; } ;


 int VAR_0 ;
 struct nv50_gr* FUNC_0 (struct nvkm_gr*) ;
 int VAR_1 ;
 int FUNC_1 (struct nv50_gr*,int,int,int,char const*) ;
 struct nvkm_enum* FUNC_2 (int ,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,char*,...) ;
 struct nvkm_fifo_chan* FUNC_4 (int ,int,unsigned long*) ;
 int FUNC_5 (int ,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (char*,int,int ,int) ;
 int FUNC_8 (struct nvkm_device*,int,int) ;

void
FUNC_9(struct nvkm_gr *VAR_2)
{
 struct nv50_gr *VAR_3 = FUNC_0(VAR_2);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 struct nvkm_fifo_chan *VAR_6;
 u32 VAR_7 = FUNC_6(VAR_5, 0x400100);
 u32 VAR_8 = FUNC_6(VAR_5, 0x40032c) & 0x0fffffff;
 u32 VAR_9 = FUNC_6(VAR_5, 0x400704);
 u32 VAR_10 = (VAR_9 & 0x00070000) >> 16;
 u32 VAR_11 = (VAR_9 & 0x00001ffc);
 u32 VAR_12 = FUNC_6(VAR_5, 0x400708);
 u32 VAR_13 = FUNC_6(VAR_5, 0x400814);
 u32 VAR_14 = VAR_7, VAR_15 = VAR_7;
 const struct nvkm_enum *VAR_16;
 unsigned long VAR_17;
 const char *VAR_18 = "unknown";
 char VAR_19[128];
 int VAR_20 = -1;

 VAR_6 = FUNC_4(VAR_5->fifo, (u64)VAR_8 << 12, &VAR_17);
 if (VAR_6) {
  VAR_18 = VAR_6->object.client->name;
  VAR_20 = VAR_6->chid;
 }

 if (VAR_14 & 0x00100000) {
  u32 VAR_21 = FUNC_6(VAR_5, 0x400110);
  VAR_16 = FUNC_2(VAR_0, VAR_21);
  FUNC_3(VAR_4, "DATA_ERROR %08x [%s]\n",
      VAR_21, VAR_16 ? VAR_16->name : "");
  VAR_15 &= ~0x00100000;
 }

 if (VAR_7 & 0x00200000) {
  if (!FUNC_1(VAR_3, VAR_14, VAR_20, (u64)VAR_8 << 12, VAR_18))
   VAR_14 &= ~0x00200000;
  VAR_15 &= ~0x00200000;
 }

 FUNC_8(VAR_5, 0x400100, VAR_7);
 FUNC_8(VAR_5, 0x400500, 0x00010001);

 if (VAR_14) {
  VAR_14 &= VAR_15;
  FUNC_7(VAR_19, sizeof(VAR_19), VAR_1, VAR_14);
  FUNC_3(VAR_4, "%08x [%s] ch %d [%010llx %s] subc %d "
       "class %04x mthd %04x data %08x\n",
      VAR_7, VAR_19, VAR_20, (u64)VAR_8 << 12, VAR_18,
      VAR_10, VAR_13, VAR_11, VAR_12);
 }

 if (FUNC_6(VAR_5, 0x400824) & (1 << 31))
  FUNC_8(VAR_5, 0x400824, FUNC_6(VAR_5, 0x400824) & ~(1 << 31));

 FUNC_5(VAR_5->fifo, VAR_17, &VAR_6);
}
