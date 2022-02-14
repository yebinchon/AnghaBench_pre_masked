
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7620_gsw {int dummy; } ;
struct mii_bus {struct fe_priv* priv; } ;
struct fe_priv {TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 int FUNC_0 (struct mt7620_gsw*,int,int) ;

int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct fe_priv *VAR_3 = VAR_0->priv;
 struct mt7620_gsw *VAR_4 = (struct mt7620_gsw *)VAR_3->soc->swpriv;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
