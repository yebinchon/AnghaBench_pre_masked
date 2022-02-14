
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6_connection {int reply_match; int original_match; struct sfe_ipv6_connection* all_connections_next; struct sfe_ipv6_connection* all_connections_prev; struct sfe_ipv6_connection* next; struct sfe_ipv6_connection* prev; int dest_port; int dest_ip; int src_port; int src_ip; int protocol; } ;
struct sfe_ipv6 {int num_connections; struct sfe_ipv6_connection* all_connections_tail; struct sfe_ipv6_connection* all_connections_head; struct sfe_ipv6_connection** conn_hash; } ;


 unsigned int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sfe_ipv6*,int ) ;

__attribute__((used)) static void FUNC_2(struct sfe_ipv6 *VAR_0, struct sfe_ipv6_connection *VAR_1)
{
 struct sfe_ipv6_connection **VAR_2;
 struct sfe_ipv6_connection *VAR_3;
 unsigned int VAR_4;




 VAR_4 = FUNC_0(VAR_1->protocol, VAR_1->src_ip, VAR_1->src_port,
      VAR_1->dest_ip, VAR_1->dest_port);
 VAR_2 = &VAR_0->conn_hash[VAR_4];
 VAR_3 = *VAR_2;
 VAR_1->prev = ((void*)0);
 if (VAR_3) {
  VAR_3->prev = VAR_1;
 }

 VAR_1->next = VAR_3;
 *VAR_2 = VAR_1;




 if (VAR_0->all_connections_tail) {
  VAR_1->all_connections_prev = VAR_0->all_connections_tail;
  VAR_0->all_connections_tail->all_connections_next = VAR_1;
 } else {
  VAR_1->all_connections_prev = ((void*)0);
  VAR_0->all_connections_head = VAR_1;
 }

 VAR_0->all_connections_tail = VAR_1;
 VAR_1->all_connections_next = ((void*)0);
 VAR_0->num_connections++;




 FUNC_1(VAR_0, VAR_1->original_match);
 FUNC_1(VAR_0, VAR_1->reply_match);
}
