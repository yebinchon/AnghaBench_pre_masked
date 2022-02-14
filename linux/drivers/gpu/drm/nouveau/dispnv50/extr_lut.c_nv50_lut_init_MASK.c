
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvif_mmu {int dummy; } ;
struct nv50_lut {int * mem; } ;
struct nv50_disp {TYPE_2__* disp; } ;
struct TYPE_3__ {scalar_t__ oclass; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nvif_mmu*,int ,int const,int *) ;

int
FUNC_2(struct nv50_disp *VAR_2, struct nvif_mmu *VAR_3,
       struct nv50_lut *VAR_4)
{
 const u32 VAR_5 = VAR_2->disp->object.oclass < VAR_0 ? 257 : 1025;
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->mem); VAR_6++) {
  int VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_5 * 8,
         &VAR_4->mem[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
