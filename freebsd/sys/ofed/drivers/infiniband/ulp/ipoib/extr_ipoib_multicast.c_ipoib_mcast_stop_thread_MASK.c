
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int mcast_task; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ipoib_dev_priv *VAR_3, int VAR_4)
{

 FUNC_3(VAR_3, "stopping multicast thread\n");

 FUNC_4(&VAR_2);
 FUNC_1(VAR_0, &VAR_3->flags);
 FUNC_0(&VAR_3->mcast_task);
 FUNC_5(&VAR_2);

 if (VAR_4)
  FUNC_2(VAR_1);

 return 0;
}
