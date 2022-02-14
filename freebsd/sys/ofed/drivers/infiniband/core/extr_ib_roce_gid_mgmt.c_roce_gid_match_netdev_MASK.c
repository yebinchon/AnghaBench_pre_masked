
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct ib_device *VAR_0, u8 VAR_1,
    struct net_device *VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *)VAR_3;
 if (VAR_2 == ((void*)0))
  return (0);
 return (VAR_4 == VAR_2);
}
