
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sock {int sk_family; } ;
struct chtls_sock {unsigned int tid; int port_id; int * l2t_entry; int * txdata_skb_cache; struct chtls_dev* cdev; } ;
struct chtls_dev {struct tid_info* tids; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tid_info*,int ,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 struct chtls_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_3(VAR_0);
 struct chtls_dev *VAR_2 = VAR_1->cdev;
 unsigned int VAR_3 = VAR_1->tid;
 struct tid_info *VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = VAR_2->tids;
 FUNC_2(VAR_1->txdata_skb_cache);
 VAR_1->txdata_skb_cache = ((void*)0);

 if (VAR_1->l2t_entry) {
  FUNC_0(VAR_1->l2t_entry);
  VAR_1->l2t_entry = ((void*)0);
 }

 FUNC_1(VAR_4, VAR_1->port_id, VAR_3, VAR_0->sk_family);
 FUNC_4(VAR_0);
}
