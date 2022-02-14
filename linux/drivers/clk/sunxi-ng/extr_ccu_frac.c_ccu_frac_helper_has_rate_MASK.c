
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccu_frac_internal {unsigned long* rates; } ;
struct ccu_common {int features; } ;


 int VAR_0 ;

bool FUNC_0(struct ccu_common *VAR_1,
         struct ccu_frac_internal *VAR_2,
         unsigned long VAR_3)
{
 if (!(VAR_1->features & VAR_0))
  return 0;

 return (VAR_2->rates[0] == VAR_3) || (VAR_2->rates[1] == VAR_3);
}
