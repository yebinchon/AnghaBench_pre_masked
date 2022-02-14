
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int php_worker ;
typedef int php_query_x2_t ;
typedef int php_query_rpc_message ;
typedef int php_query_rpc_answer ;
typedef int php_query_http_load_post_t ;
typedef int php_query_create_queue_t ;
typedef int php_query_connect_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ php_query_base_t ;
struct TYPE_5__ {char* desc; int q_id; } ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void FUNC_10 (php_worker *VAR_3) {
  php_query_base_t *VAR_4 = (php_query_base_t *)FUNC_1 (VAR_0);

  FUNC_9();

  VAR_1.q_id = VAR_2;
  switch ((unsigned int)VAR_4->type & 0xFFFF0000) {
    case 128:
      VAR_1.desc = "PHPQX2";
      FUNC_6 (VAR_3, (php_query_x2_t *)VAR_4);
      break;
    case 130:
      VAR_1.desc = "RPC_ANSWER";
      FUNC_7 (VAR_3, (php_query_rpc_answer *)VAR_4);
      break;
    case 129:
      VAR_1.desc = "RPC_SEND_MESSAGE";
      FUNC_8 (VAR_3, (php_query_rpc_message *)VAR_4);
      break;
    case 134:
      VAR_1.desc = "CONNECT";
      FUNC_5 (VAR_3, (php_query_connect_t *)VAR_4);
      break;
    case 131:
      VAR_1.desc = "NET";
      FUNC_4 (VAR_3, VAR_4);
      break;
    case 133:
      VAR_1.desc = "CREATE_QUEUE";
      FUNC_2 (VAR_3, (php_query_create_queue_t *)VAR_4);
      break;
    case 132:
      VAR_1.desc = "HTTP_LOAD_POST";
      FUNC_3 (VAR_3, (php_query_http_load_post_t *)VAR_4);
      break;
    default:
      FUNC_0 ("unknown php_query type" && 0);
  }
}
