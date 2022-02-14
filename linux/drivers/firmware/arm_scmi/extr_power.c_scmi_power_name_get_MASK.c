
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_power_info {struct power_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_power_info* power_priv; } ;
struct power_dom_info {char* name; } ;



__attribute__((used)) static char *FUNC_0(const struct scmi_handle *VAR_0, u32 VAR_1)
{
 struct scmi_power_info *VAR_2 = VAR_0->power_priv;
 struct power_dom_info *VAR_3 = VAR_2->dom_info + VAR_1;

 return VAR_3->name;
}
