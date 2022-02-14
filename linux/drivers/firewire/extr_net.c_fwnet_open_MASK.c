
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fwnet_device {int lock; } ;


 int FUNC_0 (struct fwnet_device*) ;
 struct fwnet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct fwnet_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct fwnet_device *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0);

 FUNC_4(&VAR_1->lock);
 FUNC_3(VAR_1);
 FUNC_5(&VAR_1->lock);

 return 0;
}
