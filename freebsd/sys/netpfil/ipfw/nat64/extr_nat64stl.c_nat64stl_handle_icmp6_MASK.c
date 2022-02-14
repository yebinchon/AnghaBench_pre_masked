
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct pfloghdr {int dummy; } ;
struct nat64_counters {int dummy; } ;
struct TYPE_6__ {int flags; struct nat64_counters stats; } ;
struct TYPE_5__ {int kidx; } ;
struct nat64stl_cfg {TYPE_3__ base; TYPE_2__ no; int map64; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct ip_fw_chain {int dummy; } ;
struct ip6_hdr {int ip6_dst; } ;
struct in6_addr {int dummy; } ;
struct icmp6_hdr {int icmp6_type; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nat64_counters*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct ip_fw_chain*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ip_fw_chain*,int ,int,int *,int *) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (struct mbuf*,scalar_t__) ;
 void* FUNC_6 (struct mbuf*,int) ;
 int FUNC_7 (struct mbuf*,int*) ;
 int FUNC_8 (struct mbuf*,int ,int ,int ,TYPE_3__*,struct pfloghdr*) ;
 int FUNC_9 (struct pfloghdr*,struct mbuf*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct ip_fw_chain *VAR_9, struct nat64stl_cfg *VAR_10,
    struct mbuf *VAR_11)
{
 struct pfloghdr VAR_12, *VAR_13;
 struct nat64_counters *VAR_14;
 struct ip6_hdr *VAR_15;
 struct icmp6_hdr *VAR_16;
 uint32_t VAR_17;
 int VAR_18, VAR_19;

 VAR_18 = 0;
 VAR_14 = &VAR_10->base.stats;
 VAR_19 = FUNC_7(VAR_11, &VAR_18);
 if (VAR_19 != VAR_2) {
  FUNC_0(VAR_14, VAR_6);
  return (VAR_3);
 }
 VAR_16 = FUNC_6(VAR_11, VAR_18);
 switch (VAR_16->icmp6_type) {
 case 131:
 case 130:
 case 128:
 case 129:
  break;
 default:
  FUNC_0(VAR_14, VAR_6);
  return (VAR_3);
 }
 VAR_18 += sizeof(struct icmp6_hdr);
 if (VAR_11->m_pkthdr.len < VAR_18 + sizeof(struct ip6_hdr) + VAR_1) {
  FUNC_0(VAR_14, VAR_6);
  return (VAR_3);
 }
 if (VAR_11->m_len < VAR_18 + sizeof(struct ip6_hdr) + VAR_1)
  VAR_11 = FUNC_5(VAR_11, VAR_18 + sizeof(struct ip6_hdr) + VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_14, VAR_8);
  return (VAR_4);
 }




 VAR_15 = FUNC_6(VAR_11, VAR_18);
 if (FUNC_3(VAR_9, VAR_10->map64,
     sizeof(struct in6_addr), &VAR_15->ip6_dst, &VAR_17) == 0) {
  FUNC_4(VAR_11);
  return (VAR_4);
 }
 if (VAR_10->base.flags & VAR_5) {
  VAR_13 = &VAR_12;
  FUNC_9(VAR_13, VAR_11, VAR_0, VAR_10->no.kidx);
 } else
  VAR_13 = ((void*)0);
 return (FUNC_8(VAR_11, 0,
     FUNC_2(FUNC_1(VAR_9, VAR_17, VAR_7)), 0, &VAR_10->base, VAR_13));
}
