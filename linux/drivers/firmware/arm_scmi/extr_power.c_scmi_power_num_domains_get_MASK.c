
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_power_info {int num_domains; } ;
struct scmi_handle {struct scmi_power_info* power_priv; } ;



__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_0)
{
 struct scmi_power_info *VAR_1 = VAR_0->power_priv;

 return VAR_1->num_domains;
}
