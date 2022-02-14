
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fr_cnt; scalar_t__ fr_tree; int user_id; } ;
typedef TYPE_1__ user_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_2) {
  if (!VAR_2) { return 0; }
  if (VAR_1) {
    VAR_0 = FUNC_1 (VAR_0, VAR_2->user_id, VAR_2->fr_tree);
  }
  FUNC_0 (VAR_2->fr_tree);
  VAR_2->fr_tree = 0;
  VAR_2->fr_cnt = 0;
  return 1;
}
