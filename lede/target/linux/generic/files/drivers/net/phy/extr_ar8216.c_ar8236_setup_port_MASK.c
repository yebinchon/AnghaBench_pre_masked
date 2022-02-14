
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int* vlan_id; size_t* pvid; int vlan_tagged; scalar_t__ vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ar8xxx_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_20, int VAR_21, u32 VAR_22)
{
 u32 VAR_23, VAR_24;
 u32 VAR_25;

 if (VAR_20->vlan) {
  VAR_25 = VAR_20->vlan_id[VAR_20->pvid[VAR_21]];
  if (VAR_20->vlan_tagged & (1 << VAR_21))
   VAR_23 = VAR_2;
  else
   VAR_23 = VAR_4;
  VAR_24 = VAR_1;
 } else {
  VAR_25 = VAR_21;
  VAR_23 = VAR_3;
  VAR_24 = VAR_0;
 }

 FUNC_3(VAR_20, FUNC_0(VAR_21),
     VAR_6 | VAR_11 |
     VAR_8 | VAR_9 |
     VAR_5 | VAR_7,
     VAR_6 |
     (VAR_23 << VAR_12) |
     (VAR_13 << VAR_10));

 FUNC_3(VAR_20, FUNC_1(VAR_21),
     VAR_18,
     (VAR_25 << VAR_19));

 FUNC_3(VAR_20, FUNC_2(VAR_21),
     VAR_16 |
     VAR_14,
     (VAR_24 << VAR_17) |
     (VAR_22 << VAR_15));
}
