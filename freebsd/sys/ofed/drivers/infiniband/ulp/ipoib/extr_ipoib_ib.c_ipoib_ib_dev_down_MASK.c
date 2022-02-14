
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int pkey_poll_task; int flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*) ;
 int FUNC_5 (struct ipoib_dev_priv*) ;
 int FUNC_6 (struct ipoib_dev_priv*) ;
 int FUNC_7 (struct ipoib_dev_priv*,int) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct ipoib_dev_priv *VAR_6, int VAR_7)
{

 FUNC_4(VAR_6, "downing ib_dev\n");

 FUNC_1(VAR_0, &VAR_6->flags);
 FUNC_3(VAR_6->dev, VAR_3);


 if (!FUNC_11(VAR_1, &VAR_6->flags)) {
  FUNC_8(&VAR_5);
  FUNC_10(VAR_2, &VAR_6->flags);
  FUNC_0(&VAR_6->pkey_poll_task);
  FUNC_9(&VAR_5);
  if (VAR_7)
   FUNC_2(VAR_4);
 }

 FUNC_7(VAR_6, VAR_7);
 FUNC_6(VAR_6);

 FUNC_5(VAR_6);

 return 0;
}
