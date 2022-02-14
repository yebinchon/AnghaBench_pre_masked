
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct udphdr {void* check; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct rxe_pkt_info {size_t opcode; int * hdr; int rxe; } ;
struct rxe_bth {int qpn; } ;
struct ipv6hdr {int priority; int hop_limit; int flow_lbl; } ;
struct iphdr {int ttl; int tos; void* check; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int *,int) ;
 TYPE_1__* VAR_4 ;

u32 FUNC_7(struct rxe_pkt_info *VAR_5, struct sk_buff *VAR_6)
{
 unsigned int VAR_7 = 0;
 struct iphdr *VAR_8 = ((void*)0);
 struct ipv6hdr *VAR_9 = ((void*)0);
 struct udphdr *VAR_10;
 struct rxe_bth *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = sizeof(struct udphdr) +
  (VAR_6->protocol == FUNC_1(VAR_2) ?
  sizeof(struct iphdr) : sizeof(struct ipv6hdr));



 u8 VAR_15[sizeof(struct udphdr) +
  sizeof(struct ipv6hdr) +
  VAR_3];




 VAR_12 = 0xdebb20e3;

 if (VAR_6->protocol == FUNC_1(VAR_2)) {
  FUNC_4(VAR_15, FUNC_2(VAR_6), VAR_14);
  VAR_8 = (struct iphdr *)VAR_15;
  VAR_10 = (struct udphdr *)(VAR_8 + 1);

  VAR_8->ttl = 0xff;
  VAR_8->check = VAR_1;
  VAR_8->tos = 0xff;
 } else {
  FUNC_4(VAR_15, FUNC_3(VAR_6), VAR_14);
  VAR_9 = (struct ipv6hdr *)VAR_15;
  VAR_10 = (struct udphdr *)(VAR_9 + 1);

  FUNC_5(VAR_9->flow_lbl, 0xff, sizeof(VAR_9->flow_lbl));
  VAR_9->priority = 0xf;
  VAR_9->hop_limit = 0xff;
 }
 VAR_10->check = VAR_1;

 VAR_7 += VAR_14;

 FUNC_4(&VAR_15[VAR_7], VAR_5->hdr, VAR_3);
 VAR_11 = (struct rxe_bth *)&VAR_15[VAR_7];


 VAR_11->qpn |= FUNC_0(~VAR_0);

 VAR_13 = VAR_14 + VAR_3;
 VAR_12 = FUNC_6(VAR_5->rxe, VAR_12, VAR_15, VAR_13);


 VAR_12 = FUNC_6(VAR_5->rxe, VAR_12, VAR_5->hdr + VAR_3,
   VAR_4[VAR_5->opcode].length - VAR_3);
 return VAR_12;
}
