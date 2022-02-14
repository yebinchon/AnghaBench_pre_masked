
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int our_ip_idx; } ;
struct TYPE_5__ {int u; TYPE_1__ resend; scalar_t__* tid; int source_ipv6; } ;
typedef TYPE_2__ tftp_connection_t ;
struct udp_message {int our_ip_idx; scalar_t__ port; int ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 struct udp_message* FUNC_3 (int) ;
 int FUNC_4 (int *,struct udp_message*) ;
 int VAR_3 ;

__attribute__((used)) static struct udp_message *FUNC_5 (tftp_connection_t *VAR_4, int VAR_5) {
  struct udp_message *VAR_6 = FUNC_3 (VAR_5);
  FUNC_1 (VAR_6->ipv6, VAR_4->source_ipv6, 16);
  VAR_6->port = VAR_4->tid[1-VAR_3];
  if (!VAR_6->port) {
    FUNC_0 (FUNC_2 () == VAR_2 && VAR_3 == VAR_0);
    VAR_6->port = VAR_1;
  }
  VAR_6->our_ip_idx = VAR_4->resend.our_ip_idx;
  FUNC_4 (&VAR_4->u, VAR_6);
  return VAR_6;
}
