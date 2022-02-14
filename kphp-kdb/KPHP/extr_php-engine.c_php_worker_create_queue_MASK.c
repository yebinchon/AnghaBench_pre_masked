
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_5__ {TYPE_3__* ans; } ;
struct TYPE_6__ {TYPE_1__ base; int request_ids_len; int request_ids; } ;
typedef TYPE_2__ php_query_create_queue_t ;
struct TYPE_7__ {long long queue_id; } ;
typedef TYPE_3__ php_query_create_queue_answer_t ;


 long long FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 (php_worker *VAR_1, php_query_create_queue_t *VAR_2) {
  FUNC_2 (VAR_0);

  static php_query_create_queue_answer_t VAR_3;
  long long VAR_4 = FUNC_0 (VAR_2->request_ids, VAR_2->request_ids_len);
  VAR_3.queue_id = VAR_4;

  VAR_2->base.ans = &VAR_3;

  FUNC_1 (VAR_0);
}
