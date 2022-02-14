
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ time; } ;
typedef TYPE_1__ git_commit_list_node ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int64_t VAR_2 = ((git_commit_list_node *) VAR_0)->time;
 int64_t VAR_3 = ((git_commit_list_node *) VAR_1)->time;

 if (VAR_2 < VAR_3)
  return 1;
 if (VAR_2 > VAR_3)
  return -1;

 return 0;
}
