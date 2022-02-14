
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_system_interface_addr {int dummy; } ;
struct ipmi_lan_addr {int dummy; } ;
struct ipmi_ipmb_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_0(int VAR_4)
{
 if (VAR_4 == VAR_3)
  return sizeof(struct ipmi_system_interface_addr);

 if ((VAR_4 == VAR_0)
   || (VAR_4 == VAR_1))
  return sizeof(struct ipmi_ipmb_addr);

 if (VAR_4 == VAR_2)
  return sizeof(struct ipmi_lan_addr);

 return 0;
}
