
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_ib_mr {scalar_t__ npages; scalar_t__ max_pages; int * pages; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct mlx4_ib_mr* FUNC_1 (struct ib_mr*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_2, u64 VAR_3)
{
 struct mlx4_ib_mr *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_4->npages == VAR_4->max_pages))
  return -VAR_0;

 VAR_4->pages[VAR_4->npages++] = FUNC_0(VAR_3 | VAR_1);

 return 0;
}
