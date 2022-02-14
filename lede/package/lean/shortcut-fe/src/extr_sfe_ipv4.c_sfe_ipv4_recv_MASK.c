
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct sfe_ipv4_ip_hdr {int version; int ihl; unsigned int protocol; int frag_off; int tot_len; } ;
struct sfe_ipv4 {int lock; int packets_not_forwarded; int * exception_events; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 struct sfe_ipv4 VAR_13 ;
 int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sfe_ipv4*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv4_ip_hdr*,unsigned int) ;
 int FUNC_5 (struct sfe_ipv4*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv4_ip_hdr*,unsigned int,int) ;
 int FUNC_6 (struct sfe_ipv4*,struct sk_buff*,struct net_device*,unsigned int,struct sfe_ipv4_ip_hdr*,unsigned int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct net_device *VAR_14, struct sk_buff *VAR_15)
{
 struct sfe_ipv4 *VAR_16 = &VAR_13;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 bool VAR_21;
 bool VAR_22;
 struct sfe_ipv4_ip_hdr *VAR_23;
 u32 VAR_24;




 VAR_17 = VAR_15->len;
 if (FUNC_9(!FUNC_3(VAR_15, sizeof(struct sfe_ipv4_ip_hdr)))) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_8]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("len: %u is too short\n", VAR_17);
  return 0;
 }




 VAR_23 = (struct sfe_ipv4_ip_hdr *)VAR_15->data;
 VAR_18 = FUNC_2(VAR_23->tot_len);
 if (FUNC_9(VAR_18 < sizeof(struct sfe_ipv4_ip_hdr))) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_5]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("tot_len: %u is too short\n", VAR_18);
  return 0;
 }




 if (FUNC_9(VAR_23->version != 4)) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_11]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("IP version: %u\n", VAR_23->version);
  return 0;
 }




 if (FUNC_9(VAR_18 > VAR_17)) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_7]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("tot_len: %u, exceeds len: %u\n", VAR_18, VAR_17);
  return 0;
 }




 VAR_19 = FUNC_2(VAR_23->frag_off);
 if (FUNC_9(VAR_19 & VAR_4)) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_10]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("non-initial fragment\n");
  return 0;
 }




 VAR_21 = FUNC_9(VAR_19 & VAR_3) ? 1 : 0;





 VAR_20 = VAR_23->ihl << 2;
 VAR_22 = FUNC_9(VAR_20 != sizeof(struct sfe_ipv4_ip_hdr)) ? 1 : 0;
 if (FUNC_9(VAR_22)) {
  if (FUNC_9(VAR_17 < VAR_20)) {
   FUNC_7(&VAR_16->lock);
   VAR_16->exception_events[VAR_9]++;
   VAR_16->packets_not_forwarded++;
   FUNC_8(&VAR_16->lock);

   FUNC_0("len: %u is too short for header of size: %u\n", VAR_17, VAR_20);
   return 0;
  }

  VAR_21 = 1;
 }

 if (FUNC_9(FUNC_1((u8 *)VAR_23, VAR_23->ihl))) {
  FUNC_7(&VAR_16->lock);
  VAR_16->exception_events[VAR_6]++;
  VAR_16->packets_not_forwarded++;
  FUNC_8(&VAR_16->lock);

  FUNC_0("checksum of ipv4 header is invalid\n");
  return 0;
 }

 VAR_24 = VAR_23->protocol;
 if (VAR_2 == VAR_24) {
  return FUNC_6(VAR_16, VAR_15, VAR_14, VAR_17, VAR_23, VAR_20, VAR_21);
 }

 if (VAR_1 == VAR_24) {
  return FUNC_5(VAR_16, VAR_15, VAR_14, VAR_17, VAR_23, VAR_20, VAR_21);
 }

 if (VAR_0 == VAR_24) {
  return FUNC_4(VAR_16, VAR_15, VAR_14, VAR_17, VAR_23, VAR_20);
 }

 FUNC_7(&VAR_16->lock);
 VAR_16->exception_events[VAR_12]++;
 VAR_16->packets_not_forwarded++;
 FUNC_8(&VAR_16->lock);

 FUNC_0("not UDP, TCP or ICMP: %u\n", VAR_24);
 return 0;
}
