
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
struct nvkm_device {scalar_t__ card_type; int fifo; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;
struct TYPE_7__ {char* name; } ;


 scalar_t__ VAR_0 ;
 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (struct gf100_gr*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct gf100_gr*) ;
 int VAR_1 ;
 struct nvkm_enum* FUNC_4 (int ,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int,...) ;
 struct nvkm_fifo_chan* FUNC_6 (int ,int,unsigned long*) ;
 int FUNC_7 (int ,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_8 (struct nvkm_device*,int) ;
 int FUNC_9 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_10(struct nvkm_gr *VAR_2)
{
 struct gf100_gr *VAR_3 = FUNC_0(VAR_2);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 struct nvkm_fifo_chan *VAR_6;
 unsigned long VAR_7;
 u64 VAR_8 = FUNC_8(VAR_5, 0x409b00) & 0x0fffffff;
 u32 VAR_9 = FUNC_8(VAR_5, 0x400100);
 u32 VAR_10 = FUNC_8(VAR_5, 0x400704);
 u32 VAR_11 = (VAR_10 & 0x00003ffc);
 u32 VAR_12 = (VAR_10 & 0x00070000) >> 16;
 u32 VAR_13 = FUNC_8(VAR_5, 0x400708);
 u32 VAR_14 = FUNC_8(VAR_5, 0x400110);
 u32 VAR_15;
 const char *VAR_16 = "unknown";
 int VAR_17 = -1;

 VAR_6 = FUNC_6(VAR_5->fifo, (u64)VAR_8 << 12, &VAR_7);
 if (VAR_6) {
  VAR_16 = VAR_6->object.client->name;
  VAR_17 = VAR_6->chid;
 }

 if (VAR_5->card_type < VAR_0 || VAR_12 < 4)
  VAR_15 = FUNC_8(VAR_5, 0x404200 + (VAR_12 * 4));
 else
  VAR_15 = 0x0000;

 if (VAR_9 & 0x00000001) {




  FUNC_9(VAR_5, 0x400100, 0x00000001);
  VAR_9 &= ~0x00000001;
 }

 if (VAR_9 & 0x00000010) {
  if (!FUNC_2(VAR_5, VAR_15, VAR_11, VAR_13)) {
   FUNC_5(VAR_4, "ILLEGAL_MTHD ch %d [%010llx %s] "
       "subc %d class %04x mthd %04x data %08x\n",
       VAR_17, VAR_8 << 12, VAR_16, VAR_12,
       VAR_15, VAR_11, VAR_13);
  }
  FUNC_9(VAR_5, 0x400100, 0x00000010);
  VAR_9 &= ~0x00000010;
 }

 if (VAR_9 & 0x00000020) {
  FUNC_5(VAR_4, "ILLEGAL_CLASS ch %d [%010llx %s] "
      "subc %d class %04x mthd %04x data %08x\n",
      VAR_17, VAR_8 << 12, VAR_16, VAR_12, VAR_15, VAR_11, VAR_13);
  FUNC_9(VAR_5, 0x400100, 0x00000020);
  VAR_9 &= ~0x00000020;
 }

 if (VAR_9 & 0x00100000) {
  const struct nvkm_enum *VAR_18 =
   FUNC_4(VAR_1, VAR_14);
  FUNC_5(VAR_4, "DATA_ERROR %08x [%s] ch %d [%010llx %s] "
       "subc %d class %04x mthd %04x data %08x\n",
      VAR_14, VAR_18 ? VAR_18->name : "", VAR_17, VAR_8 << 12,
      VAR_16, VAR_12, VAR_15, VAR_11, VAR_13);
  FUNC_9(VAR_5, 0x400100, 0x00100000);
  VAR_9 &= ~0x00100000;
 }

 if (VAR_9 & 0x00200000) {
  FUNC_5(VAR_4, "TRAP ch %d [%010llx %s]\n",
      VAR_17, VAR_8 << 12, VAR_16);
  FUNC_3(VAR_3);
  FUNC_9(VAR_5, 0x400100, 0x00200000);
  VAR_9 &= ~0x00200000;
 }

 if (VAR_9 & 0x00080000) {
  FUNC_1(VAR_3);
  FUNC_9(VAR_5, 0x400100, 0x00080000);
  VAR_9 &= ~0x00080000;
 }

 if (VAR_9) {
  FUNC_5(VAR_4, "intr %08x\n", VAR_9);
  FUNC_9(VAR_5, 0x400100, VAR_9);
 }

 FUNC_9(VAR_5, 0x400500, 0x00010001);
 FUNC_7(VAR_5->fifo, VAR_7, &VAR_6);
}
