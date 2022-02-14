
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct sfe_ipv4_udp_hdr {int dest; int source; } ;
struct sfe_ipv4_tcp_hdr {int dest; int source; } ;
struct sfe_ipv4_ip_hdr {int version; unsigned int ihl; int protocol; int daddr; int saddr; } ;
struct sfe_ipv4_connection_match {struct sfe_ipv4_connection* connection; } ;
struct sfe_ipv4_connection {int dummy; } ;
struct sfe_ipv4 {int lock; int packets_not_forwarded; int * exception_events; } ;
struct net_device {int dummy; } ;
struct icmphdr {scalar_t__ type; } ;
typedef int __be32 ;
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
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sfe_ipv4_connection_match* FUNC_2 (struct sfe_ipv4*,struct net_device*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct sfe_ipv4*,struct sfe_ipv4_connection*,int ) ;
 int FUNC_4 (struct sfe_ipv4*,struct sfe_ipv4_connection*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sfe_ipv4 *VAR_13, struct sk_buff *VAR_14, struct net_device *VAR_15,
         unsigned int VAR_16, struct sfe_ipv4_ip_hdr *VAR_17, unsigned int VAR_18)
{
 struct icmphdr *VAR_19;
 struct sfe_ipv4_ip_hdr *VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 u32 *VAR_23;
 struct sfe_ipv4_udp_hdr *VAR_24;
 struct sfe_ipv4_tcp_hdr *VAR_25;
 __be32 VAR_26;
 __be32 VAR_27;
 __be16 VAR_28;
 __be16 VAR_29;
 struct sfe_ipv4_connection_match *VAR_30;
 struct sfe_ipv4_connection *VAR_31;
 u32 VAR_32 = sizeof(struct icmphdr) + VAR_18;




 VAR_16 -= VAR_18;
 if (!FUNC_1(VAR_14, VAR_32)) {
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_3]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("packet too short for ICMP header\n");
  return 0;
 }




 VAR_19 = (struct icmphdr *)(VAR_14->data + VAR_18);
 if ((VAR_19->type != VAR_0)
     && (VAR_19->type != VAR_1)) {
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_11]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("unhandled ICMP type: 0x%x\n", VAR_19->type);
  return 0;
 }




 VAR_16 -= sizeof(struct icmphdr);
 VAR_32 += sizeof(struct sfe_ipv4_ip_hdr);
 if (!FUNC_1(VAR_14, VAR_32)) {
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_4]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("Embedded IP header not complete\n");
  return 0;
 }




 VAR_20 = (struct sfe_ipv4_ip_hdr *)(VAR_19 + 1);
 if (FUNC_7(VAR_20->version != 4)) {
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_6]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("IP version: %u\n", VAR_20->version);
  return 0;
 }




 VAR_21 = VAR_20->ihl;
 VAR_22 = VAR_21 << 2;
 VAR_32 += VAR_22 - sizeof(struct sfe_ipv4_ip_hdr);
 if (!FUNC_1(VAR_14, VAR_32)) {
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_5]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("Embedded header not large enough for IP options\n");
  return 0;
 }

 VAR_16 -= VAR_22;
 VAR_23 = ((u32 *)VAR_20) + VAR_21;




 switch (VAR_20->protocol) {
 case 128:




  VAR_32 += 8;
  if (!FUNC_1(VAR_14, VAR_32)) {
   FUNC_5(&VAR_13->lock);
   VAR_13->exception_events[VAR_8]++;
   VAR_13->packets_not_forwarded++;
   FUNC_6(&VAR_13->lock);

   FUNC_0("Incomplete embedded UDP header\n");
   return 0;
  }

  VAR_24 = (struct sfe_ipv4_udp_hdr *)VAR_23;
  VAR_28 = VAR_24->source;
  VAR_29 = VAR_24->dest;
  break;

 case 129:




  VAR_32 += 8;
  if (!FUNC_1(VAR_14, VAR_32)) {
   FUNC_5(&VAR_13->lock);
   VAR_13->exception_events[VAR_7]++;
   VAR_13->packets_not_forwarded++;
   FUNC_6(&VAR_13->lock);

   FUNC_0("Incomplete embedded TCP header\n");
   return 0;
  }

  VAR_25 = (struct sfe_ipv4_tcp_hdr *)VAR_23;
  VAR_28 = VAR_25->source;
  VAR_29 = VAR_25->dest;
  break;

 default:
  FUNC_5(&VAR_13->lock);
  VAR_13->exception_events[VAR_9]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("Unhandled embedded IP protocol: %u\n", VAR_20->protocol);
  return 0;
 }

 VAR_26 = VAR_20->saddr;
 VAR_27 = VAR_20->daddr;

 FUNC_5(&VAR_13->lock);
 VAR_30 = FUNC_2(VAR_13, VAR_15, VAR_20->protocol, VAR_27, VAR_29, VAR_26, VAR_28);
 if (FUNC_7(!VAR_30)) {
  VAR_13->exception_events[VAR_10]++;
  VAR_13->packets_not_forwarded++;
  FUNC_6(&VAR_13->lock);

  FUNC_0("no connection found\n");
  return 0;
 }





 VAR_31 = VAR_30->connection;
 FUNC_4(VAR_13, VAR_31);
 VAR_13->exception_events[VAR_2]++;
 VAR_13->packets_not_forwarded++;
 FUNC_6(&VAR_13->lock);

 FUNC_3(VAR_13, VAR_31, VAR_12);
 return 0;
}
