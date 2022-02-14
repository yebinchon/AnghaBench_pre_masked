
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {TYPE_3__* windows; } ;
typedef TYPE_1__ git_mwindow_file ;
struct TYPE_17__ {size_t length; } ;
struct TYPE_15__ {int open_windows; int mapped; TYPE_6__ windowfiles; } ;
typedef TYPE_2__ git_mwindow_ctl ;
struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_11__ window_map; } ;
typedef TYPE_3__ git_mwindow ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__**,TYPE_3__**) ;
 TYPE_1__* FUNC_4 (TYPE_6__*,size_t) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_5(git_mwindow_file *VAR_2)
{
 git_mwindow_ctl *VAR_3 = &VAR_1;
 size_t VAR_4;
 git_mwindow *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), **VAR_7 = &VAR_2->windows;


 if(VAR_2->windows)
  FUNC_3(VAR_2, &VAR_5, &VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_3->windowfiles.length; ++VAR_4) {
  git_mwindow *VAR_8 = VAR_5;
  git_mwindow_file *VAR_9 = FUNC_4(&VAR_3->windowfiles, VAR_4);
  FUNC_3(VAR_9, &VAR_5, &VAR_6);
  if (VAR_5 != VAR_8)
   VAR_7 = &VAR_9->windows;
 }

 if (!VAR_5) {
  FUNC_1(VAR_0, "failed to close memory window; couldn't find LRU");
  return -1;
 }

 VAR_3->mapped -= VAR_5->window_map.len;
 FUNC_2(&VAR_5->window_map);

 if (VAR_6)
  VAR_6->next = VAR_5->next;
 else
  *VAR_7 = VAR_5->next;

 FUNC_0(VAR_5);
 VAR_3->open_windows--;

 return 0;
}
