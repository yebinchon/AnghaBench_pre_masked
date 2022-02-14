
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 struct nvkm_enum* FUNC_0 (int ,int) ;
 int FUNC_1 (struct nvkm_device*,int const) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_engine *VAR_1, const u32 VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_1(VAR_4, 0x104418 + VAR_2);
 const struct nvkm_enum *VAR_6 =
  FUNC_0(VAR_0, VAR_5 & 0x0000000f);
 FUNC_2(VAR_3, "LAUNCHERR %08x [%s]\n", VAR_5, VAR_6 ? VAR_6->name : "");
}
