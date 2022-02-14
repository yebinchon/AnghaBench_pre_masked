
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ofld; int txkey; int rxkey; int sk_recv_queue; int mfs; } ;
struct chtls_sock {TYPE_1__ tlshws; int mss; int * wr_skb_tail; int * wr_skb_head; int txq; struct chtls_dev* cdev; int kref; int txdata_skb_cache; } ;
struct chtls_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct chtls_sock*) ;
 int FUNC_2 (int *) ;
 struct chtls_sock* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct chtls_sock *FUNC_5(struct chtls_dev *VAR_4)
{
 struct chtls_sock *VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);

 if (!VAR_5)
  return ((void*)0);

 VAR_5->txdata_skb_cache = FUNC_0(VAR_3, VAR_0);
 if (!VAR_5->txdata_skb_cache) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 FUNC_2(&VAR_5->kref);
 VAR_5->cdev = VAR_4;
 FUNC_4(&VAR_5->txq);
 VAR_5->wr_skb_head = ((void*)0);
 VAR_5->wr_skb_tail = ((void*)0);
 VAR_5->mss = VAR_1;
 VAR_5->tlshws.ofld = 1;
 VAR_5->tlshws.txkey = -1;
 VAR_5->tlshws.rxkey = -1;
 VAR_5->tlshws.mfs = VAR_2;
 FUNC_4(&VAR_5->tlshws.sk_recv_queue);
 return VAR_5;
}
