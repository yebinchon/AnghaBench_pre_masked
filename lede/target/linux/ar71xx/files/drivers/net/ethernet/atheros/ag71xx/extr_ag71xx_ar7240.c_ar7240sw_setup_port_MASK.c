
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mii_bus {int dummy; } ;
struct ar7240sw {int* vlan_id; size_t* pvid; int vlan_tagged; scalar_t__ vlan; struct mii_bus* mii_bus; } ;


 unsigned int VAR_0 ;
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
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct ar7240sw*,unsigned int) ;
 int FUNC_7 (struct ar7240sw*,unsigned int) ;
 int FUNC_8 (struct mii_bus*,int ,int) ;
 scalar_t__ FUNC_9 (struct ar7240sw*) ;

__attribute__((used)) static void FUNC_10(struct ar7240sw *VAR_22, unsigned VAR_23, u8 VAR_24)
{
 struct mii_bus *VAR_25 = VAR_22->mii_bus;
 u32 VAR_26;
 u32 VAR_27, VAR_28;

 VAR_26 = VAR_3 | VAR_1 |
  VAR_2;

 if (VAR_23 == VAR_0) {
  FUNC_8(VAR_25, FUNC_1(VAR_23),
       VAR_12 |
       VAR_13 |
       VAR_10 |
       VAR_14 |
       VAR_11 |
       VAR_8);
 } else {
  FUNC_8(VAR_25, FUNC_1(VAR_23),
       VAR_9);
 }


 if (VAR_22->vlan) {
  VAR_27 = VAR_22->vlan_id[VAR_22->pvid[VAR_23]];
  VAR_28 = VAR_18;
 } else {
  VAR_27 = VAR_23;
  VAR_28 = VAR_16;
 }

 if (VAR_22->vlan) {
  if (VAR_22->vlan_tagged & FUNC_5(VAR_23))
   VAR_26 |= VAR_4 <<
    VAR_6;
  else
   VAR_26 |= VAR_7 <<
    VAR_6;
 } else {
  VAR_26 |= VAR_5 <<
   VAR_6;
 }

 if (!VAR_24) {
  if (VAR_23 == VAR_0)
   VAR_24 = FUNC_7(VAR_22, VAR_0);
  else
   VAR_24 = FUNC_6(VAR_22, VAR_0);
 }




 VAR_24 &= FUNC_7(VAR_22, VAR_23);

 FUNC_8(VAR_25, FUNC_0(VAR_23), VAR_26);
 if (FUNC_9(VAR_22)) {
  u32 VAR_29, VAR_30;

  VAR_29 = (VAR_27 << VAR_19);
  VAR_30 = (VAR_24 << VAR_21) |
   (VAR_28 << VAR_20);
  FUNC_8(VAR_25, FUNC_3(VAR_23), VAR_29);
  FUNC_8(VAR_25, FUNC_4(VAR_23), VAR_30);
 } else {
  u32 VAR_31;

  VAR_31 = VAR_27 | (VAR_28 << VAR_17) |
         (VAR_24 << VAR_15);

  FUNC_8(VAR_25, FUNC_2(VAR_23), VAR_31);
 }
}
