
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_path {scalar_t__ ah; int queue; } ;
struct ipoib_dev_priv {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct ipoib_path*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ipoib_path*) ;

void
FUNC_5(struct ipoib_dev_priv *VAR_0, struct ipoib_path *VAR_1)
{

 FUNC_0(&VAR_1->queue);

 if (VAR_1->ah)
  FUNC_3(VAR_1->ah);
 if (FUNC_2(VAR_1))
  FUNC_1(FUNC_2(VAR_1));

 FUNC_4(VAR_1);
}
