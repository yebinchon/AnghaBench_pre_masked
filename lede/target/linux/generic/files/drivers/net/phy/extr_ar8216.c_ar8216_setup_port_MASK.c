
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int,int) ;
 scalar_t__ FUNC_3 (struct ar8xxx_priv*) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_21, int VAR_22, u32 VAR_23)
{
 u32 VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27;

 if (VAR_21->vlan) {
  VAR_27 = VAR_21->vlan_id[VAR_21->pvid[VAR_22]];
  if (VAR_21->vlan_tagged & (1 << VAR_22))
   VAR_25 = VAR_2;
  else
   VAR_25 = VAR_4;
  VAR_26 = VAR_1;
 } else {
  VAR_27 = VAR_22;
  VAR_25 = VAR_3;
  VAR_26 = VAR_0;
 }

 if (FUNC_3(VAR_21) && VAR_21->vlan && VAR_22 == VAR_5)
  VAR_24 = VAR_6;
 else
  VAR_24 = 0;

 FUNC_2(VAR_21, FUNC_0(VAR_22),
     VAR_7 | VAR_12 |
     VAR_9 | VAR_10 |
     VAR_6 | VAR_8,
     VAR_7 | VAR_24 |
     (VAR_25 << VAR_13) |
     (VAR_14 << VAR_11));

 FUNC_2(VAR_21, FUNC_1(VAR_22),
     VAR_17 | VAR_19 |
     VAR_15,
     (VAR_23 << VAR_18) |
     (VAR_26 << VAR_20) |
     (VAR_27 << VAR_16));
}
