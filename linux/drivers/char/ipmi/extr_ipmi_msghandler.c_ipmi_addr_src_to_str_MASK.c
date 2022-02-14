
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ipmi_addr_src { ____Placeholder_ipmi_addr_src } ipmi_addr_src ;


 int VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(enum ipmi_addr_src VAR_2)
{
 if (VAR_2 >= VAR_0)
  VAR_2 = 0;
 return VAR_1[VAR_2];
}
