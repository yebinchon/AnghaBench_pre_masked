
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw {int dummy; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct sw*) ;
 struct sw* FUNC_1 (struct net_device*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct sw *VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_4);
 return (VAR_0);
}
