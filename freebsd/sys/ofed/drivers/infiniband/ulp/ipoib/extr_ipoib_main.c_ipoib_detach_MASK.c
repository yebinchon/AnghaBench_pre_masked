
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int gone; struct ifnet* dev; int unit; int flags; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int *) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ipoib_dev_priv*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct ipoib_dev_priv *VAR_3)
{
 struct ifnet *VAR_4;

 VAR_4 = VAR_3->dev;
 if (!FUNC_6(VAR_0, &VAR_3->flags)) {
  VAR_3->gone = 1;
  FUNC_1(VAR_4);
  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
  FUNC_3(VAR_2, VAR_3->unit);
 } else
  FUNC_0(VAR_3->dev, ((void*)0));

 FUNC_2(VAR_3, VAR_1);
}
