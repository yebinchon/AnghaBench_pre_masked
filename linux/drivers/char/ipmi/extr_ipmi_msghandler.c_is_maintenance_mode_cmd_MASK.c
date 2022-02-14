
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {scalar_t__ netfn; scalar_t__ cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct kernel_ipmi_msg *VAR_4)
{
 return (((VAR_4->netfn == VAR_1)
   && ((VAR_4->cmd == VAR_0)
       || (VAR_4->cmd == VAR_3)))
  || (VAR_4->netfn == VAR_2));
}
