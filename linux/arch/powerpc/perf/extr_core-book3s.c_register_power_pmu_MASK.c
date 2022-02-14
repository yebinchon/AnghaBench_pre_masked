
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct power_pmu {int attr_groups; int name; } ;
struct TYPE_3__ {int attr_groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 struct power_pmu* VAR_8 ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct power_pmu *VAR_9)
{
 if (VAR_8)
  return -VAR_1;

 VAR_8 = VAR_9;
 FUNC_3("%s performance monitor hardware support registered\n",
  VAR_9->name);

 VAR_6.attr_groups = VAR_8->attr_groups;
 FUNC_2(&VAR_6, "cpu", VAR_4);
 FUNC_0(VAR_0, "perf/powerpc:prepare",
     VAR_7, ((void*)0));
 return 0;
}
