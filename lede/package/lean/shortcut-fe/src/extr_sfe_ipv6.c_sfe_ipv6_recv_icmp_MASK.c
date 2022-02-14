
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct sfe_ipv6_udp_hdr {int dest; int source; } ;
struct sfe_ipv6_tcp_hdr {int dest; int source; } ;
struct sfe_ipv6_addr {int dummy; } ;
struct sfe_ipv6_ip_hdr {int version; int nexthdr; struct sfe_ipv6_addr daddr; struct sfe_ipv6_addr saddr; } ;
struct sfe_ipv6_frag_hdr {int frag_off; } ;
struct sfe_ipv6_ext_hdr {unsigned int hdr_len; int next_hdr; } ;
struct sfe_ipv6_connection_match {struct sfe_ipv6_connection* connection; } ;
struct sfe_ipv6_connection {int dummy; } ;
struct sfe_ipv6 {int lock; int packets_not_forwarded; int * exception_events; } ;
struct net_device {int dummy; } ;
struct icmp6hdr {scalar_t__ icmp6_type; } ;
typedef int __be16 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 struct sfe_ipv6_connection_match* FUNC_3 (struct sfe_ipv6*,struct net_device*,int,struct sfe_ipv6_addr*,int ,struct sfe_ipv6_addr*,int ) ;
 int FUNC_4 (struct sfe_ipv6*,struct sfe_ipv6_connection*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sfe_ipv6*,struct sfe_ipv6_connection*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sfe_ipv6 *VAR_14, struct sk_buff *VAR_15, struct net_device *VAR_16,
         unsigned int VAR_17, struct sfe_ipv6_ip_hdr *VAR_18, unsigned int VAR_19)
{
 struct icmp6hdr *VAR_20;
 struct sfe_ipv6_ip_hdr *VAR_21;
 struct sfe_ipv6_udp_hdr *VAR_22;
 struct sfe_ipv6_tcp_hdr *VAR_23;
 struct sfe_ipv6_addr *VAR_24;
 struct sfe_ipv6_addr *VAR_25;
 __be16 VAR_26;
 __be16 VAR_27;
 struct sfe_ipv6_connection_match *VAR_28;
 struct sfe_ipv6_connection *VAR_29;
 u8 VAR_30;




 VAR_17 -= VAR_19;
 if (!FUNC_2(VAR_15, VAR_19 + sizeof(struct icmp6hdr))) {
  FUNC_7(&VAR_14->lock);
  VAR_14->exception_events[VAR_4]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("packet too short for ICMP header\n");
  return 0;
 }




 VAR_20 = (struct icmp6hdr *)(VAR_15->data + VAR_19);
 if ((VAR_20->icmp6_type != VAR_0)
     && (VAR_20->icmp6_type != VAR_1)) {
  FUNC_7(&VAR_14->lock);
  VAR_14->exception_events[VAR_9]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("unhandled ICMP type: 0x%x\n", VAR_20->icmp6_type);
  return 0;
 }






 VAR_17 -= sizeof(struct icmp6hdr);
 VAR_19 += sizeof(struct icmp6hdr);
 if (!FUNC_2(VAR_15, VAR_19 + sizeof(struct sfe_ipv6_ip_hdr) + sizeof(struct sfe_ipv6_ext_hdr))) {
  FUNC_7(&VAR_14->lock);
  VAR_14->exception_events[VAR_5]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("Embedded IP header not complete\n");
  return 0;
 }




 VAR_21 = (struct sfe_ipv6_ip_hdr *)(VAR_20 + 1);
 if (FUNC_9(VAR_21->version != 6)) {
  FUNC_7(&VAR_14->lock);
  VAR_14->exception_events[VAR_6]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("IP version: %u\n", VAR_21->version);
  return 0;
 }

 VAR_17 -= sizeof(struct sfe_ipv6_ip_hdr);
 VAR_19 += sizeof(struct sfe_ipv6_ip_hdr);
 VAR_30 = VAR_21->nexthdr;
 while (FUNC_9(FUNC_5(VAR_30))) {
  struct sfe_ipv6_ext_hdr *VAR_31;
  unsigned int VAR_32;

  VAR_31 = (struct sfe_ipv6_ext_hdr *)(VAR_15->data + VAR_19);
  if (VAR_30 == VAR_11) {
   struct sfe_ipv6_frag_hdr *VAR_33 = (struct sfe_ipv6_frag_hdr *)VAR_31;
   unsigned int VAR_34 = FUNC_1(VAR_33->frag_off);

   if (VAR_34 & VAR_12) {
    FUNC_7(&VAR_14->lock);
    VAR_14->exception_events[VAR_10]++;
    VAR_14->packets_not_forwarded++;
    FUNC_8(&VAR_14->lock);

    FUNC_0("non-initial fragment\n");
    return 0;
   }
  }

  VAR_32 = VAR_31->hdr_len;
  VAR_32 <<= 3;
  VAR_32 += sizeof(struct sfe_ipv6_ext_hdr);
  VAR_17 -= VAR_32;
  VAR_19 += VAR_32;




  if (!FUNC_2(VAR_15, VAR_19 + sizeof(struct sfe_ipv6_ext_hdr))) {
   FUNC_7(&VAR_14->lock);
   VAR_14->exception_events[VAR_2]++;
   VAR_14->packets_not_forwarded++;
   FUNC_8(&VAR_14->lock);

   FUNC_0("extension header %d not completed\n", VAR_30);
   return 0;
  }

  VAR_30 = VAR_31->next_hdr;
 }




 switch (VAR_30) {
 case 128:
  VAR_22 = (struct sfe_ipv6_udp_hdr *)(VAR_15->data + VAR_19);
  VAR_26 = VAR_22->source;
  VAR_27 = VAR_22->dest;
  break;

 case 129:
  VAR_23 = (struct sfe_ipv6_tcp_hdr *)(VAR_15->data + VAR_19);
  VAR_26 = VAR_23->source;
  VAR_27 = VAR_23->dest;
  break;

 default:
  FUNC_7(&VAR_14->lock);
  VAR_14->exception_events[VAR_7]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("Unhandled embedded IP protocol: %u\n", VAR_30);
  return 0;
 }

 VAR_24 = &VAR_21->saddr;
 VAR_25 = &VAR_21->daddr;

 FUNC_7(&VAR_14->lock);
 VAR_28 = FUNC_3(VAR_14, VAR_16, VAR_21->nexthdr, VAR_25, VAR_27, VAR_24, VAR_26);
 if (FUNC_9(!VAR_28)) {
  VAR_14->exception_events[VAR_8]++;
  VAR_14->packets_not_forwarded++;
  FUNC_8(&VAR_14->lock);

  FUNC_0("no connection found\n");
  return 0;
 }





 VAR_29 = VAR_28->connection;
 FUNC_6(VAR_14, VAR_29);
 VAR_14->exception_events[VAR_3]++;
 VAR_14->packets_not_forwarded++;
 FUNC_8(&VAR_14->lock);

 FUNC_4(VAR_14, VAR_29, VAR_13);
 return 0;
}
