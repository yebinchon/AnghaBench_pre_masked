
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvkm_vmm_page {size_t type; scalar_t__ shift; } ;
struct nvkm_uvmm {TYPE_2__* vmm; } ;
struct nvif_vmm_page_v0 {size_t index; int sparse; int vram; int host; int comp; scalar_t__ shift; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {struct nvkm_vmm_page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,void**,int *,struct nvif_vmm_page_v0,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_uvmm *VAR_6, void *VAR_7, u32 VAR_8)
{
 union {
  struct nvif_vmm_page_v0 v0;
 } *VAR_9 = VAR_7;
 const struct nvkm_vmm_page *VAR_10;
 int VAR_11 = -VAR_1;
 u8 VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_6->vmm->func->page;
 for (VAR_14 = 0; VAR_10[VAR_14].shift; VAR_14++);

 if (!(VAR_11 = FUNC_0(VAR_11, &VAR_7, &VAR_8, VAR_9->v0, 0, 0, 0))) {
  if ((VAR_13 = VAR_9->v0.index) >= VAR_14)
   return -VAR_0;
  VAR_12 = VAR_10[VAR_13].type;
  VAR_9->v0.shift = VAR_10[VAR_13].shift;
  VAR_9->v0.sparse = !!(VAR_12 & VAR_4);
  VAR_9->v0.vram = !!(VAR_12 & VAR_5);
  VAR_9->v0.host = !!(VAR_12 & VAR_3);
  VAR_9->v0.comp = !!(VAR_12 & VAR_2);
 } else
  return -VAR_1;

 return 0;
}
