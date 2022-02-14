
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int name; } ;
struct ipoib_dev_priv {int * wq; int * pd; TYPE_1__* rn_ops; TYPE_2__* ca; int * qp; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* ndo_init ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int * FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipoib_dev_priv*) ;
 int FUNC_8 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_9(VAR_4);
 int VAR_6 = -VAR_1;

 VAR_5->qp = ((void*)0);





 VAR_5->wq = FUNC_1("ipoib_wq", VAR_3);
 if (!VAR_5->wq) {
  FUNC_10("%s: failed to allocate device WQ\n", VAR_4->name);
  goto out;
 }


 VAR_5->pd = FUNC_3(VAR_5->ca, 0);
 if (FUNC_0(VAR_5->pd)) {
  FUNC_10("%s: failed to allocate PD\n", VAR_5->ca->name);
  goto clean_wq;
 }

 VAR_6 = VAR_5->rn_ops->ndo_init(VAR_4);
 if (VAR_6) {
  FUNC_10("%s failed to init HW resource\n", VAR_4->name);
  goto out_free_pd;
 }

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6) {
  FUNC_10("%s failed to init neigh hash\n", VAR_4->name);
  goto out_dev_uninit;
 }

 if (VAR_4->flags & VAR_2) {
  if (FUNC_6(VAR_4)) {
   FUNC_10("%s failed to open device\n", VAR_4->name);
   VAR_6 = -VAR_0;
   goto out_hash_uninit;
  }
 }

 return 0;

out_hash_uninit:
 FUNC_8(VAR_4);

out_dev_uninit:
 FUNC_5(VAR_4);

out_free_pd:
 if (VAR_5->pd) {
  FUNC_4(VAR_5->pd);
  VAR_5->pd = ((void*)0);
 }

clean_wq:
 if (VAR_5->wq) {
  FUNC_2(VAR_5->wq);
  VAR_5->wq = ((void*)0);
 }

out:
 return VAR_6;
}
