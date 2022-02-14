
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_vmm {int list; } ;
struct nvkm_vma {int mapref; int sparse; int used; int user; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct nvkm_vma* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_vmm *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct nvkm_vma *VAR_4;
 if (!(VAR_4 = FUNC_1(VAR_2, VAR_3)))
  return -VAR_0;
 VAR_4->mapref = 1;
 VAR_4->sparse = 0;
 VAR_4->used = 1;
 VAR_4->user = 1;
 FUNC_2(VAR_1, VAR_4);
 FUNC_0(&VAR_4->head, &VAR_1->list);
 return 0;
}
