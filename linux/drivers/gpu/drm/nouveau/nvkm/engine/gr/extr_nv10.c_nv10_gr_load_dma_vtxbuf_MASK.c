
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct nv10_gr_chan {struct nv10_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct nvkm_device*,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv10_gr_chan *VAR_7, int VAR_8, u32 VAR_9)
{
 struct nv10_gr *VAR_10 = VAR_7->gr;
 struct nvkm_device *VAR_11 = VAR_10->base.engine.subdev.device;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16[0x60/4];
 u32 VAR_17, VAR_18[5];
 int VAR_19, VAR_20 = -1;







 for (VAR_19 = 0; VAR_19 < 8; VAR_19++) {
  int VAR_21 = FUNC_4(VAR_11, FUNC_1(VAR_19, 0)) & 0xfff;

  if (VAR_21 == 0x56 || VAR_21 == 0x96 || VAR_21 == 0x99) {
   VAR_20 = VAR_19;
   break;
  }
 }

 if (VAR_20 < 0 || !VAR_9)
  return;


 VAR_17 = FUNC_4(VAR_11, VAR_2);
 for (VAR_19 = 0; VAR_19 < 5; VAR_19++)
  VAR_18[VAR_19] = FUNC_4(VAR_11, FUNC_2(VAR_19));


 VAR_12 = FUNC_4(VAR_11, VAR_4);
 VAR_13 = FUNC_4(VAR_11, VAR_6);
 VAR_14 = FUNC_4(VAR_11, VAR_5);
 VAR_15 = FUNC_4(VAR_11, VAR_3);

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_16); VAR_19++)
  VAR_16[VAR_19] = FUNC_4(VAR_11, 0x4007a0 + 4 * VAR_19);


 for (VAR_19 = 0; VAR_19 < 5; VAR_19++)
  FUNC_5(VAR_11, FUNC_2(VAR_19),
   FUNC_4(VAR_11, FUNC_1(VAR_20, VAR_19)));
 FUNC_3(VAR_11, VAR_2, 0xe000, VAR_20 << 13);


 FUNC_5(VAR_11, VAR_3, 0);
 FUNC_5(VAR_11, VAR_4,
  0x2c000000 | VAR_8 << 20 | VAR_20 << 16 | 0x18c);
 FUNC_5(VAR_11, VAR_6, VAR_9);
 FUNC_3(VAR_11, VAR_1, 0, 0x10000);
 FUNC_3(VAR_11, VAR_0, 0x00000001, 0x00000001);
 FUNC_3(VAR_11, VAR_0, 0x00000001, 0x00000000);


 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_16); VAR_19++)
  FUNC_5(VAR_11, 0x4007a0 + 4 * VAR_19, VAR_16[VAR_19]);

 FUNC_5(VAR_11, VAR_3, VAR_15);
 FUNC_5(VAR_11, VAR_4, VAR_12);
 FUNC_5(VAR_11, VAR_6, VAR_13);
 FUNC_5(VAR_11, VAR_5, VAR_14);


 for (VAR_19 = 0; VAR_19 < 5; VAR_19++)
  FUNC_5(VAR_11, FUNC_2(VAR_19), VAR_18[VAR_19]);
 FUNC_5(VAR_11, VAR_2, VAR_17);
}
