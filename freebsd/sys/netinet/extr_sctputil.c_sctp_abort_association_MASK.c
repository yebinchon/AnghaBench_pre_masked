
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct TYPE_2__ {int refcnt; scalar_t__ vrf_id; scalar_t__ peer_vtag; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_inpcb {int fibnum; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct sctp_tcb*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct sctp_tcb*) ;
 struct socket* FUNC_2 (struct sctp_inpcb*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct socket*,int) ;
 int FUNC_4 (struct socket*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sctp_tcb*) ;
 int FUNC_8 (struct sctp_tcb*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct sctp_tcb*,int ,int ,int *,int ) ;
 int FUNC_12 (struct sctp_inpcb*,struct sctp_tcb*,int ,scalar_t__) ;
 int FUNC_13 (struct mbuf*,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,scalar_t__,struct mbuf*,int ,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_14(struct sctp_inpcb *VAR_9, struct sctp_tcb *VAR_10,
    struct mbuf *VAR_11, int VAR_12,
    struct sockaddr *VAR_13, struct sockaddr *VAR_14,
    struct sctphdr *VAR_15, struct mbuf *VAR_16,
    uint8_t VAR_17, uint32_t VAR_18,
    uint32_t VAR_19, uint16_t VAR_20)
{
 uint32_t VAR_21;




 VAR_21 = 0;
 if (VAR_10 != ((void*)0)) {
  VAR_21 = VAR_10->asoc.peer_vtag;
  VAR_19 = VAR_10->asoc.vrf_id;
 }
 FUNC_13(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_21, VAR_16,
     VAR_17, VAR_18, VAR_9->fibnum,
     VAR_19, VAR_20);
 if (VAR_10 != ((void*)0)) {

  FUNC_11(VAR_10, 0, 0, ((void*)0), VAR_3);
  FUNC_0(VAR_10, VAR_6);
  FUNC_6(VAR_7);
  if ((FUNC_1(VAR_10) == VAR_4) ||
      (FUNC_1(VAR_10) == VAR_5)) {
   FUNC_5(VAR_8);
  }
  (void)FUNC_12(VAR_9, VAR_10, VAR_2,
      VAR_0 + VAR_1);



 }
}
