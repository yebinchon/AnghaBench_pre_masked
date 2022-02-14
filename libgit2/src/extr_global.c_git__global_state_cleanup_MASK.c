
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * message; } ;
struct TYPE_5__ {TYPE_1__ error_t; } ;
typedef TYPE_2__ git_global_st ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(git_global_st *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->error_t.message);
 VAR_0->error_t.message = ((void*)0);
}
