
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ req_cnt; scalar_t__ req_time_tree; scalar_t__ req_tree; } ;
typedef TYPE_1__ user_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1 (user_t *VAR_0) {
  if (!VAR_0) {
    return -1;
  }
  FUNC_0 (VAR_0->req_tree);
  FUNC_0 (VAR_0->req_time_tree);
  VAR_0->req_tree = 0;
  VAR_0->req_time_tree = 0;
  VAR_0->req_cnt = 0;
  return 1;
}
