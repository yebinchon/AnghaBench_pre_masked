
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7620_gsw {int * base; } ;
struct fe_priv {int dev; int * mii_bus; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct fe_priv *VAR_0)
{
 struct mt7620_gsw *VAR_1 = (struct mt7620_gsw *) VAR_0->soc->swpriv;


 if (VAR_0->mii_bus && FUNC_0(VAR_0->mii_bus, 0x1f)) {
  FUNC_1(VAR_0->dev, VAR_1->base, ((void*)0), 0);
  FUNC_1(VAR_0->dev, ((void*)0), VAR_0->mii_bus, 1);
 } else {
  FUNC_1(VAR_0->dev, VAR_1->base, ((void*)0), 1);
 }

 return 0;
}
