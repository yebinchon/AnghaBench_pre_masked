
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strdup_strings; } ;
struct reflog_walk_info {TYPE_1__ complete_reflogs; } ;


 struct reflog_walk_info* FUNC_0 (int,int) ;

void FUNC_1(struct reflog_walk_info **VAR_0)
{
 *VAR_0 = FUNC_0(1, sizeof(struct reflog_walk_info));
 (*VAR_0)->complete_reflogs.strdup_strings = 1;
}
