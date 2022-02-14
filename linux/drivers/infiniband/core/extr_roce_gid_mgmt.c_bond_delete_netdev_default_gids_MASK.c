
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,struct net_device*,unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 struct net_device* FUNC_5 (struct net_device*) ;
 unsigned long FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_2,
         u8 VAR_3,
         struct net_device *VAR_4,
         struct net_device *VAR_5)
{
 struct net_device *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7;

 if (!VAR_4)
  return;

 if (!VAR_6)
  VAR_6 = VAR_5;

 FUNC_2();

 if (((VAR_4 != VAR_5 &&
       !FUNC_4(VAR_4, VAR_5)) ||
      FUNC_1(VAR_4, VAR_6)
       ==
      VAR_0)) {
  FUNC_3();
  return;
 }

 FUNC_3();

 VAR_7 = FUNC_6(VAR_2, VAR_3);

 FUNC_0(VAR_2, VAR_3, VAR_4,
         VAR_7,
         VAR_1);
}
