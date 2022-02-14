
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct devx_obj {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int * FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 unsigned long long FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int,int*,struct devx_obj*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_4(struct mlx5_core_dev *VAR_4,
       int VAR_5, u16 *VAR_6,
       struct devx_obj *VAR_7)
{
 __be64 *VAR_8;
 __be64 *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_4, VAR_1)) {
  VAR_8 = FUNC_0(VAR_4,
      VAR_2);
  VAR_9 = FUNC_0(VAR_4,
        VAR_3);
 } else {
  return FUNC_3(VAR_5, VAR_6,
           VAR_7);
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (VAR_6[VAR_12] > VAR_0)
   return 0;

  VAR_10 = VAR_6[VAR_12] / 64;
  VAR_11 = VAR_6[VAR_12] % 64;

  if (VAR_7) {

   if (VAR_6[VAR_12] == 0)
    continue;

   if (!(FUNC_2(VAR_8[VAR_10]) &
     (1ull << VAR_11)))
    return 0;

   continue;
  }

  if (!(FUNC_2(VAR_9[VAR_10]) &
    (1ull << VAR_11)))
   return 0;
 }

 return 1;
}
