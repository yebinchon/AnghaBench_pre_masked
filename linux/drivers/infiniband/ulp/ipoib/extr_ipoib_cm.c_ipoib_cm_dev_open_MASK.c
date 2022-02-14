
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_5__ {int * id; } ;
struct ipoib_dev_priv {TYPE_2__ cm; TYPE_1__* qp; TYPE_3__* ca; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int qp_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (TYPE_3__*,int ,struct net_device*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*,int ,...) ;

int FUNC_9(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_7(VAR_2);
 int VAR_4;

 if (!FUNC_0(VAR_2->dev_addr))
  return 0;

 VAR_3->cm.id = FUNC_5(VAR_3->ca, VAR_1, VAR_2);
 if (FUNC_1(VAR_3->cm.id)) {
  FUNC_8("%s: failed to create CM ID\n", VAR_3->ca->name);
  VAR_4 = FUNC_2(VAR_3->cm.id);
  goto err_cm;
 }

 VAR_4 = FUNC_4(VAR_3->cm.id, FUNC_3(VAR_0 | VAR_3->qp->qp_num),
      0);
 if (VAR_4) {
  FUNC_8("%s: failed to listen on ID 0x%llx\n", VAR_3->ca->name,
   VAR_0 | VAR_3->qp->qp_num);
  goto err_listen;
 }

 return 0;

err_listen:
 FUNC_6(VAR_3->cm.id);
err_cm:
 VAR_3->cm.id = ((void*)0);
 return VAR_4;
}
