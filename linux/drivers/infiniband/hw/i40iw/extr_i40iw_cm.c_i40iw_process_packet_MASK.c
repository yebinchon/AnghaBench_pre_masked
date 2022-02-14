
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcphdr {scalar_t__ fin; scalar_t__ ack; scalar_t__ syn; scalar_t__ rst; } ;
struct i40iw_puda_buf {scalar_t__ tcph; } ;
struct i40iw_cm_node {int dummy; } ;
typedef enum i40iw_tcpip_pkt_type { ____Placeholder_i40iw_tcpip_pkt_type } i40iw_tcpip_pkt_type ;






 int VAR_0 ;
 int FUNC_0 (struct i40iw_cm_node*,struct tcphdr*) ;
 int FUNC_1 (struct i40iw_cm_node*,struct i40iw_puda_buf*) ;
 int FUNC_2 (struct i40iw_cm_node*) ;
 int FUNC_3 (struct i40iw_cm_node*,struct i40iw_puda_buf*) ;
 int FUNC_4 (struct i40iw_cm_node*,struct i40iw_puda_buf*) ;
 int FUNC_5 (struct i40iw_cm_node*,struct i40iw_puda_buf*) ;

__attribute__((used)) static void FUNC_6(struct i40iw_cm_node *VAR_1,
     struct i40iw_puda_buf *VAR_2)
{
 enum i40iw_tcpip_pkt_type VAR_3 = VAR_0;
 struct tcphdr *VAR_4 = (struct tcphdr *)VAR_2->tcph;
 u32 VAR_5 = 0;
 int VAR_6;

 if (VAR_4->rst) {
  VAR_3 = 130;
 } else if (VAR_4->syn) {
  VAR_3 = 129;
  if (VAR_4->ack)
   VAR_3 = 128;
 } else if (VAR_4->ack) {
  VAR_3 = 131;
 }
 if (VAR_4->fin)
  VAR_5 = 1;

 switch (VAR_3) {
 case 129:
  FUNC_4(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_5(VAR_1, VAR_2);
  break;
 case 131:
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (VAR_5 && !VAR_6)
   FUNC_2(VAR_1);
  break;
 case 130:
  FUNC_3(VAR_1, VAR_2);
  break;
 default:
  if (VAR_5 &&
      (!FUNC_0(VAR_1, (struct tcphdr *)VAR_2->tcph)))
   FUNC_2(VAR_1);
  break;
 }
}
