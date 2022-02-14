
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_ram_func {int dummy; } ;
struct nvkm_ram {int type; int size; int vram; struct nvkm_fb* fb; struct nvkm_ram_func const* func; } ;
struct nvkm_fb {struct nvkm_subdev subdev; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,char const*) ;
 int FUNC_1 (int *,int ,int ,int,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(const struct nvkm_ram_func *VAR_2, struct nvkm_fb *VAR_3,
       enum nvkm_ram_type VAR_4, u64 VAR_5, struct nvkm_ram *VAR_6)
{
 static const char *VAR_7[] = {
  [128] = "of unknown memory type",
  [129 ] = "stolen system memory",
  [130 ] = "SGRAM",
  [131 ] = "SDRAM",
  [141 ] = "DDR1",
  [140 ] = "DDR2",
  [139 ] = "DDR3",
  [138 ] = "GDDR2",
  [137 ] = "GDDR3",
  [136 ] = "GDDR4",
  [135 ] = "GDDR5",
  [134 ] = "GDDR5X",
  [133 ] = "GDDR6",
  [132 ] = "HBM2",
 };
 struct nvkm_subdev *VAR_8 = &VAR_3->subdev;
 int VAR_9;

 FUNC_0(VAR_8, "%d MiB %s\n", (int)(VAR_5 >> 20), VAR_7[VAR_4]);
 VAR_6->func = VAR_2;
 VAR_6->fb = VAR_3;
 VAR_6->type = VAR_4;
 VAR_6->size = VAR_5;

 if (!FUNC_2(&VAR_6->vram)) {
  VAR_9 = FUNC_1(&VAR_6->vram, VAR_0, 0,
       VAR_5 >> VAR_1, 1);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
