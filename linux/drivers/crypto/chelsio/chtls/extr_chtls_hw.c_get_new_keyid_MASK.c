
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct chtls_hws {int rxkey; int txkey; } ;
struct chtls_sock {struct chtls_hws tlshws; struct chtls_dev* cdev; struct net_device* egress_dev; } ;
struct TYPE_4__ {int size; int lock; int addr; } ;
struct chtls_dev {TYPE_2__ kmap; } ;
struct TYPE_3__ {int tls_key; } ;
struct adapter {TYPE_1__ chcr_stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct chtls_sock *VAR_1, u32 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->egress_dev;
 struct chtls_dev *VAR_4 = VAR_1->cdev;
 struct chtls_hws *VAR_5;
 struct adapter *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 VAR_5 = &VAR_1->tlshws;

 FUNC_4(&VAR_4->kmap.lock);
 VAR_7 = FUNC_2(VAR_4->kmap.addr, VAR_4->kmap.size);
 if (VAR_7 < VAR_4->kmap.size) {
  FUNC_0(VAR_7, VAR_4->kmap.addr);
  if (VAR_2 == VAR_0)
   VAR_5->rxkey = VAR_7;
  else
   VAR_5->txkey = VAR_7;
  FUNC_1(&VAR_6->chcr_stats.tls_key);
 } else {
  VAR_7 = -1;
 }
 FUNC_5(&VAR_4->kmap.lock);
 return VAR_7;
}
