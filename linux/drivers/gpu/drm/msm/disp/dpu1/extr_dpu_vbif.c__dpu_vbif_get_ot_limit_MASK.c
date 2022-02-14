
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dpu_vbif_set_ot_params {int xin_id; scalar_t__ rd; } ;
struct TYPE_4__ {scalar_t__ (* get_limit_conf ) (struct dpu_hw_vbif*,int ,scalar_t__) ;} ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_2__ ops; TYPE_1__* cap; } ;
struct TYPE_3__ {scalar_t__ default_ot_wr_limit; scalar_t__ default_ot_rd_limit; } ;


 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct dpu_hw_vbif*,scalar_t__*,struct dpu_vbif_set_ot_params*) ;
 scalar_t__ FUNC_3 (struct dpu_hw_vbif*,int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct dpu_hw_vbif *VAR_2,
 struct dpu_vbif_set_ot_params *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5;

 if (!VAR_2 || !VAR_2->cap) {
  FUNC_1("invalid arguments vbif %d\n", VAR_2 != 0);
  return -VAR_0;
 }

 if (VAR_2->cap->default_ot_wr_limit && !VAR_3->rd)
  VAR_4 = VAR_2->cap->default_ot_wr_limit;
 else if (VAR_2->cap->default_ot_rd_limit && VAR_3->rd)
  VAR_4 = VAR_2->cap->default_ot_rd_limit;





 if (VAR_4 == 0)
  goto exit;


 FUNC_2(VAR_2, &VAR_4, VAR_3);

 if (VAR_2 && VAR_2->ops.get_limit_conf) {
  VAR_5 = VAR_2->ops.get_limit_conf(VAR_2,
    VAR_3->xin_id, VAR_3->rd);
  if (VAR_5 == VAR_4)
   VAR_4 = 0;
 }

exit:
 FUNC_0("vbif:%d xin:%d ot_lim:%d\n",
   VAR_2->idx - VAR_1, VAR_3->xin_id, VAR_4);
 return VAR_4;
}
