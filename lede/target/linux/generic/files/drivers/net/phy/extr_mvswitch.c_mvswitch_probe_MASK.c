
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct mvswitch_priv* priv; } ;
struct mvswitch_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mvswitch_priv* FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct phy_device *VAR_2)
{
 struct mvswitch_priv *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct mvswitch_priv), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_2->priv = VAR_3;

 return 0;
}
