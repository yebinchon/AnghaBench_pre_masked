
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct net_device*,void*) ;
 struct net_device* FUNC_4 (void*) ;

__attribute__((used)) static bool
FUNC_5(struct ib_device *VAR_1, u8 VAR_2,
        struct net_device *VAR_3, void *VAR_4)
{
 struct net_device *VAR_5;
 bool VAR_6;

 if (!VAR_3)
  return 0;

 FUNC_1();
 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  VAR_5 = VAR_4;

 VAR_6 = ((FUNC_3(VAR_3, VAR_4) &&
        (FUNC_0(VAR_3, VAR_5) &
  VAR_0)) ||
        VAR_5 == VAR_3);

 FUNC_2();
 return VAR_6;
}
