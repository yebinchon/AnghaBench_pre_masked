
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ req_cnt; void* req_time_tree; void* req_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {int date; } ;
typedef TYPE_2__ tree_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;
 TYPE_2__* FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3 (user_t *VAR_0, int VAR_1) {
  tree_t *VAR_2;
  if (!VAR_0 || VAR_1 <= 0) {
    return -1;
  }
  VAR_2 = FUNC_2 (VAR_0->req_tree, VAR_1);
  if (VAR_2) {
    int VAR_3 = VAR_2->date;
    VAR_0->req_tree = FUNC_1 (VAR_0->req_tree, VAR_1);
    VAR_0->req_time_tree = FUNC_1 (VAR_0->req_time_tree, -VAR_3);
    VAR_0->req_cnt--;
    FUNC_0 (VAR_0->req_cnt >= 0);
    return 1;
  }
  return 0;
}
