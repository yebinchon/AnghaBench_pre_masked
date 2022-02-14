
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* windows; } ;
typedef TYPE_1__ git_mwindow_file ;
struct TYPE_7__ {scalar_t__ last_used; int inuse_cnt; struct TYPE_7__* next; } ;
typedef TYPE_2__ git_mwindow ;



__attribute__((used)) static void FUNC_0(
 git_mwindow_file *VAR_0,
 git_mwindow **VAR_1,
 git_mwindow **VAR_2)
{
 git_mwindow *VAR_3, *VAR_4;

 for (VAR_4 = ((void*)0), VAR_3 = VAR_0->windows; VAR_3; VAR_3 = VAR_3->next) {
  if (!VAR_3->inuse_cnt) {





   if (!*VAR_1 || VAR_3->last_used < (*VAR_1)->last_used) {
    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
   }
  }
  VAR_4 = VAR_3;
 }
}
