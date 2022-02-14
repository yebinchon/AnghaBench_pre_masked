
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scmi_perf_info {struct perf_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; } ;
struct perf_dom_info {int opp_count; TYPE_1__* opp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int trans_latency_us; } ;


 int FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(const struct scmi_handle *VAR_0,
         struct device *VAR_1)
{
 struct perf_dom_info *VAR_2;
 struct scmi_perf_info *VAR_3 = VAR_0->perf_priv;
 int VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_2 = VAR_3->dom_info + VAR_4;

 return VAR_2->opp[VAR_2->opp_count - 1].trans_latency_us * 1000;
}
