
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct sfe_ipv6_ip_hdr {int version; unsigned int nexthdr; int payload_len; } ;
struct sfe_ipv6_frag_hdr {int frag_off; } ;
struct sfe_ipv6_ext_hdr {unsigned int hdr_len; unsigned int next_hdr; } ;
struct sfe_ipv6 {int lock; int packets_not_forwarded; int * exception_events; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct sfe_ipv6 VAR_10 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct sfe_ipv6*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv6_ip_hdr*,unsigned int) ;
 int FUNC_5 (struct sfe_ipv6*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv6_ip_hdr*,unsigned int,int) ;
 int FUNC_6 (struct sfe_ipv6*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv6_ip_hdr*,unsigned int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct net_device *VAR_11, struct sk_buff *VAR_12)
{
 struct sfe_ipv6 *VAR_13 = &VAR_10;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16 = sizeof(struct sfe_ipv6_ip_hdr);
 bool VAR_17 = 0;
 struct sfe_ipv6_ip_hdr *VAR_18;
 u8 VAR_19;




 VAR_14 = VAR_12->len;
 if (!FUNC_2(VAR_12, VAR_16 + sizeof(struct sfe_ipv6_ext_hdr))) {
  FUNC_7(&VAR_13->lock);
  VAR_13->exception_events[VAR_4]++;
  VAR_13->packets_not_forwarded++;
  FUNC_8(&VAR_13->lock);

  FUNC_0("len: %u is too short\n", VAR_14);
  return 0;
 }




 VAR_18 = (struct sfe_ipv6_ip_hdr *)VAR_12->data;
 if (FUNC_9(VAR_18->version != 6)) {
  FUNC_7(&VAR_13->lock);
  VAR_13->exception_events[VAR_6]++;
  VAR_13->packets_not_forwarded++;
  FUNC_8(&VAR_13->lock);

  FUNC_0("IP version: %u\n", VAR_18->version);
  return 0;
 }




 VAR_15 = FUNC_1(VAR_18->payload_len);
 if (FUNC_9(VAR_15 > (VAR_14 - VAR_16))) {
  FUNC_7(&VAR_13->lock);
  VAR_13->exception_events[VAR_3]++;
  VAR_13->packets_not_forwarded++;
  FUNC_8(&VAR_13->lock);

  FUNC_0("payload_len: %u, exceeds len: %u\n", VAR_15, (VAR_14 - sizeof(struct sfe_ipv6_ip_hdr)));
  return 0;
 }

 VAR_19 = VAR_18->nexthdr;
 while (FUNC_9(FUNC_3(VAR_19))) {
  struct sfe_ipv6_ext_hdr *VAR_20;
  unsigned int VAR_21;

  VAR_20 = (struct sfe_ipv6_ext_hdr *)(VAR_12->data + VAR_16);
  if (VAR_19 == VAR_8) {
   struct sfe_ipv6_frag_hdr *VAR_22 = (struct sfe_ipv6_frag_hdr *)VAR_20;
   unsigned int VAR_23 = FUNC_1(VAR_22->frag_off);

   if (VAR_23 & VAR_9) {
    FUNC_7(&VAR_13->lock);
    VAR_13->exception_events[VAR_5]++;
    VAR_13->packets_not_forwarded++;
    FUNC_8(&VAR_13->lock);

    FUNC_0("non-initial fragment\n");
    return 0;
   }
  }

  VAR_21 = VAR_20->hdr_len;
  VAR_21 <<= 3;
  VAR_21 += sizeof(struct sfe_ipv6_ext_hdr);
  VAR_16 += VAR_21;
  if (!FUNC_2(VAR_12, VAR_16 + sizeof(struct sfe_ipv6_ext_hdr))) {
   FUNC_7(&VAR_13->lock);
   VAR_13->exception_events[VAR_4]++;
   VAR_13->packets_not_forwarded++;
   FUNC_8(&VAR_13->lock);

   FUNC_0("extension header %d not completed\n", VAR_19);
   return 0;
  }

  VAR_17 = 1;
  VAR_19 = VAR_20->next_hdr;
 }

 if (VAR_2 == VAR_19) {
  return FUNC_6(VAR_13, VAR_12, VAR_11, VAR_14, VAR_18, VAR_16, VAR_17);
 }

 if (VAR_1 == VAR_19) {
  return FUNC_5(VAR_13, VAR_12, VAR_11, VAR_14, VAR_18, VAR_16, VAR_17);
 }

 if (VAR_0 == VAR_19) {
  return FUNC_4(VAR_13, VAR_12, VAR_11, VAR_14, VAR_18, VAR_16);
 }

 FUNC_7(&VAR_13->lock);
 VAR_13->exception_events[VAR_7]++;
 VAR_13->packets_not_forwarded++;
 FUNC_8(&VAR_13->lock);

 FUNC_0("not UDP, TCP or ICMP: %u\n", VAR_19);
 return 0;
}
