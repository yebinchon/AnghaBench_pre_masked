
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram_func {int (* probe_fbp ) (struct nvkm_ram_func const*,struct nvkm_device*,int,int*) ;int upper; } ;
struct nvkm_ram {int vram; } ;
struct nvkm_fb {struct nvkm_subdev subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_2 (struct nvkm_bios*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int const,int,int) ;
 int FUNC_5 (struct nvkm_ram_func const*,struct nvkm_fb*,int,int,struct nvkm_ram*) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (struct nvkm_ram_func const*,struct nvkm_device*,int,int*) ;

int
FUNC_8(const struct nvkm_ram_func *VAR_3, struct nvkm_fb *VAR_4,
        struct nvkm_ram *VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_4->subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 struct nvkm_bios *VAR_8 = VAR_7->bios;
 const u32 VAR_9 = ( 256 * 1024);
 const u32 VAR_10 = (1024 * 1024);
 enum nvkm_ram_type VAR_11 = FUNC_2(VAR_8);
 u32 VAR_12 = FUNC_6(VAR_7, 0x022438);
 u64 VAR_13 = 0, VAR_14 = ~0, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21 = 0;

 FUNC_1(VAR_6, "%d FBP(s)\n", VAR_12);
 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  u32 VAR_22 = VAR_3->probe_fbp(VAR_3, VAR_7, VAR_19, &VAR_20);
  if (VAR_22) {
   FUNC_1(VAR_6, "FBP %d: %4d MiB, %d LTC(s)\n",
       VAR_19, VAR_22, VAR_20);
   VAR_14 = FUNC_0(VAR_14, (u64)(VAR_22 / VAR_20) << 20);
   VAR_13 += (u64) VAR_22 << 20;
   VAR_21 += VAR_20;
  } else {
   FUNC_1(VAR_6, "FBP %d: disabled\n", VAR_19);
  }
 }

 VAR_15 = VAR_14 * VAR_21;
 VAR_16 = VAR_14 + VAR_3->upper;
 VAR_17 = VAR_13 - VAR_15;

 FUNC_1(VAR_6, "Lower: %4lld MiB @ %010llx\n", VAR_15 >> 20, 0ULL);
 FUNC_1(VAR_6, "Upper: %4lld MiB @ %010llx\n", VAR_17 >> 20, VAR_16);
 FUNC_1(VAR_6, "Total: %4lld MiB\n", VAR_13 >> 20);

 VAR_18 = FUNC_5(VAR_3, VAR_4, VAR_11, VAR_13, VAR_5);
 if (VAR_18)
  return VAR_18;

 FUNC_3(&VAR_5->vram);






 if (VAR_15 != VAR_13) {

  VAR_18 = FUNC_4(&VAR_5->vram, VAR_1,
       VAR_9 >> VAR_2,
       (VAR_15 - VAR_9) >> VAR_2, 1);
  if (VAR_18)
   return VAR_18;




  VAR_18 = FUNC_4(&VAR_5->vram, VAR_0,
       VAR_16 >> VAR_2,
       (VAR_17 - VAR_10) >> VAR_2, 1);
  if (VAR_18)
   return VAR_18;
 } else {

  VAR_18 = FUNC_4(&VAR_5->vram, VAR_1,
       VAR_9 >> VAR_2,
       (VAR_13 - VAR_9 - VAR_10) >>
       VAR_2, 1);
  if (VAR_18)
   return VAR_18;
 }

 return 0;
}
