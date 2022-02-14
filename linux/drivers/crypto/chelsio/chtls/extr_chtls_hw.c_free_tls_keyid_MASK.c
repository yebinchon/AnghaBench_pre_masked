
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct chtls_hws {int rxkey; int txkey; } ;
struct chtls_sock {struct chtls_hws tlshws; struct chtls_dev* cdev; struct net_device* egress_dev; } ;
struct TYPE_4__ {int lock; int addr; } ;
struct chtls_dev {TYPE_2__ kmap; } ;
struct TYPE_3__ {int tls_key; } ;
struct adapter {TYPE_1__ chcr_stats; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 struct adapter* FUNC_2 (struct net_device*) ;
 struct chtls_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->egress_dev;
 struct chtls_dev *VAR_3 = VAR_1->cdev;
 struct chtls_hws *VAR_4;
 struct adapter *VAR_5;

 if (!VAR_3->kmap.addr)
  return;

 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = &VAR_1->tlshws;

 FUNC_4(&VAR_3->kmap.lock);
 if (VAR_4->rxkey >= 0) {
  FUNC_0(VAR_4->rxkey, VAR_3->kmap.addr);
  FUNC_1(&VAR_5->chcr_stats.tls_key);
  VAR_4->rxkey = -1;
 }
 if (VAR_4->txkey >= 0) {
  FUNC_0(VAR_4->txkey, VAR_3->kmap.addr);
  FUNC_1(&VAR_5->chcr_stats.tls_key);
  VAR_4->txkey = -1;
 }
 FUNC_5(&VAR_3->kmap.lock);
}
