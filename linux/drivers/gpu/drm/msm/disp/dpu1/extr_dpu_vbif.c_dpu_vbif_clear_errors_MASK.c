
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct dpu_kms {struct dpu_hw_vbif** hw_vbif; } ;
struct TYPE_2__ {int (* clear_errors ) (struct dpu_hw_vbif*,size_t*,size_t*) ;} ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_1__ ops; } ;


 size_t FUNC_0 (struct dpu_hw_vbif**) ;
 int FUNC_1 (char*,scalar_t__,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct dpu_hw_vbif*,size_t*,size_t*) ;

void FUNC_3(struct dpu_kms *VAR_1)
{
 struct dpu_hw_vbif *VAR_2;
 u32 VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->hw_vbif); VAR_3++) {
  VAR_2 = VAR_1->hw_vbif[VAR_3];
  if (VAR_2 && VAR_2->ops.clear_errors) {
   VAR_2->ops.clear_errors(VAR_2, &VAR_4, &VAR_5);
   if (VAR_4 || VAR_5) {
    FUNC_1("VBIF %d: pnd 0x%X, src 0x%X\n",
           VAR_2->idx - VAR_0, VAR_4, VAR_5);
   }
  }
 }
}
