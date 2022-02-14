
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {struct ar8xxx_priv* phy_ptr; } ;
struct ar8xxx_priv {int vlan; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = VAR_1->phy_ptr;
 unsigned char *VAR_4;

 if (FUNC_4(!VAR_3))
  goto error;

 if (!VAR_3->vlan)
  goto send;

 if (FUNC_4(FUNC_2(VAR_2) < 2)) {
  if (FUNC_1(VAR_2, 2, 0, VAR_0) < 0)
   goto error;
 }

 VAR_4 = FUNC_3(VAR_2, 2);
 VAR_4[0] = 0x10;
 VAR_4[1] = 0x80;

send:
 return VAR_2;

error:
 FUNC_0(VAR_2);
 return ((void*)0);
}
