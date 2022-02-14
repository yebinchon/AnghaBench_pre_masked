
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_wqe_umr_ctrl_seg {int mkey_mask; int xlt_octowords; int flags; } ;
struct mlx5_ib_mr {int ndescs; int meta_ndescs; int desc_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_wqe_umr_ctrl_seg *VAR_0,
       struct mlx5_ib_mr *VAR_1, u8 VAR_2, bool VAR_3)
{
 int VAR_4 = (VAR_1->ndescs + VAR_1->meta_ndescs) * VAR_1->desc_size;

 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->flags = VAR_2;
 VAR_0->xlt_octowords = FUNC_0(FUNC_2(VAR_4));
 VAR_0->mkey_mask = FUNC_1(VAR_3);
}
