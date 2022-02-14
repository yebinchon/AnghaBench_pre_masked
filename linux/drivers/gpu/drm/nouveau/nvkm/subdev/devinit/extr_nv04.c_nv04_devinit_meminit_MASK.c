
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
struct io_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (struct nvkm_device*) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 scalar_t__ FUNC_4 (struct io_mapping*,int,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*) ;
 int FUNC_6 (struct nvkm_device*,int ,int,int) ;
 int FUNC_7 (struct nvkm_device*,int ,int) ;
 int FUNC_8 (struct nvkm_device*,int ,int,int) ;

__attribute__((used)) static void
FUNC_9(struct nvkm_devinit *VAR_12)
{
 struct nvkm_subdev *VAR_13 = &VAR_12->subdev;
 struct nvkm_device *VAR_14 = VAR_13->device;
 u32 VAR_15 = 0xdeadbeef;
 struct io_mapping *VAR_16;
 int VAR_17;


 VAR_16 = FUNC_1(VAR_14);
 if (!VAR_16) {
  FUNC_5(VAR_13, "failed to map fb\n");
  return;
 }


 FUNC_8(VAR_14, 0, 1, FUNC_7(VAR_14, 0, 1) | 0x20);
 FUNC_6(VAR_14, VAR_10, 0, VAR_11);

 FUNC_6(VAR_14, VAR_0, ~0,
        VAR_2 |
        VAR_9 |
        VAR_7);

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
  FUNC_3(VAR_16, 4 * VAR_17, VAR_15);

 FUNC_3(VAR_16, 0x400000, VAR_15 + 1);

 if (FUNC_2(VAR_16, 0) == VAR_15 + 1) {
  FUNC_6(VAR_14, VAR_0,
         VAR_5,
         VAR_6);
  FUNC_6(VAR_14, VAR_10,
         VAR_11, 0);

  for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
   FUNC_3(VAR_16, 4 * VAR_17, VAR_15);

  if ((FUNC_2(VAR_16, 0xc) & 0xffff) != (VAR_15 & 0xffff))
   FUNC_6(VAR_14, VAR_0,
          VAR_9 |
          VAR_1,
          VAR_4);
 } else
 if ((FUNC_2(VAR_16, 0xc) & 0xffff0000) != (VAR_15 & 0xffff0000)) {
  FUNC_6(VAR_14, VAR_0,
         VAR_9 |
         VAR_1,
         VAR_3);
 } else
 if (FUNC_2(VAR_16, 0) != VAR_15) {
  if (FUNC_4(VAR_16, 0x800000, VAR_15))
   FUNC_6(VAR_14, VAR_0,
          VAR_1,
          VAR_4);
  else
   FUNC_6(VAR_14, VAR_0,
          VAR_1,
          VAR_3);

  FUNC_6(VAR_14, VAR_0, VAR_5,
         VAR_8);
 } else
 if (!FUNC_4(VAR_16, 0x800000, VAR_15)) {
  FUNC_6(VAR_14, VAR_0, VAR_1,
         VAR_4);

 }


 FUNC_6(VAR_14, VAR_10, VAR_11, 0);
 FUNC_8(VAR_14, 0, 1, FUNC_7(VAR_14, 0, 1) & ~0x20);
 FUNC_0(VAR_16);
}
