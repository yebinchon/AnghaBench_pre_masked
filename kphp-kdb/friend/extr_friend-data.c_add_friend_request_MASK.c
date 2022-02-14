
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int req_last_date; int req_cnt; void* req_time_tree; void* req_tree; void* fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_7__ {int cat; int date; } ;
typedef TYPE_2__ tree_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 void* FUNC_2 (void*,int,int ,int,int) ;
 TYPE_2__* FUNC_3 (void*,int) ;

__attribute__((used)) static int FUNC_4 (user_t *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  tree_t *VAR_5;
  if (!VAR_1 || VAR_2 <= 0) {
    return -1;
  }
  VAR_5 = FUNC_3 (VAR_1->req_tree, VAR_2);
  if (VAR_5) {
    if (VAR_4 == 2) {
      return 0;
    }
    VAR_5->cat = VAR_3;
    VAR_5 = FUNC_3 (VAR_1->req_time_tree, -VAR_5->date);
    FUNC_0 (VAR_5);
    VAR_5->cat = VAR_3;
    return VAR_5->cat;
  } else if (VAR_4) {
    if (FUNC_3 (VAR_1->fr_tree, VAR_2)) {
      return -1;
    }
    if (VAR_0 > VAR_1->req_last_date) {
      VAR_1->req_last_date = VAR_0;
    } else {
      VAR_1->req_last_date++;
    }
    VAR_1->req_tree = FUNC_2 (VAR_1->req_tree, VAR_2, FUNC_1(), VAR_3, VAR_1->req_last_date);
    VAR_1->req_time_tree = FUNC_2 (VAR_1->req_time_tree, -VAR_1->req_last_date, FUNC_1(), VAR_3, VAR_2);
    VAR_1->req_cnt++;
    return VAR_3;
  } else {
    return 0;
  }
}
