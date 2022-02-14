
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct net_device {struct ar8xxx_priv* phy_ptr; } ;
struct ar8xxx_priv {int vlan_tagged; int* vlan_id; size_t* pvid; int vlan; } ;


 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 struct ar8xxx_priv *VAR_2;
 unsigned char *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = VAR_0->phy_ptr;
 if (!VAR_2)
  return;


 if (!VAR_2->vlan)
  return;


 VAR_3 = VAR_1->data;
 FUNC_0(VAR_1, 2);


 if ((VAR_3[12 + 2] != 0x81) || (VAR_3[13 + 2] != 0x00))
  return;

 VAR_4 = VAR_3[0] & 0x7;


 if (VAR_2->vlan_tagged & (1 << VAR_4))
  return;


 VAR_5 = VAR_2->vlan_id[VAR_2->pvid[VAR_4]];

 VAR_3[14 + 2] &= 0xf0;
 VAR_3[14 + 2] |= VAR_5 >> 8;
 VAR_3[15 + 2] = VAR_5 & 0xff;
}
