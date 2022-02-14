
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr_storage {scalar_t__ __data; } ;
struct net_device {int priv_flags; } ;
struct ipoib_dev_priv {int flush_light; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct sockaddr_storage*) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ipoib_dev_priv*,union ib_gid*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, void *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_1(VAR_3);
 struct sockaddr_storage *VAR_6 = VAR_4;
 int VAR_7;

 if (!(VAR_3->priv_flags & VAR_1) && FUNC_2(VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_5, (union ib_gid *)(VAR_6->__data + 4));

 FUNC_3(VAR_2, &VAR_5->flush_light);

 return 0;
}
