
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm_pt {scalar_t__* refs; int * pt; } ;
struct nvkm_vmm_iter {int lvl; int vmm; struct nvkm_vmm_pt** pt; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc {int type; TYPE_1__* func; } ;
struct TYPE_2__ {int (* pfn_clear ) (int ,int ,int ,int ) ;int (* pfn_unmap ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,int ) ;
 int FUNC_1 (struct nvkm_vmm_desc const*) ;
 int FUNC_2 (struct nvkm_vmm_iter*) ;
 int FUNC_3 (struct nvkm_vmm_iter*) ;
 int FUNC_4 (struct nvkm_vmm_iter*) ;
 int FUNC_5 (struct nvkm_vmm_iter*,struct nvkm_vmm_pt*,struct nvkm_vmm_desc const*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_8(struct nvkm_vmm_iter *VAR_1, bool VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct nvkm_vmm_desc *VAR_5 = VAR_1->desc;
 const int VAR_6 = VAR_5->type == VAR_0;
 struct nvkm_vmm_pt *VAR_7 = VAR_1->pt[0];
 bool VAR_8;

 if (VAR_2) {

  VAR_8 = VAR_5->func->pfn_clear(VAR_1->vmm, VAR_7->pt[VAR_6], VAR_3, VAR_4);
  if (VAR_8) {

   FUNC_3(VAR_1);
   FUNC_2(VAR_1);
   VAR_5->func->pfn_unmap(VAR_1->vmm, VAR_7->pt[VAR_6], VAR_3, VAR_4);
  }
 }


 VAR_7->refs[VAR_6] -= VAR_4;


 if (VAR_5->type == VAR_0 && (VAR_7->refs[0] || VAR_7->refs[1]))
  FUNC_5(VAR_1, VAR_7, VAR_5, VAR_3, VAR_4);


 if (!VAR_7->refs[VAR_6]) {
  VAR_1->lvl++;
  FUNC_0(VAR_1, "%s empty", FUNC_1(VAR_5));
  VAR_1->lvl--;
  FUNC_4(VAR_1);
  return 0;
 }

 return 1;
}
