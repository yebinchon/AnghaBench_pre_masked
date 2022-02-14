
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_walk_data {struct net_device* result; int addr; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct ipoib_walk_data *VAR_2 = VAR_1;
 int VAR_3 = 0;

 if (FUNC_1(VAR_2->addr, VAR_0)) {
  FUNC_0(VAR_0);
  VAR_2->result = VAR_0;
  VAR_3 = 1;
 }

 return VAR_3;
}
