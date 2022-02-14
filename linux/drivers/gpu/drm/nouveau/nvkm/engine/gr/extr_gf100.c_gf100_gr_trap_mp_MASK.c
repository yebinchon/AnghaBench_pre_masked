
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;
typedef int glob ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_enum* FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int,int,char*,int,char*) ;
 int FUNC_3 (struct nvkm_device*,int ) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (struct nvkm_device*,int ,int) ;

void
FUNC_6(struct gf100_gr *VAR_2, int VAR_3, int VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 u32 VAR_7 = FUNC_3(VAR_6, FUNC_0(VAR_3, VAR_4, 0x648));
 u32 VAR_8 = FUNC_3(VAR_6, FUNC_0(VAR_3, VAR_4, 0x650));
 const struct nvkm_enum *VAR_9;
 char VAR_10[128];

 FUNC_4(VAR_10, sizeof(VAR_10), VAR_0, VAR_8);
 VAR_9 = FUNC_1(VAR_1, VAR_7 & 0xffff);

 FUNC_2(VAR_5, "GPC%i/TPC%i/MP trap: "
      "global %08x [%s] warp %04x [%s]\n",
     VAR_3, VAR_4, VAR_8, VAR_10, VAR_7, VAR_9 ? VAR_9->name : "");

 FUNC_5(VAR_6, FUNC_0(VAR_3, VAR_4, 0x648), 0x00000000);
 FUNC_5(VAR_6, FUNC_0(VAR_3, VAR_4, 0x650), VAR_8);
}
