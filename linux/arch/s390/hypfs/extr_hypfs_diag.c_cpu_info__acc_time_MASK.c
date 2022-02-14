
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diag204_x_cpu_info {int acc_time; } ;
struct diag204_cpu_info {int acc_time; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;
typedef int __u64 ;


 int VAR_0 ;

__attribute__((used)) static inline __u64 FUNC_0(enum diag204_format VAR_1, void *VAR_2)
{
 if (VAR_1 == VAR_0)
  return ((struct diag204_cpu_info *)VAR_2)->acc_time;
 else
  return ((struct diag204_x_cpu_info *)VAR_2)->acc_time;
}
