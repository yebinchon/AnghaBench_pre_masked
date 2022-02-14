
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {TYPE_3__* windows; } ;
typedef TYPE_1__ git_mwindow_file ;
struct TYPE_16__ {size_t length; int * contents; } ;
struct TYPE_14__ {int open_windows; int mapped; TYPE_5__ windowfiles; } ;
typedef TYPE_2__ git_mwindow_ctl ;
struct TYPE_12__ {scalar_t__ len; } ;
struct TYPE_15__ {scalar_t__ inuse_cnt; struct TYPE_15__* next; TYPE_10__ window_map; } ;
typedef TYPE_3__ git_mwindow ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_1__* FUNC_4 (TYPE_5__*,size_t) ;
 int FUNC_5 (TYPE_5__*,size_t) ;
 TYPE_2__ VAR_0 ;

void FUNC_6(git_mwindow_file *VAR_1)
{
 git_mwindow_ctl *VAR_2 = &VAR_0;
 size_t VAR_3;




 for (VAR_3 = 0; VAR_3 < VAR_2->windowfiles.length; ++VAR_3){
  if (FUNC_4(&VAR_2->windowfiles, VAR_3) == VAR_1) {
   FUNC_5(&VAR_2->windowfiles, VAR_3);
   break;
  }
 }

 if (VAR_2->windowfiles.length == 0) {
  FUNC_3(&VAR_2->windowfiles);
  VAR_2->windowfiles.contents = ((void*)0);
 }

 while (VAR_1->windows) {
  git_mwindow *VAR_4 = VAR_1->windows;
  FUNC_0(VAR_4->inuse_cnt == 0);

  VAR_2->mapped -= VAR_4->window_map.len;
  VAR_2->open_windows--;

  FUNC_2(&VAR_4->window_map);

  VAR_1->windows = VAR_4->next;
  FUNC_1(VAR_4);
 }
}
