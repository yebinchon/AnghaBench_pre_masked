
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7620_gsw {scalar_t__ port4; } ;
struct fe_priv {int* link; TYPE_1__* soc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ swpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fe_priv*) ;
 int FUNC_2 (struct fe_priv*,int,int,int,int) ;
 int FUNC_3 (struct mt7620_gsw*,int ) ;
 int FUNC_4 (struct mt7620_gsw*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct fe_priv *VAR_6 = (struct fe_priv *)VAR_5;
 struct mt7620_gsw *VAR_7 = (struct mt7620_gsw *)VAR_6->soc->swpriv;
 u32 VAR_8;
 int VAR_9, VAR_10 = (VAR_7->port4 == VAR_2) ? (4) : (3);

 VAR_8 = FUNC_3(VAR_7, VAR_0);
 if (VAR_8 & VAR_3)
  for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++) {
   u32 VAR_11 = FUNC_3(VAR_7, FUNC_0(VAR_9));
   int VAR_12 = VAR_11 & 0x1;

   if (VAR_12 != VAR_6->link[VAR_9])
    FUNC_2(VAR_6, VAR_9, VAR_12,
       (VAR_11 >> 2) & 3,
       (VAR_11 & 0x2));

   VAR_6->link[VAR_9] = VAR_12;
  }
 FUNC_1(VAR_6);
 FUNC_4(VAR_7, VAR_8, VAR_0);

 return VAR_1;
}
