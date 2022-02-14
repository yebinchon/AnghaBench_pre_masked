
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_memory {int * ptrs; } ;
struct nvkm_instmem {int dummy; } ;
struct TYPE_6__ {struct nvkm_memory memory; } ;
struct nv04_instobj {int node; struct nv04_instmem* imem; TYPE_3__ base; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct nv04_instmem {TYPE_2__ base; int heap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv04_instobj* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nv04_instmem* FUNC_3 (struct nvkm_instmem*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int,int,int,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_instmem *VAR_4, u32 VAR_5, u32 VAR_6, bool VAR_7,
   struct nvkm_memory **VAR_8)
{
 struct nv04_instmem *VAR_9 = FUNC_3(VAR_4);
 struct nv04_instobj *VAR_10;
 int VAR_11;

 if (!(VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1)))
  return -VAR_0;
 *VAR_8 = &VAR_10->base.memory;

 FUNC_4(&VAR_2, &VAR_9->base, &VAR_10->base);
 VAR_10->base.memory.ptrs = &VAR_3;
 VAR_10->imem = VAR_9;

 FUNC_1(&VAR_9->base.subdev.mutex);
 VAR_11 = FUNC_5(&VAR_9->heap, 0, 1, VAR_5, VAR_5,
      VAR_6 ? VAR_6 : 1, &VAR_10->node);
 FUNC_2(&VAR_9->base.subdev.mutex);
 return VAR_11;
}
