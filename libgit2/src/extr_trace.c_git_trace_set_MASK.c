
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ git_trace_level_t ;
typedef int * git_trace_cb ;
struct TYPE_2__ {int * callback; scalar_t__ level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_2 ;

int FUNC_3(git_trace_level_t VAR_3, git_trace_cb VAR_4)
{
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 FUNC_2(VAR_0,
  "this version of libgit2 was not built with tracing.");
 return -1;

}
