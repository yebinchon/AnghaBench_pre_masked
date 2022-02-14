
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int started; int ended; int flags; scalar_t__ pathlist_walk_idx; scalar_t__ stat_calls; } ;
typedef TYPE_1__ git_iterator ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(git_iterator *VAR_1)
{
 VAR_1->started = 0;
 VAR_1->ended = 0;
 VAR_1->stat_calls = 0;
 VAR_1->pathlist_walk_idx = 0;
 VAR_1->flags &= ~VAR_0;
}
