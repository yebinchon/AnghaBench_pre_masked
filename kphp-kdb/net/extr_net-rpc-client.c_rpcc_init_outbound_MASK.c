
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcc_data {int in_packet_num; } ;
struct connection {int last_query_sent_time; } ;


 struct rpcc_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;

int FUNC_1 (struct connection *VAR_1) {
  struct rpcc_data *VAR_2 = FUNC_0(VAR_1);
  VAR_1->last_query_sent_time = VAR_0;

  VAR_2->in_packet_num = -2;

  return 0;
}
