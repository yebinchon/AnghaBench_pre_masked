
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_reset_info {int num_domains; } ;
struct scmi_handle {struct scmi_reset_info* reset_priv; } ;



__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_0)
{
 struct scmi_reset_info *VAR_1 = VAR_0->reset_priv;

 return VAR_1->num_domains;
}
