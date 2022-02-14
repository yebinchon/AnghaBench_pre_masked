
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct switch_dev {int ports; } ;
struct ar8xxx_priv {int* vlan_table; int reg_mutex; int * vlan_id; int init; struct ar8xxx_chip* chip; } ;
struct ar8xxx_chip {scalar_t__ reg_arl_ctrl; int (* set_mirror_regs ) (struct ar8xxx_priv*) ;int (* setup_port ) (struct ar8xxx_priv*,int,int) ;int (* vtu_load_vlan ) (struct ar8xxx_priv*,int ,int) ;int (* vtu_flush ) (struct ar8xxx_priv*) ;} ;
typedef int portmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar8xxx_priv*,scalar_t__) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ar8xxx_priv*) ;
 int FUNC_5 (struct ar8xxx_priv*,int ,int) ;
 int FUNC_6 (struct ar8xxx_priv*,int,int) ;
 int FUNC_7 (struct ar8xxx_priv*) ;
 struct ar8xxx_priv* FUNC_8 (struct switch_dev*) ;

int
FUNC_9(struct switch_dev *VAR_3)
{
 struct ar8xxx_priv *VAR_4 = FUNC_8(VAR_3);
 const struct ar8xxx_chip *VAR_5 = VAR_4->chip;
 u8 VAR_6[VAR_1];
 int VAR_7, VAR_8;

 FUNC_2(&VAR_4->reg_mutex);

 VAR_4->chip->vtu_flush(VAR_4);

 FUNC_1(VAR_6, 0, sizeof(VAR_6));
 if (!VAR_4->init) {


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   u8 VAR_9 = VAR_4->vlan_table[VAR_8];

   if (!VAR_9)
    continue;

   for (VAR_7 = 0; VAR_7 < VAR_3->ports; VAR_7++) {
    u8 VAR_10 = (1 << VAR_7);
    if (VAR_9 & VAR_10)
     VAR_6[VAR_7] |= VAR_9 & ~VAR_10;
   }

   VAR_5->vtu_load_vlan(VAR_4, VAR_4->vlan_id[VAR_8],
         VAR_4->vlan_table[VAR_8]);
  }
 } else {


  for (VAR_7 = 0; VAR_7 < VAR_3->ports; VAR_7++) {
   if (VAR_7 == VAR_0)
    continue;

   VAR_6[VAR_7] = 1 << VAR_0;
   VAR_6[VAR_0] |= (1 << VAR_7);
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_3->ports; VAR_7++) {
  VAR_5->setup_port(VAR_4, VAR_7, VAR_6[VAR_7]);
 }

 VAR_5->set_mirror_regs(VAR_4);


 if (VAR_5->reg_arl_ctrl)
  FUNC_0(VAR_4, VAR_5->reg_arl_ctrl);

 FUNC_3(&VAR_4->reg_mutex);
 return 0;
}
