
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7620_gsw {int dummy; } ;
struct fe_priv {unsigned int* link; int netdev; TYPE_1__* soc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mt7620_gsw*,int) ;
 int FUNC_2 (struct mt7620_gsw*,int,int) ;
 int FUNC_3 (struct fe_priv*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct fe_priv *VAR_3 = (struct fe_priv *)VAR_2;
 struct mt7620_gsw *VAR_4 = (struct mt7620_gsw *)VAR_3->soc->swpriv;
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4, 0x700c);
 FUNC_2(VAR_4, 0x700c, VAR_5);

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  if (VAR_5 & FUNC_0(VAR_6)) {
   unsigned int VAR_7;

   VAR_7 = FUNC_1(VAR_4,
            0x3008 + (VAR_6 * 0x100)) & 0x1;

   if (VAR_7 != VAR_3->link[VAR_6]) {
    VAR_3->link[VAR_6] = VAR_7;
    if (VAR_7)
     FUNC_4(VAR_3->netdev,
          "port %d link up\n", VAR_6);
    else
     FUNC_4(VAR_3->netdev,
          "port %d link down\n", VAR_6);
   }
  }

 FUNC_3(VAR_3);

 return VAR_0;
}
