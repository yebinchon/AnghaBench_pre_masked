
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_perf_info {struct perf_dom_info* dom_info; } ;
struct scmi_opp {unsigned long perf; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; } ;
struct perf_dom_info {int opp_count; unsigned long mult_factor; struct scmi_opp* opp; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,unsigned long,int ) ;
 int FUNC_1 (struct device*,unsigned long) ;
 int FUNC_2 (struct device*,char*,unsigned long) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(const struct scmi_handle *VAR_0,
         struct device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;
 struct scmi_opp *VAR_6;
 struct perf_dom_info *VAR_7;
 struct scmi_perf_info *VAR_8 = VAR_0->perf_priv;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_7 = VAR_8->dom_info + VAR_4;

 for (VAR_6 = VAR_7->opp, VAR_2 = 0; VAR_2 < VAR_7->opp_count; VAR_2++, VAR_6++) {
  VAR_5 = VAR_6->perf * VAR_7->mult_factor;

  VAR_3 = FUNC_0(VAR_1, VAR_5, 0);
  if (VAR_3) {
   FUNC_2(VAR_1, "failed to add opp %luHz\n", VAR_5);

   while (VAR_2-- > 0) {
    VAR_5 = (--VAR_6)->perf * VAR_7->mult_factor;
    FUNC_1(VAR_1, VAR_5);
   }
   return VAR_3;
  }
 }
 return 0;
}
