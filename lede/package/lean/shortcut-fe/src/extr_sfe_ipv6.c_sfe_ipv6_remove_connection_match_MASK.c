
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sfe_ipv6_connection_match {TYPE_3__* active_prev; TYPE_3__* active_next; scalar_t__ active; TYPE_2__* prev; TYPE_1__* next; int match_dest_port; int match_dest_ip; int match_src_port; int match_src_ip; int match_protocol; int match_dev; } ;
struct sfe_ipv6 {TYPE_3__* active_tail; TYPE_3__* active_head; TYPE_1__** conn_match_hash; } ;
struct TYPE_6__ {struct TYPE_6__* active_prev; struct TYPE_6__* active_next; } ;
struct TYPE_5__ {TYPE_1__* next; } ;
struct TYPE_4__ {TYPE_2__* prev; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 unsigned int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sfe_ipv6 *VAR_0, struct sfe_ipv6_connection_match *VAR_1)
{



 if (VAR_1->prev) {
  VAR_1->prev->next = VAR_1->next;
 } else {
  unsigned int VAR_2
   = FUNC_1(VAR_1->match_dev, VAR_1->match_protocol,
            VAR_1->match_src_ip, VAR_1->match_src_port,
            VAR_1->match_dest_ip, VAR_1->match_dest_port);
  VAR_0->conn_match_hash[VAR_2] = VAR_1->next;
 }

 if (VAR_1->next) {
  VAR_1->next->prev = VAR_1->prev;
 }




 if (VAR_1->active) {
  if (FUNC_0(VAR_1->active_prev)) {
   VAR_1->active_prev->active_next = VAR_1->active_next;
  } else {
   VAR_0->active_head = VAR_1->active_next;
  }

  if (FUNC_0(VAR_1->active_next)) {
   VAR_1->active_next->active_prev = VAR_1->active_prev;
  } else {
   VAR_0->active_tail = VAR_1->active_prev;
  }
 }
}
