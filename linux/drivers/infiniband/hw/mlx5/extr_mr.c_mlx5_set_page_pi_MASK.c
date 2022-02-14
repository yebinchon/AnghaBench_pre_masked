
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_mr {scalar_t__ meta_ndescs; scalar_t__ max_descs; int ndescs; int * descs; } ;
struct ib_mr {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct mlx5_ib_mr* FUNC_1 (struct ib_mr*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_3, u64 VAR_4)
{
 struct mlx5_ib_mr *VAR_5 = FUNC_1(VAR_3);
 __be64 *VAR_6;

 if (FUNC_2(VAR_5->ndescs + VAR_5->meta_ndescs == VAR_5->max_descs))
  return -VAR_0;

 VAR_6 = VAR_5->descs;
 VAR_6[VAR_5->ndescs + VAR_5->meta_ndescs++] =
  FUNC_0(VAR_4 | VAR_1 | VAR_2);

 return 0;
}
