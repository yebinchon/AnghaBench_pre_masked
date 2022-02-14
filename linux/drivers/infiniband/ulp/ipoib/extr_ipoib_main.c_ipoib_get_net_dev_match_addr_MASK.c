
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_walk_data {struct net_device* result; struct sockaddr const* addr; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct sockaddr const*,struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*,int ,struct ipoib_walk_data*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static struct net_device *FUNC_5(
  const struct sockaddr *VAR_1, struct net_device *VAR_2)
{
 struct ipoib_walk_data VAR_3 = {
  .addr = VAR_1,
 };

 FUNC_3();
 if (FUNC_1(VAR_1, VAR_2)) {
  FUNC_0(VAR_2);
  VAR_3.result = VAR_2;
  goto out;
 }

 FUNC_2(VAR_2, VAR_0, &VAR_3);
out:
 FUNC_4();
 return VAR_3.result;
}
