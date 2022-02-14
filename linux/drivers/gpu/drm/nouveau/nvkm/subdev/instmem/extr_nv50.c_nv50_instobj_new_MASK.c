
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {struct nvkm_memory memory; } ;
struct nv50_instobj {int ram; int lru; int maps; struct nv50_instmem* imem; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct nv50_instmem {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nv50_instobj* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 struct nv50_instmem* FUNC_3 (struct nvkm_instmem*) ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (struct nvkm_device*,int ,int,int ,int ,int,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct nvkm_instmem *VAR_3, u32 VAR_4, u32 VAR_5, bool VAR_6,
   struct nvkm_memory **VAR_7)
{
 struct nv50_instmem *VAR_8 = FUNC_3(VAR_3);
 struct nv50_instobj *VAR_9;
 struct nvkm_device *VAR_10 = VAR_8->base.subdev.device;
 u8 VAR_11 = FUNC_2(FUNC_6(VAR_5), 12);

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 *VAR_7 = &VAR_9->base.memory;

 FUNC_4(&VAR_2, &VAR_8->base, &VAR_9->base);
 VAR_9->imem = VAR_8;
 FUNC_7(&VAR_9->maps, 0);
 FUNC_0(&VAR_9->lru);

 return FUNC_5(VAR_10, 0, 1, VAR_11, VAR_4, 1, 1, &VAR_9->ram);
}
