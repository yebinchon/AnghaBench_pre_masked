
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_scaler3_cfg {int dummy; } ;
struct dpu_hw_pixel_ext {int dummy; } ;
struct TYPE_8__ {int format; } ;
struct dpu_hw_pipe_cfg {TYPE_4__ layout; } ;
struct dpu_hw_pipe {TYPE_3__* cap; int hw; } ;
struct TYPE_7__ {TYPE_2__* sblk; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_6__ {TYPE_1__ scaler_blk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dpu_hw_pipe*,int ,int *) ;
 int FUNC_1 (int *,struct dpu_hw_scaler3_cfg*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_pipe *VAR_1,
  struct dpu_hw_pipe_cfg *VAR_2,
  struct dpu_hw_pixel_ext *VAR_3,
  void *VAR_4)
{
 u32 VAR_5;
 struct dpu_hw_scaler3_cfg *VAR_6 = VAR_4;

 (void)VAR_3;
 if (FUNC_0(VAR_1, VAR_0, &VAR_5) || !VAR_2
  || !VAR_6 || !VAR_1 || !VAR_1->cap || !VAR_1->cap->sblk)
  return;

 FUNC_1(&VAR_1->hw, VAR_6, VAR_5,
   VAR_1->cap->sblk->scaler_blk.version,
   VAR_2->layout.format);
}
