
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_system_interface_addr {int dummy; } ;
struct ipmi_lan_addr {int dummy; } ;
struct ipmi_ipmb_addr {int dummy; } ;
struct ipmi_addr {scalar_t__ addr_type; scalar_t__ channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ipmi_addr*) ;
 scalar_t__ FUNC_1 (struct ipmi_addr*) ;
 scalar_t__ FUNC_2 (struct ipmi_addr*) ;

int FUNC_3(struct ipmi_addr *VAR_4, int VAR_5)
{
 if (VAR_5 < sizeof(struct ipmi_system_interface_addr))
  return -VAR_0;

 if (VAR_4->addr_type == VAR_3) {
  if (VAR_4->channel != VAR_1)
   return -VAR_0;
  return 0;
 }

 if ((VAR_4->channel == VAR_1)
     || (VAR_4->channel >= VAR_2)
     || (VAR_4->channel < 0))
  return -VAR_0;

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4)) {
  if (VAR_5 < sizeof(struct ipmi_ipmb_addr))
   return -VAR_0;
  return 0;
 }

 if (FUNC_2(VAR_4)) {
  if (VAR_5 < sizeof(struct ipmi_lan_addr))
   return -VAR_0;
  return 0;
 }

 return -VAR_0;
}
