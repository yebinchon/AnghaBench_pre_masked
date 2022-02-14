
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double percent_label_buff; double percent_record_buff; double percent_nodes; double percent_edges; } ;
typedef TYPE_1__ dns_stat_t ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;

void FUNC_0 (dns_stat_t *VAR_9) {
  VAR_9->percent_label_buff = (VAR_5 * 100.0) / VAR_0;
  VAR_9->percent_label_buff = (VAR_4 * 100.0) / VAR_0;
  VAR_9->percent_record_buff = (VAR_6 * 100.0) / VAR_3;
  VAR_9->percent_nodes = (VAR_8 * 100.0) / VAR_2;
  VAR_9->percent_edges = (VAR_7 * 100.0) / VAR_1;
}
