
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_lm_sub_blks {int maxblendstages; int* blendstage_base; } ;
struct dpu_hw_mixer {TYPE_1__* cap; } ;
typedef enum dpu_stage { ____Placeholder_dpu_stage } dpu_stage ;
struct TYPE_2__ {struct dpu_lm_sub_blks* sblk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct dpu_hw_mixer *VAR_3, enum dpu_stage VAR_4)
{
 const struct dpu_lm_sub_blks *VAR_5 = VAR_3->cap->sblk;
 if (VAR_4 != VAR_1 && VAR_4 <= VAR_5->maxblendstages)
  return VAR_5->blendstage_base[VAR_4 - VAR_0];

 return -VAR_2;
}
