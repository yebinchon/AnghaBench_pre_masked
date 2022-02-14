
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_wqe_inline_seg {int byte_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 u32 *VAR_1 = VAR_0;
 struct mlx4_wqe_inline_seg *VAR_2 = VAR_0;

 VAR_1[1] = 0;
 FUNC_1();

 VAR_2->byte_count = FUNC_0((1 << 31) | 4);
}
