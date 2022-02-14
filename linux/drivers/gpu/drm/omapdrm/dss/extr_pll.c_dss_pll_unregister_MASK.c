
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {struct dss_device* dss; } ;
struct dss_device {struct dss_pll** plls; } ;


 int FUNC_0 (struct dss_pll**) ;

void FUNC_1(struct dss_pll *VAR_0)
{
 struct dss_device *VAR_1 = VAR_0->dss;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->plls); ++VAR_2) {
  if (VAR_1->plls[VAR_2] == VAR_0) {
   VAR_1->plls[VAR_2] = ((void*)0);
   VAR_0->dss = ((void*)0);
   return;
  }
 }
}
