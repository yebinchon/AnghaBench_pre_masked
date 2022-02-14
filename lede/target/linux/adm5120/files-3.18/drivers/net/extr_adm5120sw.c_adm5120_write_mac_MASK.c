
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct net_device {unsigned char* dev_addr; } ;
struct adm5120_if_priv {int vlan_no; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct adm5120_if_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct adm5120_if_priv *VAR_11 = FUNC_0(VAR_10);
 unsigned char *VAR_12 = VAR_10->dev_addr;
 u32 VAR_13;

 VAR_13 = VAR_12[2] | (VAR_12[3] << VAR_5) |
  (VAR_12[4] << VAR_6) | (VAR_12[5] << VAR_7);
 FUNC_2(VAR_9, VAR_13);

 VAR_13 = (VAR_12[0] << VAR_0) | (VAR_12[1] << VAR_1) |
  VAR_2 | VAR_4 | (VAR_11->vlan_no<<3);

 FUNC_2(VAR_8, VAR_13);

 while (!(FUNC_1(VAR_8) & VAR_3))
  ;
}
