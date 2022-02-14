
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sctp_frag_point; int peer_hmac_id; int peer_auth_chunks; } ;
struct sctp_tcb {TYPE_1__ asoc; TYPE_2__* sctp_ep; } ;
struct sctp_association {int smallest_mtu; } ;
struct TYPE_4__ {int sctp_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sctp_tcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct sctp_tcb *VAR_4,
    struct sctp_association *VAR_5)
{
 int VAR_6, VAR_7;






 if (VAR_4->sctp_ep->sctp_flags & VAR_3) {
  VAR_7 = VAR_1;
 } else {
  VAR_7 = VAR_2;
 }
 VAR_7 += FUNC_0(VAR_4);
 if (VAR_4->asoc.sctp_frag_point > VAR_5->smallest_mtu)
  VAR_6 = VAR_5->smallest_mtu - VAR_7;
 else
  VAR_6 = (VAR_4->asoc.sctp_frag_point - VAR_7);
 if (FUNC_1(VAR_0, VAR_4->asoc.peer_auth_chunks))
  VAR_6 -= FUNC_2(VAR_4->asoc.peer_hmac_id);

 if (VAR_6 % 4) {

  VAR_6 -= (VAR_6 % 4);
 }
 return (VAR_6);
}
