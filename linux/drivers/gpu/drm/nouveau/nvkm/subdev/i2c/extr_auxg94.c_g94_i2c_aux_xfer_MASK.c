
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_i2c_aux {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_9__ {TYPE_3__* pad; } ;
struct g94_i2c_aux {int ch; TYPE_4__ base; } ;
struct TYPE_8__ {TYPE_2__* i2c; } ;
struct TYPE_6__ {struct nvkm_device* device; } ;
struct TYPE_7__ {TYPE_1__ subdev; } ;


 int FUNC_0 (TYPE_4__*,char*,int) ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct g94_i2c_aux* FUNC_2 (struct nvkm_i2c_aux*) ;
 int FUNC_3 (struct g94_i2c_aux*) ;
 int FUNC_4 (struct g94_i2c_aux*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct nvkm_device*,int const,int ,int ) ;
 int FUNC_7 (struct nvkm_device*,int const) ;
 int FUNC_8 (struct nvkm_device*,int const,int) ;
 int FUNC_9 (int) ;

int
FUNC_10(struct nvkm_i2c_aux *VAR_3, bool VAR_4,
   u8 VAR_5, u32 VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 struct g94_i2c_aux *VAR_9 = FUNC_2(VAR_3);
 struct nvkm_device *VAR_10 = VAR_9->base.pad->i2c->subdev.device;
 const u32 VAR_11 = VAR_9->ch * 0x50;
 u32 VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 u32 VAR_16[4] = {};
 int VAR_17, VAR_18;

 FUNC_1(&VAR_9->base, "%d: %08x %d", VAR_5, VAR_6, *VAR_8);

 VAR_17 = FUNC_4(VAR_9);
 if (VAR_17 < 0)
  goto out;

 VAR_13 = FUNC_7(VAR_10, 0x00e4e8 + VAR_11);
 if (!(VAR_13 & 0x10000000)) {
  FUNC_1(&VAR_9->base, "sink not detected");
  VAR_17 = -VAR_1;
  goto out;
 }

 if (!(VAR_5 & 1)) {
  FUNC_5(VAR_16, VAR_7, *VAR_8);
  for (VAR_18 = 0; VAR_18 < 16; VAR_18 += 4) {
   FUNC_1(&VAR_9->base, "wr %08x", VAR_16[VAR_18 / 4]);
   FUNC_8(VAR_10, 0x00e4c0 + VAR_11 + VAR_18, VAR_16[VAR_18 / 4]);
  }
 }

 VAR_12 = FUNC_7(VAR_10, 0x00e4e4 + VAR_11);
 VAR_12 &= ~0x0001f1ff;
 VAR_12 |= VAR_5 << 12;
 VAR_12 |= (*VAR_8 ? (*VAR_8 - 1) : 0x00000100);
 FUNC_8(VAR_10, 0x00e4e0 + VAR_11, VAR_6);


 do {

  FUNC_8(VAR_10, 0x00e4e4 + VAR_11, 0x80000000 | VAR_12);
  FUNC_8(VAR_10, 0x00e4e4 + VAR_11, 0x00000000 | VAR_12);
  if (VAR_15)
   FUNC_9(400);


  FUNC_8(VAR_10, 0x00e4e4 + VAR_11, 0x00010000 | VAR_12);

  VAR_14 = 1000;
  do {
   VAR_12 = FUNC_7(VAR_10, 0x00e4e4 + VAR_11);
   FUNC_9(1);
   if (!VAR_14--) {
    FUNC_0(&VAR_9->base, "timeout %08x", VAR_12);
    VAR_17 = -VAR_0;
    goto out;
   }
  } while (VAR_12 & 0x00010000);
  VAR_17 = 0;


  VAR_13 = FUNC_6(VAR_10, 0x00e4e8 + VAR_11, 0, 0);
  if ((VAR_13 & 0x000f0000) == 0x00080000 ||
      (VAR_13 & 0x000f0000) == 0x00020000)
   VAR_17 = 1;
  if ((VAR_13 & 0x00000100))
   VAR_17 = -VAR_2;
  if ((VAR_13 & 0x00000e00))
   VAR_17 = -VAR_0;

  FUNC_1(&VAR_9->base, "%02d %08x %08x", VAR_15, VAR_12, VAR_13);
 } while (VAR_17 && VAR_4 && VAR_15++ < 32);

 if (VAR_5 & 1) {
  for (VAR_18 = 0; VAR_18 < 16; VAR_18 += 4) {
   VAR_16[VAR_18 / 4] = FUNC_7(VAR_10, 0x00e4d0 + VAR_11 + VAR_18);
   FUNC_1(&VAR_9->base, "rd %08x", VAR_16[VAR_18 / 4]);
  }
  FUNC_5(VAR_7, VAR_16, *VAR_8);
  *VAR_8 = VAR_13 & 0x0000001f;
 }

out:
 FUNC_3(VAR_9);
 return VAR_17 < 0 ? VAR_17 : (VAR_13 & 0x000f0000) >> 16;
}
