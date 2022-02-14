
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct host1x_syncpt {int max_val; int min_val; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct host1x_syncpt*) ;
 int FUNC_2 () ;

bool FUNC_3(struct host1x_syncpt *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 FUNC_2();

 VAR_2 = (u32)FUNC_0(&VAR_0->min_val);
 VAR_3 = (u32)FUNC_0(&VAR_0->max_val);
 if (!FUNC_1(VAR_0))
  return VAR_3 - VAR_1 >= VAR_2 - VAR_1;
 else
  return (s32)(VAR_2 - VAR_1) >= 0;
}
