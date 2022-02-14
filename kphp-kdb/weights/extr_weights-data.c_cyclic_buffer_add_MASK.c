
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t c_rptr; scalar_t__ type; struct TYPE_4__* next; } ;
typedef TYPE_1__ weights_subscription_t ;
struct TYPE_5__ {int vector_id; int coord_id; int timestamp; scalar_t__ refcnt; } ;


 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_2 (int VAR_6, int VAR_7, int VAR_8) {
  if (!FUNC_1 (VAR_6, VAR_7, VAR_8)) {
    return;
  }
  if (VAR_0[VAR_2].refcnt) {
    weights_subscription_t *VAR_9;
    for (VAR_9 = VAR_5.next; VAR_9 != &VAR_5; VAR_9 = VAR_9->next) {
      if (VAR_9->c_rptr == VAR_2) {
        FUNC_0 (VAR_9->type == VAR_4);
        VAR_9->type = VAR_3;
        VAR_9->c_rptr = -1;
      }
    }
  }
  VAR_0[VAR_2].vector_id = VAR_6;
  VAR_0[VAR_2].coord_id = VAR_7;
  VAR_0[VAR_2].timestamp = VAR_8;
  VAR_0[VAR_2].refcnt = 0;
  VAR_2 = (VAR_2 + 1) % VAR_1;
}
