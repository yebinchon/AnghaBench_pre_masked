
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pconfig_target { ____Placeholder_pconfig_target } pconfig_target ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long long VAR_1 ;

int FUNC_2(enum pconfig_target VAR_2)
{




 FUNC_0(VAR_0 >= 64);

 if (FUNC_1(VAR_2 >= 64))
  return 0;
 return VAR_1 & (1ULL << VAR_2);
}
