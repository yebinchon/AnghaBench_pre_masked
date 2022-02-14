
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct net_device*,struct net_device*) ;

__attribute__((used)) static bool
FUNC_5(struct ib_device *VAR_0, u8 VAR_1,
          struct net_device *VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 bool VAR_5;

 if (!VAR_2)
  return 0;

 FUNC_2();
 VAR_5 = ((VAR_4 == VAR_2 && !FUNC_1(VAR_2)) ||
        (FUNC_0(VAR_4) &&
  FUNC_4(VAR_2, VAR_4)));

 FUNC_3();
 return VAR_5;
}
