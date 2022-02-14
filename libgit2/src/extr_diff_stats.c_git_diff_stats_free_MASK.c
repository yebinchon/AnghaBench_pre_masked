
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* filestats; int diff; } ;
typedef TYPE_1__ git_diff_stats ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(git_diff_stats *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(VAR_0->diff);
 FUNC_0(VAR_0->filestats);
 FUNC_0(VAR_0);
}
