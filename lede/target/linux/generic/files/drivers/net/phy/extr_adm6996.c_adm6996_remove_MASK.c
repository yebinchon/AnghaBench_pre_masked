
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct adm6996_priv {scalar_t__ model; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct adm6996_priv* FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_2)
{
 struct adm6996_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 && (VAR_3->model == VAR_1 || VAR_3->model == VAR_0))
  FUNC_1(&VAR_3->dev);
}
