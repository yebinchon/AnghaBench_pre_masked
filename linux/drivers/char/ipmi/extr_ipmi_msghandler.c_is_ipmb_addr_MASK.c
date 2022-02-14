
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_addr {scalar_t__ addr_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ipmi_addr *VAR_1)
{
 return VAR_1->addr_type == VAR_0;
}
