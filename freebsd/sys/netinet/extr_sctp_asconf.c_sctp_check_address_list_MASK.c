
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct sctp_tcb {TYPE_1__* sctp_ep; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int sctp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_tcb*,struct mbuf*,int,int,struct sockaddr*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sctp_tcb*,struct mbuf*,int,int,struct sockaddr*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct sctp_tcb*,struct mbuf*,int,int) ;

void
FUNC_4(struct sctp_tcb *VAR_2, struct mbuf *VAR_3, int VAR_4,
    int VAR_5, struct sockaddr *VAR_6,
    uint16_t VAR_7, uint16_t VAR_8,
    uint16_t VAR_9, uint16_t VAR_10)
{

 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_2->sctp_ep->sctp_flags & VAR_0) {

  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10);
 } else {

  if (FUNC_2(VAR_2->sctp_ep,
      VAR_1)) {

   FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6);
  }

 }
}
