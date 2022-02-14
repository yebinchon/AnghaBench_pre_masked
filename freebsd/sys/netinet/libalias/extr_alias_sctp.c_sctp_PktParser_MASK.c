
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctphdr {scalar_t__ src_port; scalar_t__ dest_port; int v_tag; } ;
struct sctp_shutdown_ack_chunk {int dummy; } ;
struct sctp_paramhdr {int param_type; } ;
struct TYPE_2__ {struct sctp_paramhdr* Asconf; struct sctp_init_ack* InitAck; struct sctp_init* Init; } ;
struct sctp_nat_msg {int chunk_length; TYPE_1__ sctpchnk; int msg; struct sctphdr* sctp_hdr; struct ip* ip_hdr; } ;
struct sctp_nat_assoc {void* TableRegister; int Gaddr; void* state; } ;
struct sctp_ipv6addr_param {int dummy; } ;
struct sctp_ipv4addr_param {int addr; } ;
struct sctp_init_chunk {int dummy; } ;
struct sctp_init_ack_chunk {int dummy; } ;
struct sctp_init_ack {int dummy; } ;
struct sctp_init {int dummy; } ;
struct sctp_chunkhdr {int chunk_flags; int chunk_type; int chunk_length; } ;
struct sctp_asconf_chunk {int dummy; } ;
struct sctp_asconf_ack_chunk {int dummy; } ;
struct libalias {int dummy; } ;
struct in_addr {int s_addr; } ;
struct ip {int ip_hl; int ip_dst; struct in_addr ip_src; int ip_len; } ;


 struct sctp_nat_assoc* FUNC_0 (struct libalias*,struct in_addr,int ,scalar_t__,scalar_t__,int*) ;
 struct sctp_nat_assoc* FUNC_1 (struct libalias*,struct in_addr,int ,scalar_t__,scalar_t__) ;
 struct sctp_nat_assoc* FUNC_2 (struct libalias*,struct in_addr,int ,int ,scalar_t__,scalar_t__) ;
 struct sctp_nat_assoc* FUNC_3 (struct libalias*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sctp_chunkhdr*) ;
 int FUNC_5 (int *) ;



 int VAR_0 ;


 int VAR_1 ;


 int FUNC_6 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct sctp_chunkhdr* FUNC_7 (struct sctphdr*) ;
 int VAR_17 ;
 int VAR_18 ;
 struct sctp_chunkhdr* FUNC_8 (struct sctp_chunkhdr*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_9 (struct ip*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int
FUNC_12(struct libalias *VAR_25, int VAR_26, struct ip *VAR_27,
    struct sctp_nat_msg *VAR_28, struct sctp_nat_assoc **VAR_29)

{
 struct sctphdr *VAR_30;
 struct sctp_chunkhdr *VAR_31;
 struct sctp_paramhdr *VAR_32;
 struct in_addr VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37 = 0;
 VAR_28->ip_hdr = VAR_27;

 VAR_34 = FUNC_10(VAR_27->ip_len) - (VAR_27->ip_hl << 2);


 if (VAR_34 < sizeof(struct sctphdr)) {
  VAR_28->sctp_hdr = ((void*)0);
  return (VAR_7);
 }

 VAR_28->sctp_hdr = VAR_30 = (struct sctphdr *) FUNC_9(VAR_27);
 VAR_34 -= sizeof(struct sctphdr);


 if (VAR_30->src_port == 0 || VAR_30->dest_port == 0)
  return (VAR_11);


 if (VAR_34 < VAR_3)
  return (VAR_6);


 VAR_31 = FUNC_7(VAR_30);

 VAR_35 = FUNC_6(FUNC_10(VAR_31->chunk_length));
 if ((VAR_35 < VAR_3) || (VAR_35 > VAR_34))
  return (VAR_6);

 if ((VAR_31->chunk_flags & VAR_0) &&
     ((VAR_31->chunk_type == 134) ||
  (VAR_31->chunk_type == 128))) {

  if (VAR_26 == VAR_22)
   *VAR_29 = FUNC_1(VAR_25, VAR_27->ip_src, VAR_30->v_tag, VAR_30->dest_port, VAR_30->src_port);
  else
   *VAR_29 = FUNC_3(VAR_25, VAR_27->ip_dst, VAR_30->v_tag, VAR_30->dest_port, VAR_30->src_port);
 } else {

  if (VAR_26 == VAR_22)
   *VAR_29 = FUNC_0(VAR_25, VAR_27->ip_src, VAR_30->v_tag, VAR_30->src_port, VAR_30->dest_port, &VAR_37);
  else
   *VAR_29 = FUNC_2(VAR_25, VAR_27->ip_src, VAR_27->ip_dst, VAR_30->v_tag, VAR_30->src_port, VAR_30->dest_port);
 }

 VAR_36 = 1;

 VAR_28->msg = VAR_19;
 VAR_28->chunk_length = 0;
 while (FUNC_4(VAR_31)) {
  switch (VAR_31->chunk_type) {
  case 131:
   if (VAR_35 < sizeof(struct sctp_init_chunk))
    return (VAR_6);
   VAR_28->msg = VAR_17;
   VAR_28->sctpchnk.Init = (struct sctp_init *) ((char *) VAR_31 + sizeof(struct sctp_chunkhdr));
   VAR_28->chunk_length = VAR_35;

   if (*VAR_29 == ((void*)0)) {
    if (VAR_30->v_tag == 0) {
     *VAR_29 = (struct sctp_nat_assoc *) FUNC_11(sizeof(struct sctp_nat_assoc));
     if (*VAR_29 == ((void*)0)) {
      return (VAR_5);
     }

     (*VAR_29)->state = VAR_2;
     FUNC_5(&((*VAR_29)->Gaddr));
     (*VAR_29)->TableRegister = VAR_4;
     return (VAR_13);
    }
    return (VAR_12);
   }
   return (VAR_8);
  case 130:
   if (VAR_35 < sizeof(struct sctp_init_ack_chunk))
    return (VAR_6);
   VAR_28->msg = VAR_18;
   VAR_28->sctpchnk.InitAck = (struct sctp_init_ack *) ((char *) VAR_31 + sizeof(struct sctp_chunkhdr));
   VAR_28->chunk_length = VAR_35;
   return ((*VAR_29 == ((void*)0)) ? (VAR_8) : (VAR_13));
  case 134:
   VAR_28->msg = VAR_14;
   VAR_28->chunk_length = VAR_35;
   return ((*VAR_29 == ((void*)0)) ? (VAR_9) : (VAR_13));
  case 129:
   if (VAR_35 < sizeof(struct sctp_shutdown_ack_chunk))
    return (VAR_6);
   if (VAR_28->msg > VAR_20) {
    VAR_28->msg = VAR_20;
    VAR_28->chunk_length = VAR_35;
   }
   break;
  case 128:
   if (VAR_28->msg > VAR_21) {
    VAR_28->msg = VAR_21;
    VAR_28->chunk_length = VAR_35;
   }
   return ((*VAR_29 == ((void*)0)) ? (VAR_8) : (VAR_13));
  case 133:
   if (VAR_28->msg > VAR_15) {
    if (VAR_35 < (sizeof(struct sctp_asconf_chunk) + sizeof(struct sctp_ipv4addr_param)))
     return (VAR_6);

    VAR_32 = (struct sctp_paramhdr *) ((char *) VAR_31 + sizeof(struct sctp_asconf_chunk));
    if (FUNC_10(VAR_32->param_type) == VAR_1) {
     if ((*VAR_29 == ((void*)0)) && (VAR_26 == VAR_22)) {

      VAR_33.s_addr = ((struct sctp_ipv4addr_param *) VAR_32)->addr;
      *VAR_29 = FUNC_0(VAR_25, VAR_33, VAR_30->v_tag, VAR_30->src_port, VAR_30->dest_port, &VAR_37);
     }
     VAR_32 = (struct sctp_paramhdr *)
      ((char *) VAR_32 + sizeof(struct sctp_ipv4addr_param));
     VAR_28->chunk_length = VAR_35 - sizeof(struct sctp_asconf_chunk) - sizeof(struct sctp_ipv4addr_param);
    } else {
     if (VAR_35 < (sizeof(struct sctp_asconf_chunk) + sizeof(struct sctp_ipv6addr_param)))
      return (VAR_6);
     VAR_32 = (struct sctp_paramhdr *)
      ((char *) VAR_32 + sizeof(struct sctp_ipv6addr_param));
     VAR_28->chunk_length = VAR_35 - sizeof(struct sctp_asconf_chunk) - sizeof(struct sctp_ipv6addr_param);
    }
    VAR_28->msg = VAR_15;
    VAR_28->sctpchnk.Asconf = VAR_32;

    if (*VAR_29 == ((void*)0)) {
     *VAR_29 = (struct sctp_nat_assoc *) FUNC_11(sizeof(struct sctp_nat_assoc));
     if (*VAR_29 == ((void*)0)) {
      return (VAR_5);
     }

     (*VAR_29)->state = VAR_2;
     FUNC_5(&((*VAR_29)->Gaddr));
     (*VAR_29)->TableRegister = VAR_4;
     return (VAR_13);
    }
   }
   break;
  case 132:
   if (VAR_28->msg > VAR_16) {
    if (VAR_35 < sizeof(struct sctp_asconf_ack_chunk))
     return (VAR_6);

    VAR_32 = (struct sctp_paramhdr *) ((char *) VAR_31
        + sizeof(struct sctp_asconf_ack_chunk));
    VAR_28->msg = VAR_16;
    VAR_28->sctpchnk.Asconf = VAR_32;
    VAR_28->chunk_length = VAR_35 - sizeof(struct sctp_asconf_ack_chunk);
   }
   break;
  default:
   break;
  }


  if ((*VAR_29 == ((void*)0)) && (VAR_36 >= VAR_24))
   return (VAR_8);


  VAR_34-= VAR_35;


  if (VAR_34 == 0)
   return (*VAR_29 == ((void*)0)) ? (VAR_8) : (VAR_13);


  if (VAR_34 < VAR_3)
   return (VAR_6);

  VAR_31 = FUNC_8(VAR_31);


  VAR_35 = FUNC_6(FUNC_10(VAR_31->chunk_length));
  if ((VAR_35 < VAR_3) || (VAR_35 > VAR_34))
   return (VAR_6);
  if (++VAR_36 > VAR_23)
   return (VAR_13);
 }

 if (*VAR_29 == ((void*)0))
  return (VAR_37) ? (VAR_10) : (VAR_8);
 else
  return (VAR_13);
}
