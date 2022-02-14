
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (double,int) ;
 int FUNC_1 (int ,int ,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,double,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_2 (void) {
  int VAR_16 = VAR_11 - VAR_13;

  return VAR_15 = FUNC_1 (VAR_14, VAR_4,
      "start_time\t%d\n"
      "current_time\t%d\n"
      "uptime\t%d\n"
      "network_connections\t%d\n"
      "max_network_connections\t%d\n"
      "outbound_connections_config\t%d\n"
      "outbound_connections\t%d\n"
      "outbound_connections_active\t%d\n"
      "active_gathers\t%d\n"
      "active_network_events\t%d\n"
      "used_network_buffers\t%d\n"
      "max_network_buffers\t%d\n"
      "network_buffer_size\t%d\n"
      "queries_total\t%lld\n"
      "qps\t%.3f\n"
      "END\n",
      VAR_13,
      VAR_11,
      VAR_16,
      VAR_5,
      VAR_9,
      VAR_0,
      VAR_12,
      VAR_7,
      VAR_6,
      VAR_8,
      VAR_3,
      VAR_1,
      VAR_2,
      VAR_10,
      FUNC_0(VAR_10, VAR_16)
      );
}
