
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int qp; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int ,union ib_gid*,int ) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0, struct ib_device *VAR_1,
         union ib_gid *VAR_2, u16 VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->qp, VAR_2, VAR_3);

 return VAR_5;
}
