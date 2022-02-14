
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7620_gsw {int dummy; } ;
struct fe_priv {TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mt7620_gsw*,int ) ;

int FUNC_2(struct fe_priv *VAR_1)
{
 struct mt7620_gsw *VAR_2 = (struct mt7620_gsw *)VAR_1->soc->swpriv;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_1(VAR_2, FUNC_0(VAR_3)) & 0x1)
   return 1;
 return 0;
}
