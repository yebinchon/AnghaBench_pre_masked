
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum bonding_slave_state { ____Placeholder_bonding_slave_state } bonding_slave_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static enum bonding_slave_state FUNC_3(struct net_device *VAR_3,
           struct net_device *VAR_4)
{
 if (VAR_4 && FUNC_2(VAR_4)) {
  struct net_device *VAR_5 =
   FUNC_0(FUNC_1(VAR_4));

  if (VAR_5)
   return VAR_3 == VAR_5 ? VAR_0 :
    VAR_1;
 }

 return VAR_2;
}
