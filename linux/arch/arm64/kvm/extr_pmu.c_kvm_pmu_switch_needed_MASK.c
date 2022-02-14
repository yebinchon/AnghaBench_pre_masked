
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ exclude_host; scalar_t__ exclude_guest; scalar_t__ exclude_user; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct perf_event_attr *VAR_0)
{





 if (FUNC_0() && VAR_0->exclude_user)
  return 0;


 return (VAR_0->exclude_host != VAR_0->exclude_guest);
}
