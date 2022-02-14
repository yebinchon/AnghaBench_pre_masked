
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* pm_domain; } ;
struct TYPE_2__ {int (* detach ) (struct device*,int) ;} ;


 int FUNC_0 (struct device*,int) ;

void FUNC_1(struct device *VAR_0, bool VAR_1)
{
 if (VAR_0->pm_domain && VAR_0->pm_domain->detach)
  VAR_0->pm_domain->detach(VAR_0, VAR_1);
}
