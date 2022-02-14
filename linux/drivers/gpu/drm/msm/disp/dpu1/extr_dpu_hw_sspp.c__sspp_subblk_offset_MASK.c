
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int base; } ;
struct TYPE_7__ {int base; } ;
struct TYPE_6__ {int base; } ;
struct dpu_sspp_sub_blks {TYPE_4__ csc_blk; TYPE_3__ scaler_blk; TYPE_2__ src_blk; } ;
struct dpu_hw_pipe {TYPE_1__* cap; } ;
struct TYPE_5__ {struct dpu_sspp_sub_blks* sblk; } ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dpu_hw_pipe *VAR_1,
  int VAR_2,
  u32 *VAR_3)
{
 int VAR_4 = 0;
 const struct dpu_sspp_sub_blks *VAR_5 = VAR_1->cap->sblk;

 if (!VAR_1)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
  *VAR_3 = VAR_5->src_blk.base;
  break;
 case 131:
 case 130:
 case 129:
  *VAR_3 = VAR_5->scaler_blk.base;
  break;
 case 133:
 case 132:
  *VAR_3 = VAR_5->csc_blk.base;
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
