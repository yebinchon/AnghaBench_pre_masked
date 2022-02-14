
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* subsys_data; } ;
struct device {TYPE_2__ power; } ;
typedef int s64 ;
struct TYPE_7__ {int effective_constraint_ns; } ;
struct TYPE_8__ {TYPE_3__ td; } ;
struct TYPE_5__ {scalar_t__ domain_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3)
{
 s64 *VAR_4 = VAR_3;
 s64 VAR_5;

 if (VAR_2->power.subsys_data && VAR_2->power.subsys_data->domain_data) {







  VAR_5 = FUNC_0(VAR_2)->td.effective_constraint_ns;
 } else {






  VAR_5 = FUNC_1(VAR_2, VAR_0);
  VAR_5 *= VAR_1;
 }

 if (VAR_5 < *VAR_4)
  *VAR_4 = VAR_5;

 return 0;
}
