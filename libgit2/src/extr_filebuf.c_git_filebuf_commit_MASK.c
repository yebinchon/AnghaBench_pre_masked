
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd_is_open; int fd; int did_rename; scalar_t__ path_original; scalar_t__ do_fsync; scalar_t__ path_lock; int flush_mode; } ;
typedef TYPE_1__ git_filebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

int FUNC_9(git_filebuf *VAR_2)
{

 FUNC_0(VAR_2 && VAR_2->path_original);

 VAR_2->flush_mode = VAR_1;
 FUNC_1(VAR_2);

 if (FUNC_8(VAR_2) < 0)
  goto on_error;

 VAR_2->fd_is_open = 0;

 if (VAR_2->do_fsync && FUNC_6(VAR_2->fd) < 0) {
  FUNC_2(VAR_0, "failed to fsync '%s'", VAR_2->path_lock);
  goto on_error;
 }

 if (FUNC_5(VAR_2->fd) < 0) {
  FUNC_2(VAR_0, "failed to close file at '%s'", VAR_2->path_lock);
  goto on_error;
 }

 VAR_2->fd = -1;

 if (FUNC_7(VAR_2->path_lock, VAR_2->path_original) < 0) {
  FUNC_2(VAR_0, "failed to rename lockfile to '%s'", VAR_2->path_original);
  goto on_error;
 }

 if (VAR_2->do_fsync && FUNC_4(VAR_2->path_original) < 0)
  goto on_error;

 VAR_2->did_rename = 1;

 FUNC_3(VAR_2);
 return 0;

on_error:
 FUNC_3(VAR_2);
 return -1;
}
