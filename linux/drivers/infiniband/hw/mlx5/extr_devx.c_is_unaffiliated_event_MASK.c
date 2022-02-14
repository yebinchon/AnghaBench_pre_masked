
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;


 unsigned long VAR_0 ;
 int * FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int) ;
 unsigned long long FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_5(struct mlx5_core_dev *VAR_3,
      unsigned long VAR_4)
{
 __be64 *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_3, VAR_1))
  return FUNC_4(VAR_4);

 VAR_5 = FUNC_0(VAR_3,
       VAR_2);
 FUNC_2(VAR_4 > VAR_0);

 VAR_6 = VAR_4 / 64;
 VAR_7 = VAR_4 % 64;

 if (!(FUNC_3(VAR_5[VAR_6]) & (1ull << VAR_7)))
  return 0;

 return 1;
}
