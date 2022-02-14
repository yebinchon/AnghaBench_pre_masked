
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_handle {struct clock_info* clk_priv; } ;
typedef struct scmi_clock_info {int * name; } const scmi_clock_info ;
struct clock_info {struct scmi_clock_info const* clk; } ;



__attribute__((used)) static const struct scmi_clock_info *
FUNC_0(const struct scmi_handle *VAR_0, u32 VAR_1)
{
 struct clock_info *VAR_2 = VAR_0->clk_priv;
 struct scmi_clock_info *VAR_3 = VAR_2->clk + VAR_1;

 if (!VAR_3->name[0])
  return ((void*)0);

 return VAR_3;
}
