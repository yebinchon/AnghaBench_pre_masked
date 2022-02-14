
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_off_t ;
struct TYPE_12__ {TYPE_4__* windows; int size; int fd; } ;
typedef TYPE_2__ git_mwindow_file ;
struct TYPE_13__ {int used_ctr; } ;
typedef TYPE_3__ git_mwindow_ctl ;
struct TYPE_11__ {int len; scalar_t__ data; } ;
struct TYPE_14__ {int offset; TYPE_1__ window_map; int inuse_cnt; scalar_t__ last_used; struct TYPE_14__* next; } ;
typedef TYPE_4__ git_mwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 TYPE_3__ VAR_2 ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int ,int ,int) ;

unsigned char *FUNC_5(
 git_mwindow_file *VAR_3,
 git_mwindow **VAR_4,
 git_off_t VAR_5,
 size_t VAR_6,
 unsigned int *VAR_7)
{
 git_mwindow_ctl *VAR_8 = &VAR_2;
 git_mwindow *VAR_9 = *VAR_4;

 if (FUNC_1(&VAR_1)) {
  FUNC_0(VAR_0, "unable to lock mwindow mutex");
  return ((void*)0);
 }

 if (!VAR_9 || !(FUNC_3(VAR_9, VAR_5) && FUNC_3(VAR_9, VAR_5 + VAR_6))) {
  if (VAR_9) {
   VAR_9->inuse_cnt--;
  }

  for (VAR_9 = VAR_3->windows; VAR_9; VAR_9 = VAR_9->next) {
   if (FUNC_3(VAR_9, VAR_5) &&
    FUNC_3(VAR_9, VAR_5 + VAR_6))
    break;
  }





  if (!VAR_9) {
   VAR_9 = FUNC_4(VAR_3, VAR_3->fd, VAR_3->size, VAR_5);
   if (VAR_9 == ((void*)0)) {
    FUNC_2(&VAR_1);
    return ((void*)0);
   }
   VAR_9->next = VAR_3->windows;
   VAR_3->windows = VAR_9;
  }
 }


 if (VAR_9 != *VAR_4) {
  VAR_9->last_used = VAR_8->used_ctr++;
  VAR_9->inuse_cnt++;
  *VAR_4 = VAR_9;
 }

 VAR_5 -= VAR_9->offset;

 if (VAR_7)
  *VAR_7 = (unsigned int)(VAR_9->window_map.len - VAR_5);

 FUNC_2(&VAR_1);
 return (unsigned char *) VAR_9->window_map.data + VAR_5;
}
