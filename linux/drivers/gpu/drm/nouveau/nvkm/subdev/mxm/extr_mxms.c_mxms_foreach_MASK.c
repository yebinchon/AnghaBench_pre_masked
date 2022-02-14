
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_subdev {scalar_t__ debug; } ;
struct nvkm_mxm {struct nvkm_subdev subdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (struct nvkm_mxm*) ;
 int FUNC_2 (struct nvkm_mxm*) ;
 int FUNC_3 (struct nvkm_mxm*) ;
 int FUNC_4 (struct nvkm_mxm*) ;
 int FUNC_5 (struct nvkm_subdev*,char*,...) ;
 int FUNC_6 (char*,char*,int) ;

bool
FUNC_7(struct nvkm_mxm *VAR_1, u8 VAR_2,
      bool (*VAR_3)(struct nvkm_mxm *, u8 *, void *), void *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_1->subdev;
 u8 *VAR_6 = FUNC_1(VAR_1);
 u8 *VAR_7 = VAR_6 + FUNC_2(VAR_1);
 u8 *VAR_8 = VAR_7 + FUNC_3(VAR_1) - 1;
 while (VAR_7 < VAR_8) {
  u8 VAR_9 = VAR_7[0] & 0x0f;
  u8 VAR_10 = 0;
  u8 VAR_11 = 0;
  u8 VAR_12 = 0;

  switch (VAR_9) {
  case 0:
   if (FUNC_4(VAR_1) >= 0x0300)
    VAR_10 = 8;
   else
    VAR_10 = 6;
   break;
  case 1:
  case 2:
  case 3:
   VAR_10 = 4;
   break;
  case 4:
   VAR_10 = 4;
   VAR_11 = 2;
   VAR_12 = (FUNC_0(VAR_7[0]) & 0x01f00000) >> 20;
   break;
  case 5:
   VAR_10 = 8;
   break;
  case 6:
   if (FUNC_4(VAR_1) >= 0x0300) {
    VAR_10 = 4;
    VAR_11 = 8;
    VAR_12 = (VAR_7[1] & 0xf0) >> 4;
   } else {
    VAR_10 = 8;
   }
   break;
  case 7:
   VAR_10 = 8;
   VAR_11 = 4;
   VAR_12 = VAR_7[1] & 0x07;
   break;
  default:
   FUNC_5(VAR_5, "unknown descriptor type %d\n", VAR_9);
   return 0;
  }

  if (VAR_1->subdev.debug >= VAR_0 && (VAR_3 == ((void*)0))) {
   static const char * VAR_13[] = {
    "ODS", "SCCS", "TS", "IPS",
    "GSD", "VSS", "BCS", "FCS",
   };
   u8 *VAR_14 = VAR_7;
   char VAR_15[32], *VAR_16;
   int VAR_17, VAR_18;

   for (VAR_18 = VAR_10 - 1, VAR_16 = VAR_15; VAR_18 >= 0; VAR_18--)
    VAR_16 += FUNC_6(VAR_16, "%02x", VAR_14[VAR_18]);
   VAR_14 += VAR_10;

   FUNC_5(VAR_5, "%4s: %s\n", VAR_13[VAR_9], VAR_15);
   for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++, VAR_14 += VAR_11) {
    for (VAR_18 = VAR_11 - 1, VAR_16 = VAR_15; VAR_18 >= 0; VAR_18--)
     VAR_16 += FUNC_6(VAR_16, "%02x", VAR_14[VAR_18]);
    FUNC_5(VAR_5, "      %s\n", VAR_15);
   }
  }

  if (VAR_2 & (1 << VAR_9)) {
   if (!VAR_3(VAR_1, VAR_7, VAR_4))
    return 0;
  }

  VAR_7 += VAR_10 + (VAR_12 * VAR_11);
 }

 return 1;
}
