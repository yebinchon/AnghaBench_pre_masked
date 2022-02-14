
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvkm_vmm_pt {struct nvkm_vmm_pt** pde; int * refs; } ;
struct nvkm_vmm_iter {int lvl; int page; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc {int dummy; } ;


 int FUNC_0 (struct nvkm_vmm_pt*) ;
 struct nvkm_vmm_pt* FUNC_1 (struct nvkm_vmm_desc const*,int ,int ) ;
 int FUNC_2 (struct nvkm_vmm_iter*) ;

__attribute__((used)) static bool
FUNC_3(struct nvkm_vmm_iter *VAR_0, struct nvkm_vmm_pt *VAR_1, u32 VAR_2)
{
 const struct nvkm_vmm_desc *VAR_3 = &VAR_0->desc[VAR_0->lvl - 1];
 struct nvkm_vmm_pt *VAR_4 = VAR_1->pde[VAR_2];

 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_0->page);
 if (!VAR_4) {
  if (!VAR_1->refs[0])
   FUNC_2(VAR_0);
  return 0;
 }

 VAR_1->pde[VAR_2] = VAR_4;
 return 1;
}
