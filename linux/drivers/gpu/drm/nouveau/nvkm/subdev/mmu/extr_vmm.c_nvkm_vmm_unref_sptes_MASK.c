
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm_pt {int* pte; int * pt; int * refs; } ;
struct nvkm_vmm_iter {struct nvkm_vmm* vmm; TYPE_1__* page; } ;
struct nvkm_vmm_desc {int bits; TYPE_2__* func; } ;
struct nvkm_vmm {int dummy; } ;
struct TYPE_4__ {int (* invalid ) (struct nvkm_vmm*,int ,int,int) ;int (* sparse ) (struct nvkm_vmm*,int ,int,int) ;} ;
struct TYPE_3__ {struct nvkm_vmm_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nvkm_vmm*,int ,int,int) ;
 int FUNC_3 (struct nvkm_vmm*,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_vmm_iter *VAR_3, struct nvkm_vmm_pt *VAR_4,
       const struct nvkm_vmm_desc *VAR_5, u32 VAR_6, u32 VAR_7)
{
 const struct nvkm_vmm_desc *VAR_8 = VAR_3->page[-1].desc;
 const u32 VAR_9 = VAR_5->bits - VAR_8->bits;
 const u32 VAR_10 = 1 << VAR_9;
 struct nvkm_vmm *VAR_11 = VAR_3->vmm;
 u32 VAR_12 = VAR_6 & (VAR_10 - 1), VAR_13, VAR_14;




 for (VAR_13 = VAR_6 >> VAR_9; VAR_7; VAR_12 = 0, VAR_13++) {
  const u32 VAR_15 = FUNC_1(VAR_10 - VAR_12, VAR_7);
  VAR_4->pte[VAR_13] -= VAR_15;
  VAR_7 -= VAR_15;
 }


 if (!VAR_4->refs[0])
  return;

 for (VAR_6 = VAR_14 = VAR_6 >> VAR_9; VAR_6 < VAR_13; VAR_14 = VAR_6) {

  if (VAR_4->pte[VAR_14] & VAR_1) {
   for (VAR_7 = 1, VAR_6++; VAR_6 < VAR_13; VAR_7++, VAR_6++) {
    if (!(VAR_4->pte[VAR_6] & VAR_1))
     break;
   }
   continue;
  }







  VAR_4->pte[VAR_6] &= ~VAR_2;
  for (VAR_7 = 1, VAR_6++; VAR_6 < VAR_13; VAR_7++, VAR_6++) {
   if (VAR_4->pte[VAR_6] & VAR_1)
    break;
   VAR_4->pte[VAR_6] &= ~VAR_2;
  }

  if (VAR_4->pte[VAR_14] & VAR_0) {
   FUNC_0(VAR_3, "LPTE %05x: U -> S %d PTEs", VAR_14, VAR_7);
   VAR_8->func->sparse(VAR_11, VAR_4->pt[0], VAR_14, VAR_7);
  } else
  if (VAR_8->func->invalid) {




   FUNC_0(VAR_3, "LPTE %05x: U -> I %d PTEs", VAR_14, VAR_7);
   VAR_8->func->invalid(VAR_11, VAR_4->pt[0], VAR_14, VAR_7);
  }
 }
}
