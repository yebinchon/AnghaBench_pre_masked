
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 int FUNC_1 (struct ipoib_dev_priv*) ;
 int FUNC_2 (struct ipoib_dev_priv*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct ipoib_dev_priv *VAR_2)
{

 FUNC_2(VAR_2);

 if (!FUNC_4(VAR_1, &VAR_2->flags)) {
  FUNC_0(VAR_2, "PKEY is not assigned.\n");
  return 0;
 }

 FUNC_3(VAR_0, &VAR_2->flags);

 return FUNC_1(VAR_2);
}
