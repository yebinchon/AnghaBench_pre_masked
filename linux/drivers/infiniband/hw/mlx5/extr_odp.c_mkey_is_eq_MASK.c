
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_mkey {scalar_t__ type; scalar_t__ key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct mlx5_core_mkey *VAR_1, u32 VAR_2)
{
 if (!VAR_1)
  return 0;
 if (VAR_1->type == VAR_0)
  return FUNC_0(VAR_1->key) == FUNC_0(VAR_2);
 return VAR_1->key == VAR_2;
}
