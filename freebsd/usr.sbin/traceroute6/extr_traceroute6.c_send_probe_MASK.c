
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int16_t ;
struct tcphdr {int th_sport; int th_dport; int th_seq; int th_off; int th_sum; int th_flags; int th_ack; } ;
struct sockaddr {int dummy; } ;
struct sctphdr {int src_port; int dest_port; int v_tag; void* checksum; } ;
struct sctp_paramhdr {void* param_length; void* param_type; } ;
struct TYPE_6__ {int initiate_tag; void* initial_tsn; void* num_inbound_streams; void* num_outbound_streams; void* a_rwnd; } ;
struct TYPE_5__ {void* chunk_length; int chunk_flags; int chunk_type; } ;
struct sctp_init_chunk {TYPE_2__ init; TYPE_1__ ch; } ;
struct sctp_chunkhdr {void* chunk_length; int chunk_flags; int chunk_type; } ;
struct icmp6_hdr {int icmp6_id; void* icmp6_seq; int icmp6_cksum; int icmp6_code; int icmp6_type; } ;
typedef int i ;
struct TYPE_7__ {int sin6_len; void* sin6_port; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 char* VAR_11 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*) ;
 int VAR_14 ;
 int FUNC_6 (char*,char*,scalar_t__,int) ;
 void* FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__,int ,struct sockaddr*,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,char*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *,TYPE_3__*,scalar_t__,scalar_t__) ;
 int VAR_18 ;

void
FUNC_11(int VAR_19, u_long VAR_20)
{
 struct icmp6_hdr *VAR_21;
 struct sctphdr *VAR_22;
 struct sctp_chunkhdr *VAR_23;
 struct sctp_init_chunk *VAR_24;
 struct sctp_paramhdr *VAR_25;
 struct tcphdr *VAR_26;
 int VAR_27;

 VAR_27 = VAR_20;
 if (FUNC_9(VAR_15, VAR_2, VAR_3,
     (char *)&VAR_27, sizeof(VAR_27)) < 0) {
  FUNC_5("setsockopt IPV6_UNICAST_HOPS");
 }

 VAR_0.sin6_port = FUNC_4(VAR_14 + VAR_19);

 switch (VAR_18) {
 case 132:
  VAR_21 = (struct icmp6_hdr *)VAR_13;

  VAR_21->icmp6_type = VAR_1;
  VAR_21->icmp6_code = 0;
  VAR_21->icmp6_cksum = 0;
  VAR_21->icmp6_id = VAR_12;
  VAR_21->icmp6_seq = FUNC_4(VAR_19);
  break;
 case 128:
  break;
 case 131:

  break;
 case 130:
  VAR_22 = (struct sctphdr *)VAR_13;

  VAR_22->src_port = FUNC_4(VAR_12);
  VAR_22->dest_port = FUNC_4(VAR_14 + VAR_19);
  if (VAR_10 >= (u_long)(sizeof(struct sctphdr) +
      sizeof(struct sctp_init_chunk))) {
   VAR_22->v_tag = 0;
  } else {
   VAR_22->v_tag = (VAR_22->src_port << 16) | VAR_22->dest_port;
  }
  VAR_22->checksum = FUNC_3(0);
  if (VAR_10 >= (u_long)(sizeof(struct sctphdr) +
      sizeof(struct sctp_init_chunk))) {







   VAR_24 = (struct sctp_init_chunk *)(VAR_22 + 1);
   VAR_24->ch.chunk_type = VAR_4;
   VAR_24->ch.chunk_flags = 0;
   VAR_24->ch.chunk_length = FUNC_4((u_int16_t)(VAR_10 -
       sizeof(struct sctphdr)));
   VAR_24->init.initiate_tag = (VAR_22->src_port << 16) |
       VAR_22->dest_port;
   VAR_24->init.a_rwnd = FUNC_3(1500);
   VAR_24->init.num_outbound_streams = FUNC_4(1);
   VAR_24->init.num_inbound_streams = FUNC_4(1);
   VAR_24->init.initial_tsn = FUNC_3(0);
   if (VAR_10 >= (u_long)(sizeof(struct sctphdr) +
       sizeof(struct sctp_init_chunk) +
       sizeof(struct sctp_paramhdr))) {
    VAR_25 = (struct sctp_paramhdr *)(VAR_24 + 1);
    VAR_25->param_type = FUNC_4(VAR_5);
    VAR_25->param_length =
        FUNC_4((u_int16_t)(VAR_10 -
        sizeof(struct sctphdr) -
        sizeof(struct sctp_init_chunk)));
   }
  } else {




   if (VAR_10 >= (u_long)(sizeof(struct sctphdr) +
       sizeof(struct sctp_chunkhdr))) {
    VAR_23 = (struct sctp_chunkhdr *)(VAR_22 + 1);
    VAR_23->chunk_type = VAR_7;
    VAR_23->chunk_flags = 0;
    VAR_23->chunk_length = FUNC_4(4);
   }
   if (VAR_10 >= (u_long)(sizeof(struct sctphdr) +
       2 * sizeof(struct sctp_chunkhdr))) {
    VAR_23 = VAR_23 + 1;
    VAR_23->chunk_type = VAR_6;
    VAR_23->chunk_flags = 0;
    VAR_23->chunk_length = FUNC_4((u_int16_t)(VAR_10 -
        sizeof(struct sctphdr) -
        sizeof(struct sctp_chunkhdr)));
   }
  }
  VAR_22->checksum = FUNC_7(VAR_13, VAR_10);
  break;
 case 129:
  VAR_26 = (struct tcphdr *)VAR_13;

  VAR_26->th_sport = FUNC_4(VAR_12);
  VAR_26->th_dport = FUNC_4(VAR_14 + VAR_19);
  VAR_26->th_seq = (VAR_26->th_sport << 16) | VAR_26->th_dport;
  VAR_26->th_ack = 0;
  VAR_26->th_off = 5;
  VAR_26->th_flags = VAR_9;
  VAR_26->th_sum = 0;
  VAR_26->th_sum = FUNC_10(&VAR_8, &VAR_0, VAR_13, VAR_10);
  break;
 default:
  FUNC_2(VAR_16, "Unknown probe protocol %d.\n", VAR_18);
  FUNC_0(1);
 }

 VAR_27 = FUNC_8(VAR_15, (char *)VAR_13, VAR_10, 0,
     (struct sockaddr *)&VAR_0, VAR_0.sin6_len);
 if (VAR_27 < 0 || (u_long)VAR_27 != VAR_10) {
  if (VAR_27 < 0)
   FUNC_5("sendto");
  FUNC_6("traceroute6: wrote %s %lu chars, ret=%d\n",
      VAR_11, VAR_10, VAR_27);
  (void) FUNC_1(VAR_17);
 }
}
