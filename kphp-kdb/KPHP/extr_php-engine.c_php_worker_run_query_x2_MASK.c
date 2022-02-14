
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_5__ {TYPE_3__* ans; } ;
struct TYPE_6__ {int val; TYPE_1__ base; } ;
typedef TYPE_2__ php_query_x2_t ;
struct TYPE_7__ {int x2; } ;
typedef TYPE_3__ php_query_x2_answer_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2 (php_worker *VAR_1, php_query_x2_t *VAR_2) {
  FUNC_1 (VAR_0);




  static php_query_x2_answer_t VAR_3;
  VAR_3.x2 = VAR_2->val * VAR_2->val;

  VAR_2->base.ans = &VAR_3;

  FUNC_0 (VAR_0);
}
