
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int tcp_seq ;
struct udphdr {scalar_t__ uh_sport; scalar_t__ uh_dport; } ;
struct tcphdr {scalar_t__ th_sport; scalar_t__ th_dport; int th_seq; } ;
struct sockaddr_in6 {int sin6_len; } ;
struct sockaddr {int dummy; } ;
struct sctphdr {scalar_t__ src_port; scalar_t__ dest_port; int v_tag; } ;
struct TYPE_4__ {int initiate_tag; int a_rwnd; } ;
struct sctp_init_chunk {TYPE_2__ init; } ;
struct msghdr {TYPE_1__* msg_iov; scalar_t__ msg_name; } ;
struct ip6_hdr {int dummy; } ;
struct in6_pktinfo {int ipi6_addr; } ;
struct icmp6_hdr {int icmp6_type; int icmp6_code; scalar_t__ icmp6_id; scalar_t__ icmp6_seq; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; scalar_t__ cmsg_len; } ;
typedef int sbuf ;
typedef int hbuf ;
typedef int dbuf ;
struct TYPE_3__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 scalar_t__ VAR_8 ;




 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,char*,int) ;
 void* FUNC_5 (struct ip6_hdr*,int*) ;
 scalar_t__ FUNC_6 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_15 ;
 char* FUNC_8 (int ,int *,char*,int) ;
 int VAR_16 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int VAR_17 ;
 struct in6_pktinfo* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (char*,char*,int) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct msghdr *VAR_23, int VAR_24, int VAR_25, u_char *VAR_26, u_char *VAR_27)
{
 struct icmp6_hdr *VAR_28;
 struct sockaddr_in6 *VAR_29 = (struct sockaddr_in6 *)VAR_23->msg_name;
 char *VAR_30 = (char *)VAR_23->msg_iov[0].iov_base;
 struct cmsghdr *VAR_31;
 int *VAR_32;
 char VAR_33[VAR_11];
 if (VAR_24 < (int)sizeof(struct icmp6_hdr)) {
  if (VAR_22) {
   if (FUNC_6((struct sockaddr *)VAR_29, VAR_29->sin6_len,
       VAR_33, sizeof(VAR_33), ((void*)0), 0, VAR_12) != 0)
    FUNC_11(VAR_33, "invalid", sizeof(VAR_33));
   FUNC_10("data too short (%d bytes) from %s\n", VAR_24, VAR_33);
  }
  return (0);
 }
 VAR_28 = (struct icmp6_hdr *)VAR_30;


 VAR_18 = ((void*)0);
 VAR_32 = ((void*)0);
 for (VAR_31 = (struct cmsghdr *)FUNC_1(VAR_23); VAR_31;
     VAR_31 = (struct cmsghdr *)FUNC_3(VAR_23, VAR_31)) {
  if (VAR_31->cmsg_level == VAR_8 &&
      VAR_31->cmsg_type == VAR_10 &&
      VAR_31->cmsg_len ==
      FUNC_2(sizeof(struct in6_pktinfo)))
   VAR_18 = (struct in6_pktinfo *)(FUNC_0(VAR_31));

  if (VAR_31->cmsg_level == VAR_8 &&
      VAR_31->cmsg_type == VAR_9 &&
      VAR_31->cmsg_len == FUNC_2(sizeof(int)))
   VAR_32 = (int *)FUNC_0(VAR_31);
 }
 if (VAR_18 == ((void*)0) || VAR_32 == ((void*)0)) {
  FUNC_12("failed to get received hop limit or packet info");



  VAR_17 = 0;

 }
 else
  VAR_17 = *VAR_32;

 *VAR_26 = VAR_28->icmp6_type;
 *VAR_27 = VAR_28->icmp6_code;
 if ((*VAR_26 == VAR_5 &&
     *VAR_27 == VAR_6) ||
     (*VAR_26 == VAR_1) ||
     (*VAR_26 == VAR_4 &&
     *VAR_27 == VAR_3)) {
  struct ip6_hdr *VAR_34;
  struct icmp6_hdr *VAR_35;
  struct sctp_init_chunk *VAR_36;
  struct sctphdr *VAR_37;
  struct tcphdr *VAR_38;
  struct udphdr *VAR_39;
  void *VAR_40;

  VAR_34 = (struct ip6_hdr *)(VAR_28 + 1);
  if ((VAR_40 = FUNC_5(VAR_34, (u_char *)(VAR_30 + VAR_24))) == ((void*)0)) {
   if (VAR_22)
    FUNC_12("failed to get upper layer header");
   return (0);
  }
  switch (VAR_21) {
  case 132:
   VAR_35 = (struct icmp6_hdr *)VAR_40;
   if (VAR_35->icmp6_id == VAR_15 &&
       VAR_35->icmp6_seq == FUNC_7(VAR_25))
    return (1);
   break;
  case 128:
   VAR_39 = (struct udphdr *)VAR_40;
   if (VAR_39->uh_sport == FUNC_7(VAR_19) &&
       VAR_39->uh_dport == FUNC_7(VAR_16 + VAR_25))
    return (1);
   break;
  case 130:
   VAR_37 = (struct sctphdr *)VAR_40;
   if (VAR_37->src_port != FUNC_7(VAR_15) ||
       VAR_37->dest_port != FUNC_7(VAR_16 + VAR_25)) {
    break;
   }
   if (VAR_14 >= (u_long)(sizeof(struct sctphdr) +
       sizeof(struct sctp_init_chunk))) {
    if (VAR_37->v_tag != 0) {
     break;
    }
    VAR_36 = (struct sctp_init_chunk *)(VAR_37 + 1);

    if ((char *)&VAR_36->init.a_rwnd > VAR_30 + VAR_24) {
     return (1);
    }
    if (VAR_36->init.initiate_tag == (u_int32_t)
        ((VAR_37->src_port << 16) | VAR_37->dest_port)) {
     return (1);
    }
   } else {
    if (VAR_37->v_tag ==
        (u_int32_t)((VAR_37->src_port << 16) |
        VAR_37->dest_port)) {
     return (1);
    }
   }
   break;
  case 129:
   VAR_38 = (struct tcphdr *)VAR_40;
   if (VAR_38->th_sport == FUNC_7(VAR_15) &&
       VAR_38->th_dport == FUNC_7(VAR_16 + VAR_25) &&
       VAR_38->th_seq ==
       (tcp_seq)((VAR_38->th_sport << 16) | VAR_38->th_dport))
    return (1);
   break;
  case 131:
   return (1);
  default:
   FUNC_4(VAR_20, "Unknown probe proto %d.\n", VAR_21);
   break;
  }
 } else if (VAR_21 == 132 && *VAR_26 == VAR_2) {
  if (VAR_28->icmp6_id == VAR_15 &&
      VAR_28->icmp6_seq == FUNC_7(VAR_25))
   return (1);
 }
 if (VAR_22) {
  char VAR_41[VAR_11+1], VAR_42[VAR_7];
  u_int8_t *VAR_43;
  int VAR_44;

  if (FUNC_6((struct sockaddr *)VAR_29, VAR_29->sin6_len,
      VAR_41, sizeof(VAR_41), ((void*)0), 0, VAR_12) != 0)
   FUNC_11(VAR_41, "invalid", sizeof(VAR_41));
  FUNC_10("\n%d bytes from %s to %s", VAR_24, VAR_41,
      VAR_18 ? FUNC_8(VAR_0, &VAR_18->ipi6_addr,
      VAR_42, sizeof(VAR_42)) : "?");
  FUNC_10(": icmp type %d (%s) code %d\n", *VAR_26, FUNC_9(*VAR_26),
      *VAR_27);
  VAR_43 = (u_int8_t *)(VAR_28 + 1);

  for (VAR_44 = 0; VAR_44 < VAR_24; VAR_44++) {
   if (VAR_44 % 16 == 0)
    FUNC_10("%04x:", VAR_44);
   if (VAR_44 % 4 == 0)
    FUNC_10(" ");
   FUNC_10("%02x", VAR_43[VAR_44]);
   if (VAR_44 % 16 == 16 - 1)
    FUNC_10("\n");
  }
  if (VAR_24 % 16 != 0)
   FUNC_10("\n");
 }
 return (0);
}
