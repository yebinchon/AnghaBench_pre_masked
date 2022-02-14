
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lev_rotate_to {int dummy; } ;
struct lev_rotate_from {int dummy; } ;
struct TYPE_9__ {int orig_file_size; TYPE_2__* F; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_7__ {int filename; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct lev_rotate_to*,struct lev_rotate_from*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,char const*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,struct lev_rotate_to*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int) ;

int FUNC_6 (const char *VAR_1, const char *VAR_2) {
  stream_t VAR_3, VAR_4;
  if (FUNC_3 (&VAR_3, 0, VAR_1, 0) < 0) {
    FUNC_0 ("stream open for file '%s' failed.\n", VAR_1);
    return -1;
  }
  struct lev_rotate_to VAR_5;
  if (FUNC_4 (&VAR_3, &VAR_5) < 0) {
    return -1;
  }
  if (FUNC_3 (&VAR_4, 0, VAR_2, 0) < 0) {
    FUNC_0 ("stream open for file '%s' failed.\n", VAR_2);
    return -1;
  }
  if (VAR_4.orig_file_size < 36) {
    FUNC_0 ("file '%s' is too short.\n", VAR_2);
    return -1;
  }
  if (FUNC_5 (&VAR_4, VAR_0, 36) < 36) {
    FUNC_1 ("fail read %d head bytes from file '%s'", 36, VAR_4.F->info->filename);
    return -1;
  }
  if (FUNC_2 (&VAR_5, (struct lev_rotate_from *) VAR_0) <= 0) {
    FUNC_1 ("rotation check for files '%s' and '%s' failed.\n", VAR_1, VAR_2);
    return -1;
  }
  return 0;
}
