
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_perf_info {struct perf_dom_info* dom_info; } ;
struct scmi_opp {unsigned long perf; unsigned long power; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; } ;
struct perf_dom_info {int opp_count; unsigned long mult_factor; struct scmi_opp* opp; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct scmi_handle *VAR_2, u32 VAR_3,
       unsigned long *VAR_4, unsigned long *VAR_5)
{
 struct scmi_perf_info *VAR_6 = VAR_2->perf_priv;
 struct perf_dom_info *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = -VAR_0;
 struct scmi_opp *VAR_11;

 VAR_7 = VAR_6->dom_info + VAR_3;
 if (!VAR_7)
  return -VAR_1;

 for (VAR_11 = VAR_7->opp, VAR_9 = 0; VAR_9 < VAR_7->opp_count; VAR_9++, VAR_11++) {
  VAR_8 = VAR_11->perf * VAR_7->mult_factor;
  if (VAR_8 < *VAR_4)
   continue;

  *VAR_4 = VAR_8;
  *VAR_5 = VAR_11->power;
  VAR_10 = 0;
  break;
 }

 return VAR_10;
}
