
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;



__attribute__((used)) static int FUNC_0(struct perf_event_attr *VAR_0)
{

 return VAR_0->exclude_user || VAR_0->exclude_kernel;
}
