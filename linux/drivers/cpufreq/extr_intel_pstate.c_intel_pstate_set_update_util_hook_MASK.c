
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time; } ;
struct cpudata {int update_util_set; int update_util; TYPE_1__ sample; } ;


 struct cpudata** VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_5)
{
 struct cpudata *VAR_6 = VAR_0[VAR_5];

 if (VAR_1 && !VAR_2)
  return;

 if (VAR_6->update_util_set)
  return;


 VAR_6->sample.time = 0;
 FUNC_0(VAR_5, &VAR_6->update_util,
         (VAR_1 ?
          VAR_4 :
          VAR_3));
 VAR_6->update_util_set = 1;
}
