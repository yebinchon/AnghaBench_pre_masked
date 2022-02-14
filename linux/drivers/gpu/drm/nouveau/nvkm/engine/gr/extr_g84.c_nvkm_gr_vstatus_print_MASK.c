
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bitfield {scalar_t__ name; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv50_gr {TYPE_2__ base; } ;
typedef int msg ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,int,char*) ;
 int FUNC_1 (char*,int,struct nvkm_bitfield const*,int) ;

__attribute__((used)) static void
FUNC_2(struct nv50_gr *VAR_0, int VAR_1,
        const struct nvkm_bitfield *VAR_2, u32 VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_0->base.engine.subdev;
 u32 VAR_5 = VAR_3;
 u8 VAR_6 = 0x00;
 char VAR_7[64];
 int VAR_8;

 for (VAR_8 = 0; VAR_2[VAR_8].name && VAR_3; VAR_8++) {
  if ((VAR_3 & 7) == 1)
   VAR_6 |= (1 << VAR_8);
  VAR_3 >>= 3;
 }

 FUNC_1(VAR_7, sizeof(VAR_7), VAR_2, VAR_6);
 FUNC_0(VAR_4, "PGRAPH_VSTATUS%d: %08x [%s]\n", VAR_1, VAR_5, VAR_7);
}
