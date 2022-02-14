
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dss_clk {scalar_t__ max_rate; scalar_t__ rate; } ;
struct TYPE_2__ {struct dss_clk* core_clk; } ;
struct dpu_kms {TYPE_1__ perf; } ;


 int FUNC_0 (struct dss_clk*,int) ;

__attribute__((used)) static int FUNC_1(struct dpu_kms *VAR_0, u64 VAR_1)
{
 struct dss_clk *VAR_2 = VAR_0->perf.core_clk;

 if (VAR_2->max_rate && (VAR_1 > VAR_2->max_rate))
  VAR_1 = VAR_2->max_rate;

 VAR_2->rate = VAR_1;
 return FUNC_0(VAR_2, 1);
}
