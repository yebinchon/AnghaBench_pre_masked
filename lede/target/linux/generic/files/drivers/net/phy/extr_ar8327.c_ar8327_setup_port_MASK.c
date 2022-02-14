
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int* vlan_id; size_t* pvid; int* port_vlan_prio; scalar_t__ vlan; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ar8xxx_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_15, int VAR_16, u32 VAR_17)
{
 u32 VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21 = VAR_15->vlan_id[VAR_15->pvid[VAR_16]];

 if (VAR_15->vlan) {
  VAR_19 = VAR_11;
  VAR_20 = VAR_1;
 } else {
  VAR_19 = VAR_12;
  VAR_20 = VAR_0;
 }

 VAR_18 = VAR_21 << VAR_9;
 VAR_18 |= VAR_21 << VAR_7;
 if (VAR_15->vlan && VAR_15->port_vlan_prio[VAR_16]) {
  u32 VAR_22 = VAR_15->port_vlan_prio[VAR_16];

  VAR_18 |= VAR_22 << VAR_8;
  VAR_18 |= VAR_22 << VAR_6;
 }
 FUNC_3(VAR_15, FUNC_1(VAR_16), VAR_18);

 VAR_18 = VAR_13;
 VAR_18 |= VAR_19 << VAR_10;
 if (VAR_15->vlan && VAR_15->port_vlan_prio[VAR_16])
  VAR_18 |= VAR_14;

 FUNC_3(VAR_15, FUNC_2(VAR_16), VAR_18);

 VAR_18 = VAR_17;
 VAR_18 |= VAR_4;
 VAR_18 |= VAR_20 << VAR_3;
 VAR_18 |= VAR_2 << VAR_5;
 FUNC_3(VAR_15, FUNC_0(VAR_16), VAR_18);
}
