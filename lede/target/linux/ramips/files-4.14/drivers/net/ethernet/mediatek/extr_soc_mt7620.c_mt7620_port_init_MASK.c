
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mt7620_gsw {scalar_t__ port4; int autopoll; } ;
struct fe_priv {int* link; TYPE_2__* phy; int mii_bus; int dev; TYPE_1__* soc; } ;
struct device_node {int name; } ;
typedef int __be32 ;
struct TYPE_4__ {int* speed; int* duplex; scalar_t__* phy_node; int ** phy_fixed; } ;
struct TYPE_3__ {scalar_t__ swpriv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;



 int VAR_12 ;
 int FUNC_3 (int const) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct fe_priv*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (struct mt7620_gsw*) ;
 int FUNC_10 (struct mt7620_gsw*,int,int ) ;
 int FUNC_11 (struct device_node*) ;
 void* FUNC_12 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int ) ;
 int FUNC_14 (char*,int ,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int ) ;

__attribute__((used)) static void FUNC_17(struct fe_priv *VAR_13, struct device_node *VAR_14)
{
 struct mt7620_gsw *VAR_15 = (struct mt7620_gsw *)VAR_13->soc->swpriv;
 const __be32 *VAR_16 = FUNC_12(VAR_14, "reg", ((void*)0));
 int VAR_17, VAR_18, VAR_19;
 int VAR_20 = 12;
 u32 VAR_21, VAR_22 = 0;
 int VAR_23 = (VAR_15->port4 == VAR_11) ? (5) : (4);

 if (!VAR_16 || (FUNC_3(*VAR_16) < VAR_23) || (FUNC_3(*VAR_16) > 5)) {
  if (VAR_16)
   FUNC_14("%s: invalid port id %d\n", VAR_14->name,
          FUNC_3(*VAR_16));
  else
   FUNC_14("%s: invalid port id\n", VAR_14->name);
  return;
 }

 VAR_19 = FUNC_3(*VAR_16);

 if (VAR_19 == 4)
  VAR_20 = 14;

 VAR_13->phy->phy_fixed[VAR_19] = FUNC_12(VAR_14, "mediatek,fixed-link",
         &VAR_18);
 if (VAR_13->phy->phy_fixed[VAR_19] &&
     (VAR_18 != (4 * sizeof(*VAR_13->phy->phy_fixed[VAR_19])))) {
  FUNC_14("%s: invalid fixed link property\n", VAR_14->name);
  VAR_13->phy->phy_fixed[VAR_19] = ((void*)0);
  return;
 }

 VAR_17 = FUNC_11(VAR_14);
 switch (VAR_17) {
 case 132:
  VAR_22 = 0;
  break;
 case 133:
  VAR_22 = 1;
  break;
 case 131:
  VAR_22 = 2;
  break;
 default:
  FUNC_5(VAR_13->dev, "port %d - invalid phy mode\n", VAR_19);
  return;
 }

 VAR_13->phy->phy_node[VAR_19] = FUNC_13(VAR_14, "phy-handle", 0);
 if (!VAR_13->phy->phy_node[VAR_19] && !VAR_13->phy->phy_fixed[VAR_19])
  return;

 VAR_21 = FUNC_15(VAR_12);
 VAR_21 &= ~(3 << VAR_20);
 VAR_21 |= VAR_22 << VAR_20;
 FUNC_16(VAR_21, VAR_12);

 if (VAR_13->phy->phy_fixed[VAR_19]) {
  const __be32 *VAR_24 = VAR_13->phy->phy_fixed[VAR_19];
  int VAR_25, VAR_26;
  u32 VAR_27 = 0;

  VAR_13->phy->speed[VAR_19] = FUNC_4(VAR_24++);
  VAR_25 = FUNC_4(VAR_24++);
  VAR_26 = FUNC_4(VAR_24++);
  VAR_13->phy->duplex[VAR_19] = FUNC_4(VAR_24++);
  VAR_13->link[VAR_19] = 1;

  switch (VAR_13->phy->speed[VAR_19]) {
  case 130:
   VAR_27 = 0;
   break;
  case 129:
   VAR_27 = 1;
   break;
  case 128:
   VAR_27 = 2;
   break;
  default:
   FUNC_5(VAR_13->dev, "invalid link speed: %d\n",
    VAR_13->phy->speed[VAR_19]);
   VAR_13->phy->phy_fixed[VAR_19] = 0;
   return;
  }
  VAR_27 = FUNC_2(VAR_27);
  VAR_27 |= VAR_5 | VAR_1 | VAR_0 | VAR_7 |
   VAR_9 | VAR_3 | VAR_6 | VAR_4;
  if (VAR_25)
   VAR_27 |= VAR_10;
  if (VAR_26)
   VAR_27 |= VAR_8;
  if (VAR_13->phy->duplex[VAR_19])
   VAR_27 |= VAR_2;
  FUNC_10(VAR_15, VAR_27, FUNC_1(VAR_19));
  FUNC_6(VAR_13->dev, "using fixed link parameters\n");
  return;
 }

 if (VAR_13->phy->phy_node[VAR_19] && FUNC_8(VAR_13->mii_bus, VAR_19)) {
  u32 VAR_28 = VAR_1 | VAR_0 | VAR_7 |
   VAR_9 | VAR_6 | VAR_4;

  FUNC_10(VAR_15, VAR_28, FUNC_1(VAR_19));
  FUNC_7(VAR_13, VAR_13->phy->phy_node[VAR_19]);
  VAR_15->autopoll |= FUNC_0(VAR_19);
  FUNC_9(VAR_15);
  return;
 }
}
