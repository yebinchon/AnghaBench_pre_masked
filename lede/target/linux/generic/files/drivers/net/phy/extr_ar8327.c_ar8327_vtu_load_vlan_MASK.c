
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ar8xxx_priv {scalar_t__ vlan; scalar_t__ vlan_tagged; scalar_t__* vlan_id; size_t* pvid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ar8xxx_priv*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ar8xxx_priv *VAR_9, u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_12 = VAR_7 | (VAR_10 << VAR_8);
 VAR_13 = VAR_6 | VAR_5;
 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  u32 VAR_15;

  if ((VAR_11 & FUNC_1(VAR_14)) == 0)
   VAR_15 = VAR_2;
  else if (VAR_9->vlan == 0)
   VAR_15 = VAR_1;
  else if ((VAR_9->vlan_tagged & FUNC_1(VAR_14)) || (VAR_9->vlan_id[VAR_9->pvid[VAR_14]] != VAR_10))
   VAR_15 = VAR_3;
  else
   VAR_15 = VAR_4;

  VAR_13 |= VAR_15 << FUNC_0(VAR_14);
 }
 FUNC_2(VAR_9, VAR_12, VAR_13);
}
