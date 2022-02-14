
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int mcast_task; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct ipoib_dev_priv *VAR_3)
{
 FUNC_0(VAR_3, "starting multicast thread flags 0x%lX\n",
     VAR_3->flags);

 FUNC_1(&VAR_2);
 if (!FUNC_4(VAR_0, &VAR_3->flags))
  FUNC_3(VAR_1, &VAR_3->mcast_task, 0);
 FUNC_2(&VAR_2);

 return 0;
}
