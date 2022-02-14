
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sfe_ipv4_connection {TYPE_4__* all_connections_prev; TYPE_3__* all_connections_next; TYPE_2__* prev; TYPE_1__* next; int dest_port; int dest_ip; int src_port; int src_ip; int protocol; int original_match; int reply_match; } ;
struct sfe_ipv4 {int num_connections; TYPE_4__* all_connections_tail; TYPE_3__* all_connections_head; TYPE_1__** conn_hash; } ;
struct TYPE_8__ {TYPE_3__* all_connections_next; } ;
struct TYPE_7__ {TYPE_4__* all_connections_prev; } ;
struct TYPE_6__ {TYPE_1__* next; } ;
struct TYPE_5__ {TYPE_2__* prev; } ;


 unsigned int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sfe_ipv4*,int ) ;

__attribute__((used)) static void FUNC_2(struct sfe_ipv4 *VAR_0, struct sfe_ipv4_connection *VAR_1)
{



 FUNC_1(VAR_0, VAR_1->reply_match);
 FUNC_1(VAR_0, VAR_1->original_match);




 if (VAR_1->prev) {
  VAR_1->prev->next = VAR_1->next;
 } else {
  unsigned int VAR_2 = FUNC_0(VAR_1->protocol, VAR_1->src_ip, VAR_1->src_port,
             VAR_1->dest_ip, VAR_1->dest_port);
  VAR_0->conn_hash[VAR_2] = VAR_1->next;
 }

 if (VAR_1->next) {
  VAR_1->next->prev = VAR_1->prev;
 }




 if (VAR_1->all_connections_prev) {
  VAR_1->all_connections_prev->all_connections_next = VAR_1->all_connections_next;
 } else {
  VAR_0->all_connections_head = VAR_1->all_connections_next;
 }

 if (VAR_1->all_connections_next) {
  VAR_1->all_connections_next->all_connections_prev = VAR_1->all_connections_prev;
 } else {
  VAR_0->all_connections_tail = VAR_1->all_connections_prev;
 }

 VAR_0->num_connections--;
}
