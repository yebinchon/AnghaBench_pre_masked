
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
struct TYPE_4__ {int (* unmap ) (struct nvkm_vmm*,int ,int,int) ;scalar_t__ invalid; int (* sparse ) (struct nvkm_vmm*,int ,int const,int const) ;} ;
struct TYPE_3__ {struct nvkm_vmm_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,int const,int const) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nvkm_vmm*,int ,int const,int const) ;
 int FUNC_3 (struct nvkm_vmm*,int ,int,int) ;
 int FUNC_4 (struct nvkm_vmm*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_vmm_iter *VAR_2, struct nvkm_vmm_pt *VAR_3,
     const struct nvkm_vmm_desc *VAR_4, u32 VAR_5, u32 VAR_6)
{
 const struct nvkm_vmm_desc *VAR_7 = VAR_2->page[-1].desc;
 const u32 VAR_8 = VAR_4->bits - VAR_7->bits;
 const u32 VAR_9 = 1 << VAR_8;
 struct nvkm_vmm *VAR_10 = VAR_2->vmm;
 u32 VAR_11 = VAR_5 & (VAR_9 - 1), VAR_12, VAR_13;




 for (VAR_12 = VAR_5 >> VAR_8; VAR_6; VAR_11 = 0, VAR_12++) {
  const u32 VAR_14 = FUNC_1(VAR_9 - VAR_11, VAR_6);
  VAR_3->pte[VAR_12] += VAR_14;
  VAR_6 -= VAR_14;
 }


 if (!VAR_3->refs[0])
  return;

 for (VAR_5 = VAR_13 = VAR_5 >> VAR_8; VAR_5 < VAR_12; VAR_13 = VAR_5) {

  if (VAR_3->pte[VAR_13] & VAR_1) {
   for (VAR_6 = 1, VAR_5++; VAR_5 < VAR_12; VAR_6++, VAR_5++) {
    if (!(VAR_3->pte[VAR_5] & VAR_1))
     break;
   }
   continue;
  }







  VAR_3->pte[VAR_5] |= VAR_1;
  for (VAR_6 = 1, VAR_5++; VAR_5 < VAR_12; VAR_6++, VAR_5++) {
   if (VAR_3->pte[VAR_5] & VAR_1)
    break;
   VAR_3->pte[VAR_5] |= VAR_1;
  }

  if (VAR_3->pte[VAR_13] & VAR_0) {
   const u32 VAR_15 = VAR_13 * VAR_9;
   const u32 VAR_16 = VAR_6 * VAR_9;



   FUNC_0(VAR_2, "SPTE %05x: U -> S %d PTEs", VAR_15, VAR_16);
   VAR_4->func->sparse(VAR_10, VAR_3->pt[1], VAR_15, VAR_16);

   FUNC_0(VAR_2, "LPTE %05x: S -> U %d PTEs", VAR_13, VAR_6);
   VAR_7->func->unmap(VAR_10, VAR_3->pt[0], VAR_13, VAR_6);
  } else
  if (VAR_7->func->invalid) {



   FUNC_0(VAR_2, "LPTE %05x: I -> U %d PTEs", VAR_13, VAR_6);
   VAR_7->func->unmap(VAR_10, VAR_3->pt[0], VAR_13, VAR_6);
  }
 }
}
