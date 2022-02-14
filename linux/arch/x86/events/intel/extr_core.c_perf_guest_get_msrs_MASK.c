
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_guest_switch_msr {int dummy; } ;
struct TYPE_2__ {struct perf_guest_switch_msr* (* guest_get_msrs ) (int*) ;} ;


 struct perf_guest_switch_msr* FUNC_0 (int*) ;
 TYPE_1__ VAR_0 ;

struct perf_guest_switch_msr *FUNC_1(int *VAR_1)
{
 if (VAR_0.guest_get_msrs)
  return VAR_0.guest_get_msrs(VAR_1);
 *VAR_1 = 0;
 return ((void*)0);
}
