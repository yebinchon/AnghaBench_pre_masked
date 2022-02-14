
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_5__ {TYPE_3__* ans; } ;
struct TYPE_6__ {int protocol; TYPE_1__ base; int port; int host; } ;
typedef TYPE_2__ php_query_connect_t ;
struct TYPE_7__ {void* connection_id; } ;
typedef TYPE_3__ php_query_connect_answer_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int *) ;



 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;

void FUNC_4 (php_worker *VAR_4, php_query_connect_t *VAR_5) {
  FUNC_3 (VAR_1);

  static php_query_connect_answer_t VAR_6;

  switch (VAR_5->protocol) {
    case 130:
      VAR_6.connection_id = FUNC_1 (VAR_5->host, VAR_5->port, &VAR_0);
      break;
    case 128:
      VAR_6.connection_id = VAR_3;
      break;
    case 129:
      VAR_6.connection_id = FUNC_1 (VAR_5->host, VAR_5->port, &VAR_2);
      break;
    default:
      FUNC_0 ("unknown protocol" && 0);
  }

  VAR_5->base.ans = &VAR_6;

  FUNC_2 (VAR_1);
}
