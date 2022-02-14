
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_worker ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ php_query_base_t ;
typedef int php_net_query_packet_t ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2 (php_worker *VAR_0, php_query_base_t *VAR_1) {
  switch (VAR_1->type & 0xFFFF) {
    case 128:
      FUNC_1 (VAR_0, (php_net_query_packet_t *)VAR_1);
      break;
    default:
      FUNC_0 ("unknown net_query type"&& 0);
  }
}
