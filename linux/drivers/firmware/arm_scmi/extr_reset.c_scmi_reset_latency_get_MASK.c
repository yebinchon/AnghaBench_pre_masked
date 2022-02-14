
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_reset_info {struct reset_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_reset_info* reset_priv; } ;
struct reset_dom_info {int latency_us; } ;



__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_0, u32 VAR_1)
{
 struct scmi_reset_info *VAR_2 = VAR_0->reset_priv;
 struct reset_dom_info *VAR_3 = VAR_2->dom_info + VAR_1;

 return VAR_3->latency_us;
}
