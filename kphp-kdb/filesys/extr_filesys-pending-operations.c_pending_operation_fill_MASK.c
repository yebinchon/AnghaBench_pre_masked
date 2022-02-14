
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_pending_operation {int type; int oldpath_set; int newpath_set; int st; int newpath; int oldpath; } ;
struct stat {int dummy; } ;
typedef enum pending_operation_tp { ____Placeholder_pending_operation_tp } pending_operation_tp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct stat*,int) ;
 int FUNC_2 (int ,char const* const) ;
 scalar_t__ FUNC_3 (char const* const) ;

void FUNC_4 (struct static_pending_operation *VAR_1, enum pending_operation_tp VAR_2, const char *const VAR_3, const char *const VAR_4, struct stat *VAR_5) {
  VAR_1->type = VAR_2;
  VAR_1->oldpath_set = VAR_1->newpath_set = 0;
  if (VAR_3) {
    FUNC_0 (FUNC_3 (VAR_3) < VAR_0);
    FUNC_2 (VAR_1->oldpath, VAR_3);
    VAR_1->oldpath_set = 1;
  }
  if (VAR_4) {
    FUNC_0 (FUNC_3 (VAR_4) < VAR_0);
    FUNC_2 (VAR_1->newpath, VAR_4);
    VAR_1->newpath_set = 1;
  }
  if (VAR_5) {
    FUNC_1 (&VAR_1->st, VAR_5, sizeof (struct stat));
  }
}
