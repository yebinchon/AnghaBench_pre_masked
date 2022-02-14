
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_pipe_cdp_cfg {scalar_t__ preload_ahead; scalar_t__ tile_amortize_enable; scalar_t__ ubwc_meta_enable; scalar_t__ enable; } ;
struct dpu_hw_pipe {int hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct dpu_hw_pipe*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_pipe *VAR_3,
  struct dpu_hw_pipe_cdp_cfg *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = 0;

 if (!VAR_3 || !VAR_4)
  return;

 if (FUNC_2(VAR_3, VAR_1, &VAR_5))
  return;

 if (VAR_4->enable)
  VAR_6 |= FUNC_0(0);
 if (VAR_4->ubwc_meta_enable)
  VAR_6 |= FUNC_0(1);
 if (VAR_4->tile_amortize_enable)
  VAR_6 |= FUNC_0(2);
 if (VAR_4->preload_ahead == VAR_0)
  VAR_6 |= FUNC_0(3);

 FUNC_1(&VAR_3->hw, VAR_2, VAR_6);
}
