
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pfloghdr {int dummy; } ;
struct nat64_counters {int dummy; } ;
struct TYPE_6__ {int flags; int clat_plen; struct nat64_counters stats; } ;
struct TYPE_5__ {int kidx; } ;
struct nat64clat_cfg {TYPE_3__ base; TYPE_2__ no; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
struct ip_fw_chain {int dummy; } ;
struct ip6_hdr {int ip6_dst; } ;
struct icmp6_hdr {int icmp6_type; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nat64_counters*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct mbuf* FUNC_1 (struct mbuf*,scalar_t__) ;
 void* FUNC_2 (struct mbuf*,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mbuf*,int*) ;
 int FUNC_5 (struct mbuf*,int ,scalar_t__,int ,TYPE_3__*,struct pfloghdr*) ;
 int FUNC_6 (struct pfloghdr*,struct mbuf*,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct ip_fw_chain *VAR_8, struct nat64clat_cfg *VAR_9,
    struct mbuf *VAR_10)
{
 struct pfloghdr VAR_11, *VAR_12;
 struct nat64_counters *VAR_13;
 struct ip6_hdr *VAR_14;
 struct icmp6_hdr *VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = 0;
 VAR_13 = &VAR_9->base.stats;
 VAR_18 = FUNC_4(VAR_10, &VAR_17);
 if (VAR_18 != VAR_2) {
  FUNC_0(VAR_13, VAR_6);
  return (VAR_3);
 }
 VAR_15 = FUNC_2(VAR_10, VAR_17);
 switch (VAR_15->icmp6_type) {
 case 131:
 case 130:
 case 128:
 case 129:
  break;
 default:
  FUNC_0(VAR_13, VAR_6);
  return (VAR_3);
 }
 VAR_17 += sizeof(struct icmp6_hdr);
 if (VAR_10->m_pkthdr.len < VAR_17 + sizeof(struct ip6_hdr) + VAR_1) {
  FUNC_0(VAR_13, VAR_6);
  return (VAR_3);
 }
 if (VAR_10->m_len < VAR_17 + sizeof(struct ip6_hdr) + VAR_1)
  VAR_10 = FUNC_1(VAR_10, VAR_17 + sizeof(struct ip6_hdr) + VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_13, VAR_7);
  return (VAR_4);
 }




 VAR_14 = FUNC_2(VAR_10, VAR_17);
 VAR_16 = FUNC_3(&VAR_14->ip6_dst, VAR_9->base.clat_plen);
 if (VAR_16 == 0) {
  FUNC_0(VAR_13, VAR_6);
  return (VAR_3);
 }
 if (VAR_9->base.flags & VAR_5) {
  VAR_12 = &VAR_11;
  FUNC_6(VAR_12, VAR_10, VAR_0, VAR_9->no.kidx);
 } else
  VAR_12 = ((void*)0);
 return (FUNC_5(VAR_10, 0, VAR_16, 0, &VAR_9->base, VAR_12));
}
