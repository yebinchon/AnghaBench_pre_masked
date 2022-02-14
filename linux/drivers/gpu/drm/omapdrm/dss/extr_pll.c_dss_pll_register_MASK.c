
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {struct dss_device* dss; } ;
struct dss_device {struct dss_pll** plls; } ;


 int FUNC_0 (struct dss_pll**) ;
 int VAR_0 ;

int FUNC_1(struct dss_device *VAR_1, struct dss_pll *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->plls); ++VAR_3) {
  if (!VAR_1->plls[VAR_3]) {
   VAR_1->plls[VAR_3] = VAR_2;
   VAR_2->dss = VAR_1;
   return 0;
  }
 }

 return -VAR_0;
}
