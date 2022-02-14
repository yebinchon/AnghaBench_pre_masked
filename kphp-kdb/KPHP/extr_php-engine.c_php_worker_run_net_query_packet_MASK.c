
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_7__ {int protocol; } ;
typedef TYPE_1__ php_net_query_packet_t ;


 int FUNC_0 (int ) ;





 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;

void FUNC_5 (php_worker *VAR_0, php_net_query_packet_t *VAR_1) {

  switch (VAR_1->protocol) {
    case 130:
      FUNC_2 (VAR_0, VAR_1);
      break;
    case 128:
      FUNC_4 (VAR_0, VAR_1);
      break;
    case 129:
      FUNC_3 (VAR_0, VAR_1);
      break;
    case 132:
    case 131:
      FUNC_1 (VAR_0, VAR_1);
      break;
    default:
      FUNC_0 (0);
  }

}
