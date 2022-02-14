
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_lm_cfg {int id; TYPE_1__* sblk; } ;
typedef enum dpu_lm { ____Placeholder_dpu_lm } dpu_lm ;
struct TYPE_2__ {int maxblendstages; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct dpu_lm_cfg *VAR_1, int VAR_2,
  enum dpu_lm VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3 == VAR_1[VAR_4].id) {
   VAR_5 = VAR_1[VAR_4].sblk->maxblendstages;
   break;
  }
 }

 return VAR_5;
}
