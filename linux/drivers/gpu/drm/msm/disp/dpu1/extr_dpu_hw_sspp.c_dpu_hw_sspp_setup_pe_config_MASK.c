
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dpu_hw_pixel_ext {int const* right_ftch; int const* right_rpt; int const* left_ftch; int const* left_rpt; int const* btm_ftch; int const* btm_rpt; int const* top_ftch; int const* top_rpt; int const* roi_h; int const* num_ext_pxls_top; int const* num_ext_pxls_btm; int const* roi_w; int const* num_ext_pxls_left; int const* num_ext_pxls_right; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pipe {struct dpu_hw_blk_reg_map hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct dpu_hw_pipe*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_pipe *VAR_11,
  struct dpu_hw_pixel_ext *VAR_12)
{
 struct dpu_hw_blk_reg_map *VAR_13;
 u8 VAR_14;
 u32 VAR_15[4], VAR_16[4], VAR_17[4];
 const u32 VAR_18 = 0xff;
 const u32 VAR_19 = 0xffff;
 u32 VAR_20;

 if (FUNC_1(VAR_11, VAR_1, &VAR_20) || !VAR_12)
  return;

 VAR_13 = &VAR_11->hw;


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {

  if (VAR_14 == 2)
   continue;

  VAR_15[VAR_14] = ((VAR_12->right_ftch[VAR_14] & VAR_18) << 24)|
   ((VAR_12->right_rpt[VAR_14] & VAR_18) << 16)|
   ((VAR_12->left_ftch[VAR_14] & VAR_18) << 8)|
   (VAR_12->left_rpt[VAR_14] & VAR_18);

  VAR_16[VAR_14] = ((VAR_12->btm_ftch[VAR_14] & VAR_18) << 24)|
   ((VAR_12->btm_rpt[VAR_14] & VAR_18) << 16)|
   ((VAR_12->top_ftch[VAR_14] & VAR_18) << 8)|
   (VAR_12->top_rpt[VAR_14] & VAR_18);

  VAR_17[VAR_14] = (((VAR_12->roi_h[VAR_14] +
   VAR_12->num_ext_pxls_top[VAR_14] +
   VAR_12->num_ext_pxls_btm[VAR_14]) & VAR_19) << 16) |
   ((VAR_12->roi_w[VAR_14] +
   VAR_12->num_ext_pxls_left[VAR_14] +
   VAR_12->num_ext_pxls_right[VAR_14]) & VAR_19);
 }


 FUNC_0(VAR_13, VAR_2 + VAR_20, VAR_15[0]);
 FUNC_0(VAR_13, VAR_4 + VAR_20, VAR_16[0]);
 FUNC_0(VAR_13, VAR_3 + VAR_20,
   VAR_17[0]);


 FUNC_0(VAR_13, VAR_5 + VAR_20, VAR_15[1]);
 FUNC_0(VAR_13, VAR_7 + VAR_20, VAR_16[1]);
 FUNC_0(VAR_13, VAR_6 + VAR_20,
   VAR_17[1]);


 FUNC_0(VAR_13, VAR_8 + VAR_20, VAR_15[3]);
 FUNC_0(VAR_13, VAR_10 + VAR_20, VAR_15[3]);
 FUNC_0(VAR_13, VAR_9 + VAR_20,
   VAR_17[3]);
}
