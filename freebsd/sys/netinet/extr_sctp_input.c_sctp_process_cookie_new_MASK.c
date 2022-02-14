
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int s_addr; } ;
struct TYPE_14__ {int sin_len; int sin6_len; int sin6_addr; int sin6_scope_id; int sin6_family; TYPE_5__ sin_addr; int sin_family; } ;
union sctp_sockstore {int sa; TYPE_7__ sin6; TYPE_7__ sin; } ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sctphdr {int dummy; } ;
struct TYPE_10__ {scalar_t__ ipv4_addr_legal; scalar_t__ ipv6_addr_legal; int loopback_scope; int local_scope; int site_scope; int ipv4_local_scope; } ;
struct sctp_association {int authenticated; int state; int time_entered; scalar_t__ sctp_autoclose_ticks; int refcnt; int * primary_destination; void* last_acked_seq; void* advanced_peer_ack_point; void* init_seq_number; void* str_reset_seq_in; void* asconf_seq_in; void* asconf_seq_out; void* asconf_seq_out_acked; void* str_reset_seq_out; void* sending_seq; int pre_open_streams; void* my_rwnd; void* my_vtag; TYPE_3__ scope; } ;
struct sctp_tcb {struct sctp_association asoc; struct sctp_inpcb* sctp_ep; int sctp_socket; } ;
struct TYPE_13__ {int tv_usec; int tv_sec; } ;
struct sctp_state_cookie {scalar_t__ ipv4_addr_legal; scalar_t__ ipv6_addr_legal; int laddr_type; int loopback_scope; int ipv4_scope; int site_scope; int local_scope; TYPE_6__ time_entered; int * laddress; int scope_id; } ;
struct sctp_nets {int hb_responded; } ;
struct sctp_inpcb {int sctp_flags; } ;
struct TYPE_8__ {scalar_t__ chunk_type; int chunk_length; } ;
struct sctp_init_chunk {TYPE_1__ ch; } ;
struct TYPE_11__ {int initial_tsn; int num_outbound_streams; int a_rwnd; int initiate_tag; } ;
struct TYPE_9__ {scalar_t__ chunk_type; } ;
struct sctp_init_ack_chunk {TYPE_4__ init; TYPE_2__ ch; } ;
struct sctp_cookie_echo_chunk {int dummy; } ;
struct sctp_auth_chunk {int dummy; } ;
struct mbuf {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct socket* FUNC_2 (struct sctp_inpcb*) ;


 scalar_t__ FUNC_3 (struct sctp_inpcb*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct sctp_tcb*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct socket*,int) ;
 int FUNC_7 (struct socket*,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sctp_tcb*) ;
 int FUNC_11 (struct sctp_tcb*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (TYPE_7__*,int ,int) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sctp_inpcb*,struct sctp_tcb*,struct mbuf*,int,struct sockaddr*,struct sockaddr*,struct sctphdr*,struct mbuf*,int ,int,int,int ) ;
 struct sctp_tcb* FUNC_19 (struct sctp_inpcb*,struct sockaddr*,int*,void*,int,int ,int ,struct thread*,int ) ;
 int FUNC_20 (struct sctp_tcb*,struct mbuf*,int,int) ;
 int FUNC_21 (struct sctp_tcb*,struct sctp_association*,struct sctp_nets*,struct timeval*,int ) ;
 int FUNC_22 (struct sctp_tcb*,struct mbuf*,int,int,int *,int ,int ,int ,int ) ;
 struct sctp_nets* FUNC_23 (struct sctp_tcb*,struct sockaddr*) ;
 int FUNC_24 (struct sctp_inpcb*,struct sctp_tcb*,int ,scalar_t__) ;
 struct mbuf* FUNC_25 (int ,char*) ;
 scalar_t__ FUNC_26 (struct sctp_tcb*,struct sctp_auth_chunk*,struct mbuf*,int) ;
 scalar_t__ FUNC_27 (struct sctp_inpcb*,int ) ;
 scalar_t__ FUNC_28 (struct sctp_tcb*,struct mbuf*,int,int,struct sockaddr*,struct sockaddr*,struct sockaddr*,int ) ;
 scalar_t__ FUNC_29 (struct mbuf*,int,int,int *) ;
 int FUNC_30 (struct sctp_init_chunk*,struct sctp_tcb*) ;
 int FUNC_31 (struct sctp_tcb*) ;
 int FUNC_32 (struct sctp_tcb*) ;
 int FUNC_33 (int ,struct sctp_inpcb*,struct sctp_tcb*,int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_34 (int ) ;

__attribute__((used)) static struct sctp_tcb *
FUNC_35(struct mbuf *VAR_30, int VAR_31, int VAR_32,
    struct sockaddr *VAR_33, struct sockaddr *VAR_34,
    struct sctphdr *VAR_35, struct sctp_state_cookie *VAR_36, int VAR_37,
    struct sctp_inpcb *VAR_38, struct sctp_nets **VAR_39,
    struct sockaddr *VAR_40, int *VAR_41,
    int VAR_42, uint32_t VAR_43, uint32_t VAR_44,
    uint8_t VAR_45, uint32_t VAR_46,
    uint32_t VAR_47, uint16_t VAR_48)
{
 struct sctp_tcb *VAR_49;
 struct sctp_init_chunk *VAR_50, VAR_51;
 struct sctp_init_ack_chunk *VAR_52, VAR_53;
 union sctp_sockstore VAR_54;
 struct sctp_association *VAR_55;
 int VAR_56, VAR_57, VAR_58;
 int VAR_59;
 int VAR_60 = 0;
 uint8_t VAR_61[VAR_17];
 VAR_56 = VAR_32 + sizeof(struct sctp_cookie_echo_chunk);
 VAR_50 = (struct sctp_init_chunk *)
     FUNC_29(VAR_30, VAR_56, sizeof(struct sctp_init_chunk),
     (uint8_t *)&VAR_51);
 if (VAR_50 == ((void*)0)) {

  FUNC_0(VAR_4,
      "process_cookie_new: could not pull INIT chunk hdr\n");
  return (((void*)0));
 }
 if (VAR_50->ch.chunk_type != VAR_8) {
  FUNC_0(VAR_4, "HUH? process_cookie_new: could not find INIT chunk!\n");
  return (((void*)0));
 }
 VAR_57 = VAR_56 + FUNC_5(FUNC_17(VAR_50->ch.chunk_length));




 VAR_52 = (struct sctp_init_ack_chunk *)
     FUNC_29(VAR_30, VAR_57, sizeof(struct sctp_init_ack_chunk),
     (uint8_t *)&VAR_53);
 if (VAR_52 == ((void*)0)) {

  FUNC_0(VAR_4, "process_cookie_new: could not pull INIT-ACK chunk hdr\n");
  return (((void*)0));
 }
 if (VAR_52->ch.chunk_type != VAR_9) {
  return (((void*)0));
 }






 VAR_58 = VAR_32 + VAR_37;
 VAR_49 = FUNC_19(VAR_38, VAR_40, &VAR_60,
     FUNC_16(VAR_52->init.initiate_tag), VAR_47,
     FUNC_17(VAR_52->init.num_outbound_streams),
     VAR_48,
     (struct thread *)((void*)0),
     VAR_6);
 if (VAR_49 == ((void*)0)) {
  struct mbuf *VAR_62;


  FUNC_0(VAR_4,
      "process_cookie_new: no room for another TCB!\n");
  VAR_62 = FUNC_25(VAR_2, "");
  FUNC_18(VAR_38, (struct sctp_tcb *)((void*)0), VAR_30, VAR_31,
      VAR_33, VAR_34, VAR_35, VAR_62,
      VAR_45, VAR_46,
      VAR_47, VAR_48);
  return (((void*)0));
 }

 if (VAR_39)
  *VAR_39 = FUNC_23(VAR_49, VAR_40);

 VAR_55 = &VAR_49->asoc;

 VAR_55->scope.ipv4_local_scope = VAR_36->ipv4_scope;
 VAR_55->scope.site_scope = VAR_36->site_scope;
 VAR_55->scope.local_scope = VAR_36->local_scope;
 VAR_55->scope.loopback_scope = VAR_36->loopback_scope;

 if ((VAR_55->scope.ipv4_addr_legal != VAR_36->ipv4_addr_legal) ||
     (VAR_55->scope.ipv6_addr_legal != VAR_36->ipv6_addr_legal)) {
  struct mbuf *VAR_63;






  VAR_63 = FUNC_25(VAR_2, "");
  FUNC_18(VAR_38, (struct sctp_tcb *)((void*)0), VAR_30, VAR_31,
      VAR_33, VAR_34, VAR_35, VAR_63,
      VAR_45, VAR_46,
      VAR_47, VAR_48);







  (void)FUNC_24(VAR_38, VAR_49, VAR_15,
      VAR_7 + VAR_10);



  return (((void*)0));
 }

 VAR_55->my_vtag = FUNC_16(VAR_52->init.initiate_tag);
 VAR_55->my_rwnd = FUNC_16(VAR_52->init.a_rwnd);
 VAR_55->pre_open_streams = FUNC_17(VAR_52->init.num_outbound_streams);
 VAR_55->init_seq_number = FUNC_16(VAR_52->init.initial_tsn);
 VAR_55->sending_seq = VAR_55->asconf_seq_out = VAR_55->str_reset_seq_out = VAR_55->init_seq_number;
 VAR_55->asconf_seq_out_acked = VAR_55->asconf_seq_out - 1;
 VAR_55->asconf_seq_in = VAR_55->last_acked_seq = VAR_55->init_seq_number - 1;
 VAR_55->str_reset_seq_in = VAR_55->init_seq_number;

 VAR_55->advanced_peer_ack_point = VAR_55->last_acked_seq;


 if (VAR_39)
  VAR_59 = FUNC_30(VAR_50, VAR_49);
 else
  VAR_59 = 0;
 if (VAR_59 < 0) {







  (void)FUNC_24(VAR_38, VAR_49, VAR_15,
      VAR_7 + VAR_11);



  return (((void*)0));
 }

 if (FUNC_28(VAR_49, VAR_30,
     VAR_56 + sizeof(struct sctp_init_chunk), VAR_57,
     VAR_33, VAR_34, VAR_40, VAR_48)) {







  (void)FUNC_24(VAR_38, VAR_49, VAR_15,
      VAR_7 + VAR_12);



  return (((void*)0));
 }




 FUNC_20(VAR_49, VAR_30,
     VAR_57 + sizeof(struct sctp_init_ack_chunk),
     VAR_58 - (VAR_57 + sizeof(struct sctp_init_ack_chunk)));
 if (VAR_42) {
  struct sctp_auth_chunk *VAR_64;

  VAR_64 = (struct sctp_auth_chunk *)
      FUNC_29(VAR_30, VAR_43, VAR_44, VAR_61);
  if ((VAR_64 == ((void*)0)) || FUNC_26(VAR_49, VAR_64, VAR_30, VAR_43)) {

   FUNC_0(VAR_3,
       "COOKIE-ECHO: AUTH failed\n");







   (void)FUNC_24(VAR_38, VAR_49, VAR_15,
       VAR_7 + VAR_13);



   return (((void*)0));
  } else {

   VAR_49->asoc.authenticated = 1;
  }
 }
 switch (VAR_36->laddr_type) {
 default:







  (void)FUNC_24(VAR_38, VAR_49, VAR_15,
      VAR_7 + VAR_14);



  return (((void*)0));
 }


 FUNC_0(VAR_5, "moving to OPEN state\n");
 FUNC_4(VAR_49, VAR_24);
 if (VAR_55->state & VAR_25) {
  FUNC_33(VAR_27,
      VAR_49->sctp_ep, VAR_49, VAR_55->primary_destination);
 }
 FUNC_32(VAR_49);
 FUNC_8(VAR_29);
 FUNC_9(VAR_28);


 *VAR_41 = VAR_16;
 if (((VAR_49->sctp_ep->sctp_flags & VAR_21) ||
     (VAR_49->sctp_ep->sctp_flags & VAR_20)) &&
     (!FUNC_3(VAR_38))) {
  VAR_49->sctp_ep->sctp_flags |= VAR_19;
  FUNC_34(VAR_49->sctp_socket);



 } else if ((VAR_49->sctp_ep->sctp_flags & VAR_21) &&
     (FUNC_3(VAR_38))) {





  ;
 }

 if ((VAR_39) && (*VAR_39))
  (*VAR_39)->hb_responded = 1;

 if (VAR_49->asoc.sctp_autoclose_ticks &&
     FUNC_27(VAR_38, VAR_18)) {
  FUNC_33(VAR_26, VAR_38, VAR_49, ((void*)0));
 }
 (void)FUNC_1(&VAR_49->asoc.time_entered);
 if ((VAR_39 != ((void*)0)) && (*VAR_39 != ((void*)0))) {
  struct timeval VAR_65;


  VAR_65.tv_sec = VAR_36->time_entered.tv_sec;
  VAR_65.tv_usec = VAR_36->time_entered.tv_usec;
  FUNC_21(VAR_49, VAR_55, *VAR_39, &VAR_65, VAR_22);
 }

 FUNC_31(VAR_49);





 FUNC_22(VAR_49, VAR_30,
     VAR_57 + sizeof(struct sctp_init_ack_chunk),
     VAR_58 - (VAR_57 + sizeof(struct sctp_init_ack_chunk)),
     &VAR_54.sa, VAR_36->local_scope, VAR_36->site_scope,
     VAR_36->ipv4_scope, VAR_36->loopback_scope);


 return (VAR_49);
}
