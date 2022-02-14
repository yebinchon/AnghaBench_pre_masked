
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int dead_ahs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*) ;
 unsigned long VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ipoib_dev_priv *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_1;

 while (!FUNC_2(&VAR_2->dead_ahs)) {
  FUNC_0(VAR_2);

  if (FUNC_4(VAR_1, VAR_3 + VAR_0)) {
   FUNC_1(VAR_2, "timing out; will leak address handles\n");
   break;
  }

  FUNC_3(1);
 }
}
