
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct TYPE_3__ {int mlid; TYPE_2__ mgid; } ;
struct ipoib_mcast {TYPE_1__ mcmember; int flags; int mc; } ;
struct ipoib_dev_priv {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ,char*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ipoib_dev_priv *VAR_2, struct ipoib_mcast *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_5(VAR_1, &VAR_3->flags))
  FUNC_2(VAR_3->mc);

 if (FUNC_5(VAR_0, &VAR_3->flags)) {
  FUNC_3(VAR_2, "leaving MGID %16D\n",
    VAR_3->mcmember.mgid.raw, ":");


  VAR_4 = FUNC_1(VAR_2->qp, &VAR_3->mcmember.mgid,
          FUNC_0(VAR_3->mcmember.mlid));
  if (VAR_4)
   FUNC_4(VAR_2, "ib_detach_mcast failed (result = %d)\n", VAR_4);
 }

 return 0;
}
