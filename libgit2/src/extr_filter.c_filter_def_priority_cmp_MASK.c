
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; } ;
typedef TYPE_1__ git_filter_def ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2 = ((const git_filter_def *)VAR_0)->priority;
 int VAR_3 = ((const git_filter_def *)VAR_1)->priority;
 return (VAR_2 < VAR_3) ? -1 : (VAR_2 > VAR_3) ? 1 : 0;
}
