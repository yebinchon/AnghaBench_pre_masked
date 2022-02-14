
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_inline_seg {int byte_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct mlx4_wqe_inline_seg *VAR_1 = VAR_0;
 FUNC_1(VAR_0, 0, 16);
 VAR_1->byte_count = FUNC_0(1 << 31);
}
