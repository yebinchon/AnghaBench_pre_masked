
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_kms {struct dpu_hw_vbif** hw_vbif; } ;
struct TYPE_3__ {int (* set_mem_type ) (struct dpu_hw_vbif*,int,int ) ;} ;
struct dpu_hw_vbif {TYPE_2__* cap; TYPE_1__ ops; } ;
struct TYPE_4__ {int memtype_count; int * memtype; } ;


 int FUNC_0 (struct dpu_hw_vbif**) ;
 int FUNC_1 (struct dpu_hw_vbif*,int,int ) ;

void FUNC_2(struct dpu_kms *VAR_0)
{
 struct dpu_hw_vbif *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->hw_vbif); VAR_2++) {
  VAR_1 = VAR_0->hw_vbif[VAR_2];
  if (VAR_1 && VAR_1->cap && VAR_1->ops.set_mem_type) {
   for (VAR_3 = 0; VAR_3 < VAR_1->cap->memtype_count; VAR_3++)
    VAR_1->ops.set_mem_type(
      VAR_1, VAR_3, VAR_1->cap->memtype[VAR_3]);
  }
 }
}
