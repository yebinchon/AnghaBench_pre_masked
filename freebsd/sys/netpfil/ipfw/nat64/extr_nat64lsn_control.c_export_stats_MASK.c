
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat64lsn_cfg {int plen4; struct nat64lsn_alias* aliases; int hosts_count; } ;
struct nat64lsn_alias {int * icmp_pgmask; int icmp_chunkmask; int * udp_pgmask; int udp_chunkmask; int * tcp_pgmask; int tcp_chunkmask; } ;
struct ipfw_nat64lsn_stats {int icmpchunks; int udpchunks; int tcpchunks; int hostcount; } ;
struct ip_fw_chain {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct nat64lsn_cfg*,struct ipfw_nat64lsn_stats*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_24, struct nat64lsn_cfg *VAR_25,
    struct ipfw_nat64lsn_stats *VAR_26)
{
 struct nat64lsn_alias *VAR_27;
 int VAR_28, VAR_29;

 FUNC_1(VAR_25, VAR_26, VAR_19);
 FUNC_1(VAR_25, VAR_26, VAR_18);
 FUNC_1(VAR_25, VAR_26, VAR_17);
 FUNC_1(VAR_25, VAR_26, VAR_1);
 FUNC_1(VAR_25, VAR_26, VAR_16);
 FUNC_1(VAR_25, VAR_26, VAR_14);
 FUNC_1(VAR_25, VAR_26, VAR_15);
 FUNC_1(VAR_25, VAR_26, VAR_11);
 FUNC_1(VAR_25, VAR_26, VAR_13);
 FUNC_1(VAR_25, VAR_26, VAR_12);
 FUNC_1(VAR_25, VAR_26, VAR_0);

 FUNC_1(VAR_25, VAR_26, VAR_2);
 FUNC_1(VAR_25, VAR_26, VAR_10);
 FUNC_1(VAR_25, VAR_26, VAR_4);
 FUNC_1(VAR_25, VAR_26, VAR_8);
 FUNC_1(VAR_25, VAR_26, VAR_3);
 FUNC_1(VAR_25, VAR_26, VAR_7);
 FUNC_1(VAR_25, VAR_26, VAR_5);
 FUNC_1(VAR_25, VAR_26, VAR_6);
 FUNC_1(VAR_25, VAR_26, VAR_9);
 FUNC_1(VAR_25, VAR_26, VAR_20);
 FUNC_1(VAR_25, VAR_26, VAR_21);
 FUNC_1(VAR_25, VAR_26, VAR_22);
 FUNC_1(VAR_25, VAR_26, VAR_23);

 VAR_26->hostcount = VAR_25->hosts_count;
 for (VAR_28 = 0; VAR_28 < (1 << (32 - VAR_25->plen4)); VAR_28++) {
  VAR_27 = &VAR_25->aliases[VAR_28];
  for (VAR_29 = 0; VAR_29 < 32 && FUNC_0(VAR_27->tcp_chunkmask, VAR_29); VAR_29++)
   VAR_26->tcpchunks += FUNC_2(VAR_27->tcp_pgmask[VAR_29]);
  for (VAR_29 = 0; VAR_29 < 32 && FUNC_0(VAR_27->udp_chunkmask, VAR_29); VAR_29++)
   VAR_26->udpchunks += FUNC_2(VAR_27->udp_pgmask[VAR_29]);
  for (VAR_29 = 0; VAR_29 < 32 && FUNC_0(VAR_27->icmp_chunkmask, VAR_29); VAR_29++)
   VAR_26->icmpchunks += FUNC_2(VAR_27->icmp_pgmask[VAR_29]);
 }
}
