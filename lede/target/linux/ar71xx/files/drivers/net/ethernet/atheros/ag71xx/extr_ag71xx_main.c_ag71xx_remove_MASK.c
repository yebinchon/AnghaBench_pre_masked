
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int irq; } ;
struct ag71xx {int mac_base; } ;


 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 struct ag71xx* FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);

 if (VAR_1) {
  struct ag71xx *VAR_2 = FUNC_5(VAR_1);

  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
  FUNC_8(VAR_1);
  FUNC_2(VAR_1->irq, VAR_1);
  FUNC_3(VAR_2->mac_base);
  FUNC_4(VAR_1);
  FUNC_7(VAR_0, ((void*)0));
 }

 return 0;
}
