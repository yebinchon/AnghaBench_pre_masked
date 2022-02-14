
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct intel_dp {int max_link_rate; } ;


 scalar_t__ FUNC_0 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_1(struct intel_dp *VAR_0, int VAR_1,
           u8 VAR_2)
{





 if (VAR_1 == 0 ||
     VAR_1 > VAR_0->max_link_rate)
  return 0;

 if (VAR_2 == 0 ||
     VAR_2 > FUNC_0(VAR_0))
  return 0;

 return 1;
}
