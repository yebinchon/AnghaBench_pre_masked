
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct socket {scalar_t__ so_pcb; } ;
struct TYPE_4__ {int refcnt; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct TYPE_3__ {int shared_keys; scalar_t__ local_auth_chunks; scalar_t__ local_hmacs; } ;
struct sctp_inpcb {int sctp_flags; TYPE_1__ sctp_ep; int * inp_starting_point_for_iterator; int local_strreset_support; int max_cwnd; int sctp_context; int partial_delivery_point; int pktdrop_supported; int nrsack_supported; int reconfig_supported; int asconf_supported; int auth_supported; int prsctp_supported; int ecn_supported; int sctp_cmt_on_off; int sctp_frag_point; int sctp_mobility_features; int sctp_features; struct socket* sctp_socket; } ;
typedef int sctp_assoc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sctp_tcb*) ;
 int FUNC_1 (struct sctp_inpcb*,int *,int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct sctp_tcb*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 struct sctp_tcb* FUNC_8 (struct sctp_inpcb*,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sctp_inpcb*,struct sctp_inpcb*,struct sctp_tcb*) ;
 int FUNC_12 (struct sctp_inpcb*,struct sctp_inpcb*,struct sctp_tcb*,int ) ;

int
FUNC_13(struct socket *VAR_10, struct socket *VAR_11, sctp_assoc_t VAR_12)
{
 struct sctp_inpcb *VAR_13, *VAR_14;
 struct sctp_tcb *VAR_15;
 uint32_t VAR_16;

 VAR_13 = (struct sctp_inpcb *)VAR_10->so_pcb;
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_13, ((void*)0), ((void*)0), VAR_3, VAR_0);
  return (VAR_0);
 }
 VAR_15 = FUNC_8(VAR_13, VAR_12, 1);
 if (VAR_15 == ((void*)0)) {
  FUNC_1(VAR_13, ((void*)0), ((void*)0), VAR_3, VAR_1);
  return (VAR_1);
 }

 VAR_16 = FUNC_0(VAR_15);
 if ((VAR_16 == VAR_8) ||
     (VAR_16 == VAR_9)) {
  FUNC_2(VAR_15);
  FUNC_1(VAR_13, ((void*)0), ((void*)0), VAR_3, VAR_1);
  return (VAR_1);
 }

 VAR_14 = (struct sctp_inpcb *)VAR_11->so_pcb;
 VAR_14->sctp_flags = (VAR_7 |
     VAR_5 |
     VAR_6 |
     (VAR_4 & VAR_13->sctp_flags));
 VAR_14->sctp_socket = VAR_11;
 VAR_14->sctp_features = VAR_13->sctp_features;
 VAR_14->sctp_mobility_features = VAR_13->sctp_mobility_features;
 VAR_14->sctp_frag_point = VAR_13->sctp_frag_point;
 VAR_14->sctp_cmt_on_off = VAR_13->sctp_cmt_on_off;
 VAR_14->ecn_supported = VAR_13->ecn_supported;
 VAR_14->prsctp_supported = VAR_13->prsctp_supported;
 VAR_14->auth_supported = VAR_13->auth_supported;
 VAR_14->asconf_supported = VAR_13->asconf_supported;
 VAR_14->reconfig_supported = VAR_13->reconfig_supported;
 VAR_14->nrsack_supported = VAR_13->nrsack_supported;
 VAR_14->pktdrop_supported = VAR_13->pktdrop_supported;
 VAR_14->partial_delivery_point = VAR_13->partial_delivery_point;
 VAR_14->sctp_context = VAR_13->sctp_context;
 VAR_14->max_cwnd = VAR_13->max_cwnd;
 VAR_14->local_strreset_support = VAR_13->local_strreset_support;
 VAR_14->inp_starting_point_for_iterator = ((void*)0);

 if (VAR_14->sctp_ep.local_hmacs)
  FUNC_10(VAR_14->sctp_ep.local_hmacs);
 VAR_14->sctp_ep.local_hmacs =
     FUNC_6(VAR_13->sctp_ep.local_hmacs);
 if (VAR_14->sctp_ep.local_auth_chunks)
  FUNC_9(VAR_14->sctp_ep.local_auth_chunks);
 VAR_14->sctp_ep.local_auth_chunks =
     FUNC_5(VAR_13->sctp_ep.local_auth_chunks);
 (void)FUNC_7(&VAR_13->sctp_ep.shared_keys,
     &VAR_14->sctp_ep.shared_keys);




 FUNC_11(VAR_13, VAR_14, VAR_15);
 FUNC_3(&VAR_15->asoc.refcnt, 1);
 FUNC_2(VAR_15);

 FUNC_12(VAR_13, VAR_14, VAR_15, VAR_2);
 FUNC_4(&VAR_15->asoc.refcnt, 1);

 return (0);
}
