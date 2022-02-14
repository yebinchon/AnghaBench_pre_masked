
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ type; int name; } ;
struct net {int dummy; } ;
struct ipoib_dev_priv {int port; int ca; int pkey; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_dev_priv*,int ,int ) ;
 int FUNC_2 (struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (int ,int ,int ,struct net_device*) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipoib_dev_priv*,char*) ;
 int FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_7, struct net_device *VAR_8,
    struct nlattr *VAR_9[], struct nlattr *VAR_10[],
    struct netlink_ext_ack *VAR_11)
{
 struct net_device *VAR_12;
 struct ipoib_dev_priv *VAR_13;
 u16 VAR_14;
 int VAR_15;

 if (!VAR_9[VAR_4])
  return -VAR_1;

 VAR_12 = FUNC_0(VAR_7, FUNC_8(VAR_9[VAR_4]));
 if (!VAR_12 || VAR_12->type != VAR_0)
  return -VAR_2;

 VAR_13 = FUNC_5(VAR_12);

 if (FUNC_9(VAR_5, &VAR_13->flags)) {
  FUNC_6(VAR_13, "child creation disallowed for child devices\n");
  return -VAR_1;
 }

 if (!VAR_10 || !VAR_10[VAR_3]) {
  FUNC_3(VAR_13, "no pkey specified, using parent pkey\n");
  VAR_14 = VAR_13->pkey;
 } else
  VAR_14 = FUNC_7(VAR_10[VAR_3]);

 VAR_15 = FUNC_4(VAR_13->ca, VAR_13->port, VAR_8->name, VAR_8);
 if (VAR_15) {
  FUNC_6(VAR_13, "failed to initialize pkey device\n");
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_13, FUNC_5(VAR_8),
          VAR_14, VAR_6);
 if (VAR_15)
  return VAR_15;

 if (VAR_10) {
  VAR_15 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_15) {
   FUNC_10(VAR_8);
   return VAR_15;
  }
 }

 return 0;
}
