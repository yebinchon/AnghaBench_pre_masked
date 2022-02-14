
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4)
{





 if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1 ||
     (VAR_4->type == VAR_2 && VAR_3))
  return 1;

 return 0;
}
