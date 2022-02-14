
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_wqe_local_inval_seg {int mem_key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_wqe_local_inval_seg*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_wqe_local_inval_seg *VAR_0, u32 VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->mem_key = FUNC_0(VAR_1);
}
