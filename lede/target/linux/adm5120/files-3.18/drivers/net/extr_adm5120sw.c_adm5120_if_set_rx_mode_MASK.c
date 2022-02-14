
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;
struct adm5120_if_priv {size_t vlan_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct adm5120_if_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8)
{
 struct adm5120_if_priv *VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10;
 u32 VAR_11;

 VAR_10 = VAR_7[VAR_9->vlan_no] & VAR_5;

 VAR_11 = FUNC_2(VAR_6);
 if (VAR_8->flags & VAR_4)

  VAR_11 &= ~(VAR_10 << VAR_2);
 else

  VAR_11 |= (VAR_10 << VAR_2);

 if (VAR_8->flags & VAR_4 || VAR_8->flags & VAR_3 ||
     FUNC_0(VAR_8))

  VAR_11 &= ~(VAR_10 << VAR_1);
 else

  VAR_11 |= (VAR_10 << VAR_1);
 if (~VAR_11 & (VAR_5 << VAR_2))
  VAR_11 |= VAR_0;
 else
  VAR_11 &= ~VAR_0;

 FUNC_3(VAR_6, VAR_11);

}
