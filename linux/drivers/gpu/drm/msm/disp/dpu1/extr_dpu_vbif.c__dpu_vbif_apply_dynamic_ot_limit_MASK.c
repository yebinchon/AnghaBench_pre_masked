
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct dpu_vbif_set_ot_params {int frame_rate; int height; int width; int xin_id; scalar_t__ rd; int is_wfd; } ;
struct dpu_vbif_dynamic_ot_tbl {size_t count; TYPE_2__* cfg; } ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_1__* cap; } ;
struct TYPE_4__ {size_t ot_limit; int pps; } ;
struct TYPE_3__ {int features; struct dpu_vbif_dynamic_ot_tbl dynamic_ot_wr_tbl; struct dpu_vbif_dynamic_ot_tbl dynamic_ot_rd_tbl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int ,int ,int ,int ,int ,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_vbif *VAR_2,
  u32 *VAR_3, struct dpu_vbif_set_ot_params *VAR_4)
{
 u64 VAR_5;
 const struct dpu_vbif_dynamic_ot_tbl *VAR_6;
 u32 VAR_7;

 if (!VAR_2 || !(VAR_2->cap->features & FUNC_0(VAR_0)))
  return;


 if (!VAR_4->is_wfd)
  return;

 VAR_5 = VAR_4->frame_rate;
 VAR_5 *= VAR_4->width;
 VAR_5 *= VAR_4->height;

 VAR_6 = VAR_4->rd ? &VAR_2->cap->dynamic_ot_rd_tbl :
   &VAR_2->cap->dynamic_ot_wr_tbl;

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  if (VAR_5 <= VAR_6->cfg[VAR_7].pps) {
   *VAR_3 = VAR_6->cfg[VAR_7].ot_limit;
   break;
  }
 }

 FUNC_1("vbif:%d xin:%d w:%d h:%d fps:%d pps:%llu ot:%u\n",
   VAR_2->idx - VAR_1, VAR_4->xin_id,
   VAR_4->width, VAR_4->height, VAR_4->frame_rate,
   VAR_5, *VAR_3);
}
