
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_sf_sde_regs {scalar_t__ in_guest; } ;
struct TYPE_2__ {scalar_t__ exclude_host; scalar_t__ exclude_guest; scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;


 scalar_t__ FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_0, struct pt_regs *VAR_1,
         struct perf_sf_sde_regs *VAR_2)
{
 if (VAR_0->attr.exclude_user && FUNC_0(VAR_1))
  return 1;
 if (VAR_0->attr.exclude_kernel && !FUNC_0(VAR_1))
  return 1;
 if (VAR_0->attr.exclude_guest && VAR_2->in_guest)
  return 1;
 if (VAR_0->attr.exclude_host && !VAR_2->in_guest)
  return 1;
 return 0;
}
