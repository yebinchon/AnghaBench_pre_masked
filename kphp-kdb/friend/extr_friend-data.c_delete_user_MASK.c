
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_id; scalar_t__ req_cnt; scalar_t__ fr_cnt; scalar_t__ pr_tree; scalar_t__ req_time_tree; scalar_t__ req_tree; scalar_t__ fr_tree; } ;
typedef TYPE_1__ user_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5 (int VAR_3) {
  int VAR_4 = FUNC_0 (VAR_3);
  user_t *VAR_5;
  if (VAR_4 < 0 || VAR_3 == VAR_1) {
    return -1;
  }
  if (!VAR_0[VAR_4]) {
    return 0;
  }
  VAR_5 = VAR_0[VAR_4];
  VAR_0[VAR_4] = 0;


  FUNC_1 (VAR_5);
  FUNC_3 (VAR_5->req_tree);
  FUNC_3 (VAR_5->req_time_tree);
  FUNC_2 (VAR_5->pr_tree);

  VAR_5->fr_tree = 0;
  VAR_5->req_tree = 0;
  VAR_5->req_time_tree = 0;
  VAR_5->pr_tree = 0;
  VAR_5->fr_cnt = 0;
  VAR_5->req_cnt = 0;
  VAR_5->user_id = -1;

  FUNC_4 (VAR_5);
  VAR_2--;

  return 1;
}
