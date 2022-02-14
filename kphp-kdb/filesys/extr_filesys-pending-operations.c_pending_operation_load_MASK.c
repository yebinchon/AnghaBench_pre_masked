
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_pending_operation {int st; int newpath; scalar_t__ newpath_set; int oldpath; scalar_t__ oldpath_set; int type; } ;
struct stat {int dummy; } ;
struct pending_operation {int st; void* newpath; void* oldpath; int type; } ;


 int FUNC_0 (int *,int *,int) ;
 struct pending_operation* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

struct pending_operation *FUNC_3 (struct static_pending_operation *VAR_0) {
  struct pending_operation *VAR_1 = FUNC_1 (sizeof (struct pending_operation));
  VAR_1->type = VAR_0->type;
  if (VAR_0->oldpath_set) {
    VAR_1->oldpath = FUNC_2 (VAR_0->oldpath);
  }
  if (VAR_0->newpath_set) {
    VAR_1->newpath = FUNC_2 (VAR_0->newpath);
  }
  FUNC_0 (&VAR_1->st, &VAR_0->st, sizeof (struct stat));
  return VAR_1;
}
