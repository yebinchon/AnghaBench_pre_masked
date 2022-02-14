
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(struct ib_device *VAR_1, u8 VAR_2,
      struct net_device *VAR_3, void *VAR_4)
{
 struct net_device *VAR_5;
 bool VAR_6;

 if (!VAR_3)
  return 0;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_0(VAR_3, VAR_5) ==
  VAR_0;
 FUNC_3();

 return VAR_6;
}
