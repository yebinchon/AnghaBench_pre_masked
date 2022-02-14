
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_enc_features; int * xfrmdev_ops; } ;
struct cxgb4_lld_info {int nports; struct net_device** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(const struct cxgb4_lld_info *VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nports; VAR_4++) {
  VAR_3 = VAR_2->ports[VAR_4];
  if (!VAR_3)
   continue;
  VAR_3->xfrmdev_ops = &VAR_1;
  VAR_3->hw_enc_features |= VAR_0;
  VAR_3->features |= VAR_0;
  FUNC_1();
  FUNC_0(VAR_3);
  FUNC_2();
 }
}
