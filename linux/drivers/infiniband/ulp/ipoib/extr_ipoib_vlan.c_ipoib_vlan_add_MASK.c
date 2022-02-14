
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ reg_state; } ;
struct ipoib_dev_priv {int port; int ca; TYPE_1__* dev; } ;
typedef int intf_name ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ipoib_dev_priv*,struct ipoib_dev_priv*,unsigned short,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (int ,int ,char*) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,char*,char*,unsigned short) ;

int FUNC_11(struct net_device *VAR_6, unsigned short VAR_7)
{
 struct ipoib_dev_priv *VAR_8, *VAR_9;
 char VAR_10[VAR_2];
 struct net_device *VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_0))
  return -VAR_1;

 if (!FUNC_8())
  return FUNC_7();

 if (VAR_6->reg_state != VAR_4) {
  FUNC_9();
  return -VAR_1;
 }

 VAR_8 = FUNC_6(VAR_6);

 FUNC_10(VAR_10, sizeof(VAR_10), "%s.%04x",
   VAR_8->dev->name, VAR_7);

 VAR_11 = FUNC_5(VAR_8->ca, VAR_8->port, VAR_10);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto out;
 }
 VAR_9 = FUNC_6(VAR_11);

 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_7, VAR_3);

 if (VAR_12 && VAR_11->reg_state == VAR_5)
  FUNC_4(VAR_11);

out:
 FUNC_9();

 return VAR_12;
}
