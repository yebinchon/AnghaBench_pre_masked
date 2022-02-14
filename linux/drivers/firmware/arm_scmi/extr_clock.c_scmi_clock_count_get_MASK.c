
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_handle {struct clock_info* clk_priv; } ;
struct clock_info {int num_clocks; } ;



__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_0)
{
 struct clock_info *VAR_1 = VAR_0->clk_priv;

 return VAR_1->num_clocks;
}
