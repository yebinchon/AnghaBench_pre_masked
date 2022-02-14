
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nasid_t ;
typedef int lboard_t ;
typedef int klinfo_t ;
struct TYPE_4__ {int physid; } ;
struct TYPE_5__ {TYPE_1__ cpu_info; } ;
typedef TYPE_2__ klcpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;

klcpu_t *FUNC_4(nasid_t VAR_2, int VAR_3)
{
 lboard_t *VAR_4;
 klcpu_t *VAR_5;

 if (!(VAR_4 = FUNC_3((lboard_t *)FUNC_0(VAR_2), VAR_1)))
  return (klcpu_t *)((void*)0);

 if (!(VAR_5 = (klcpu_t *)FUNC_2(VAR_4, VAR_0)))
  return (klcpu_t *)((void*)0);

 do {
  if ((VAR_5->cpu_info.physid) == VAR_3)
   return VAR_5;
 } while ((VAR_5 = (klcpu_t *)FUNC_1(VAR_4, (klinfo_t *)VAR_5,
        VAR_0)));
 return (klcpu_t *)((void*)0);
}
