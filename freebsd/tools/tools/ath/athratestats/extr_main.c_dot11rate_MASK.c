
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rateioctl_rt {int* ratecode; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct ath_rateioctl_rt *VAR_1, int VAR_2)
{

 if (VAR_1->ratecode[VAR_2] & VAR_0)
  return VAR_1->ratecode[VAR_2] & ~(VAR_0);
 else
  return (VAR_1->ratecode[VAR_2] / 2);
}
