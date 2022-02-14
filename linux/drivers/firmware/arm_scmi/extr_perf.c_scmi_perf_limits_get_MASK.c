
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scmi_perf_info {struct perf_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; } ;
struct perf_dom_info {TYPE_1__* fc_info; } ;
struct TYPE_2__ {scalar_t__ limit_get_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct scmi_handle const*,int,int*,int*) ;

__attribute__((used)) static int FUNC_2(const struct scmi_handle *VAR_0, u32 VAR_1,
    u32 *VAR_2, u32 *VAR_3)
{
 struct scmi_perf_info *VAR_4 = VAR_0->perf_priv;
 struct perf_dom_info *VAR_5 = VAR_4->dom_info + VAR_1;

 if (VAR_5->fc_info && VAR_5->fc_info->limit_get_addr) {
  *VAR_2 = FUNC_0(VAR_5->fc_info->limit_get_addr);
  *VAR_3 = FUNC_0(VAR_5->fc_info->limit_get_addr + 4);
  return 0;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
