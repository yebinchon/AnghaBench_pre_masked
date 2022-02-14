
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sh_pmu {scalar_t__ num_events; int name; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char*,int ) ;
 struct sh_pmu* VAR_6 ;
 int VAR_7 ;

int FUNC_4(struct sh_pmu *VAR_8)
{
 if (VAR_6)
  return -VAR_1;
 VAR_6 = VAR_8;

 FUNC_3("Performance Events: %s support registered\n", VAR_8->name);






 VAR_5.capabilities |= VAR_3;

 FUNC_0(VAR_8->num_events > VAR_2);

 FUNC_2(&VAR_5, "cpu", VAR_4);
 FUNC_1(VAR_0, "PERF_SUPERH", VAR_7,
     ((void*)0));
 return 0;
}
