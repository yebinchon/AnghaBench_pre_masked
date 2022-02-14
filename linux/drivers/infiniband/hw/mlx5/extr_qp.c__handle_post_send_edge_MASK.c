
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_wq {int cur_post; int wqe_cnt; int fbc; } ;


 void* FUNC_0 (struct mlx5_ib_wq*,int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_wq *VAR_0, void **VAR_1,
       u32 VAR_2, void **VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_0->cur_post + (VAR_2 >> 2)) & (VAR_0->wqe_cnt - 1);
 *VAR_3 = FUNC_0(VAR_0, VAR_4);

 *VAR_1 = FUNC_1(&VAR_0->fbc, VAR_4);
}
