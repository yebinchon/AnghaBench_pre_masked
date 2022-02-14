
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_wq {int fbc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;

__attribute__((used)) static void *FUNC_2(struct mlx5_ib_wq *VAR_1, u32 VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_1
  (&VAR_1->fbc,
   FUNC_0(&VAR_1->fbc, VAR_2));

 return VAR_3 + VAR_0;
}
