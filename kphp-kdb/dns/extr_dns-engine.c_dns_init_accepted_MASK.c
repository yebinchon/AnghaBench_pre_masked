
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int last_query_time; } ;
struct TYPE_2__ {int dns_tcp_connections; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_0 (struct connection *VAR_2) {
  VAR_1.dns_tcp_connections++;
  VAR_2->last_query_time = VAR_0;
  return 0;
}
