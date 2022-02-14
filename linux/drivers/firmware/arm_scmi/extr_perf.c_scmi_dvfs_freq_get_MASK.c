
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_perf_info {struct perf_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; } ;
struct perf_dom_info {int mult_factor; } ;


 int FUNC_0 (struct scmi_handle const*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(const struct scmi_handle *VAR_0, u32 VAR_1,
         unsigned long *VAR_2, bool VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct scmi_perf_info *VAR_6 = VAR_0->perf_priv;
 struct perf_dom_info *VAR_7 = VAR_6->dom_info + VAR_1;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_3);
 if (!VAR_4)
  *VAR_2 = VAR_5 * VAR_7->mult_factor;

 return VAR_4;
}
