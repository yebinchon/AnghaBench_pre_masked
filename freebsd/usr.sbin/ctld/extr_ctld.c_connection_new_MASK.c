
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct portal {int dummy; } ;
struct connection {int conn_socket; int conn_max_recv_data_segment_length; int conn_max_send_data_segment_length; int conn_max_burst_length; int conn_first_burst_length; int conn_immediate_data; int conn_initiator_sa; int conn_initiator_addr; struct portal* conn_portal; } ;


 struct connection* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct sockaddr const*,int ) ;

__attribute__((used)) static struct connection *
FUNC_4(struct portal *VAR_0, int VAR_1, const char *VAR_2,
    const struct sockaddr *VAR_3)
{
 struct connection *VAR_4;

 VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "calloc");
 VAR_4->conn_portal = VAR_0;
 VAR_4->conn_socket = VAR_1;
 VAR_4->conn_initiator_addr = FUNC_1(VAR_2);
 FUNC_3(&VAR_4->conn_initiator_sa, VAR_3, VAR_3->sa_len);




 VAR_4->conn_max_recv_data_segment_length = 8192;
 VAR_4->conn_max_send_data_segment_length = 8192;
 VAR_4->conn_max_burst_length = 262144;
 VAR_4->conn_first_burst_length = 65536;
 VAR_4->conn_immediate_data = 1;

 return (VAR_4);
}
