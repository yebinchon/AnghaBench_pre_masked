
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlsrx_cmp_hdr {int res_to_mac_error; int type; } ;
struct tcp_sock {int rcv_nxt; } ;
struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int data_len; scalar_t__ data; } ;
struct cpl_rx_tls_cmp {int pdulength_length; int seq; } ;
struct chtls_hws {scalar_t__ pldlen; int sk_recv_queue; } ;
struct chtls_sock {struct chtls_hws tlshws; } ;
struct TYPE_2__ {int flags; int seq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct chtls_sock*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 struct cpl_rx_tls_cmp* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 struct chtls_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;
 struct tcp_sock* FUNC_14 (struct sock*) ;

__attribute__((used)) static void FUNC_15(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct tlsrx_cmp_hdr *VAR_7;
 struct cpl_rx_tls_cmp *VAR_8;
 struct sk_buff *VAR_9;
 struct chtls_sock *VAR_10;
 struct chtls_hws *VAR_11;
 struct tcp_sock *VAR_12;

 VAR_8 = FUNC_8(VAR_6);
 VAR_10 = FUNC_10(VAR_5);
 VAR_11 = &VAR_10->tlshws;
 VAR_12 = FUNC_14(VAR_5);

 FUNC_1(VAR_6)->seq = FUNC_9(VAR_8->seq);
 FUNC_1(VAR_6)->flags = 0;

 FUNC_11(VAR_6);
 FUNC_3(VAR_6, sizeof(*VAR_8));
 VAR_7 = (struct tlsrx_cmp_hdr *)VAR_6->data;
 if (VAR_7->res_to_mac_error & VAR_2)
  VAR_7->type = VAR_0;
 if (!VAR_6->data_len)
  FUNC_5(VAR_6, VAR_3);

 VAR_12->rcv_nxt +=
  FUNC_0(FUNC_9(VAR_8->pdulength_length));

 FUNC_1(VAR_6)->flags |= VAR_4;
 VAR_9 = FUNC_2(&VAR_11->sk_recv_queue);
 if (!VAR_9) {
  FUNC_4(&VAR_5->sk_receive_queue, VAR_6);
 } else {
  FUNC_7(VAR_6, VAR_11->pldlen);
  VAR_11->pldlen = 0;
  FUNC_4(&VAR_5->sk_receive_queue, VAR_6);
  FUNC_4(&VAR_5->sk_receive_queue, VAR_9);
 }

 if (!FUNC_12(VAR_5, VAR_1)) {
  FUNC_6(VAR_10);
  VAR_5->sk_data_ready(VAR_5);
 }
}
