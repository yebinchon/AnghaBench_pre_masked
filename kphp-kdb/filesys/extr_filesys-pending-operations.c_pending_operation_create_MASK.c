
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct pending_operation {int type; int st; void* newpath; void* oldpath; } ;
typedef enum pending_operation_tp { ____Placeholder_pending_operation_tp } pending_operation_tp ;


 int FUNC_0 (int *,struct stat*,int) ;
 struct pending_operation* FUNC_1 (int) ;
 void* FUNC_2 (char const* const) ;

struct pending_operation *FUNC_3 (enum pending_operation_tp VAR_0, const char *const VAR_1, const char *const VAR_2, struct stat *VAR_3) {
  struct pending_operation *VAR_4 = FUNC_1 (sizeof (struct pending_operation));
  VAR_4->type = VAR_0;
  if (VAR_1) {
    VAR_4->oldpath = FUNC_2 (VAR_1);
  }
  if (VAR_2) {
    VAR_4->newpath = FUNC_2 (VAR_2);
  }
  if (VAR_3) {
    FUNC_0 (&VAR_4->st, VAR_3, sizeof (struct stat));
  }
  return VAR_4;
}
