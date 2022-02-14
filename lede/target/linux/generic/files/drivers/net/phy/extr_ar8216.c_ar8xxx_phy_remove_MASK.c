
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct ar8xxx_priv* priv; } ;
struct ar8xxx_priv {scalar_t__ use_count; int dev; int list; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct phy_device *VAR_1)
{
 struct ar8xxx_priv *VAR_2 = VAR_1->priv;

 if (FUNC_0(!VAR_2))
  return;

 VAR_1->priv = ((void*)0);

 FUNC_4(&VAR_0);

 if (--VAR_2->use_count > 0) {
  FUNC_5(&VAR_0);
  return;
 }

 FUNC_3(&VAR_2->list);
 FUNC_5(&VAR_0);

 FUNC_6(&VAR_2->dev);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
