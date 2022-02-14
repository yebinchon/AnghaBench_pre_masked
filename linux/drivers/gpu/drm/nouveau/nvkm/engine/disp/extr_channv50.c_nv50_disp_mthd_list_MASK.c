
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct nv50_disp_mthd_list {int mthd; TYPE_3__* data; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ engine; } ;
struct nv50_disp {TYPE_2__ base; } ;
typedef int mods ;
struct TYPE_6__ {scalar_t__ mthd; scalar_t__ addr; char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,int,int ,char*,scalar_t__,scalar_t__,char*,char*,char const*) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,scalar_t__) ;
 int FUNC_2 (char*,int,char*,char) ;

__attribute__((used)) static void
FUNC_3(struct nv50_disp *VAR_1, int VAR_2, u32 VAR_3, int VAR_4,
      const struct nv50_disp_mthd_list *VAR_5, int VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 int VAR_9;

 for (VAR_9 = 0; VAR_5->data[VAR_9].mthd; VAR_9++) {
  if (VAR_5->data[VAR_9].addr) {
   u32 VAR_10 = FUNC_1(VAR_8, VAR_5->data[VAR_9].addr + VAR_3 + 0);
   u32 VAR_11 = FUNC_1(VAR_8, VAR_5->data[VAR_9].addr + VAR_3 + VAR_4);
   u32 VAR_12 = VAR_5->data[VAR_9].mthd + (VAR_5->mthd * VAR_6);
   const char *VAR_13 = VAR_5->data[VAR_9].name;
   char VAR_14[16];

   if (VAR_11 != VAR_10)
    FUNC_2(VAR_14, sizeof(VAR_14), "-> %08x", VAR_10);
   else
    FUNC_2(VAR_14, sizeof(VAR_14), "%13c", ' ');

   FUNC_0(VAR_7, VAR_2, VAR_0,
         "\t%04x: %08x %s%s%s\n",
         VAR_12, VAR_11, VAR_14, VAR_13 ? " // " : "",
         VAR_13 ? VAR_13 : "");
  }
 }
}
