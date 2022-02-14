
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nasid_t ;
struct TYPE_7__ {scalar_t__ virtid; } ;
struct TYPE_8__ {TYPE_1__ cpu_info; } ;
typedef TYPE_2__ klcpu_t ;
struct TYPE_9__ {int * g_nasidtable; } ;
typedef TYPE_3__ gda_t ;
typedef scalar_t__ cpuid_t ;
typedef size_t cnodeid_t ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,scalar_t__) ;

klcpu_t *FUNC_3(cpuid_t VAR_5)
{
 nasid_t VAR_6;
 int VAR_7;
 klcpu_t *VAR_8;
 gda_t *VAR_9 = VAR_1;
 cnodeid_t VAR_10;

 if (!(VAR_5 < VAR_4)) {
  FUNC_2("sn_get_cpuinfo: illegal cpuid 0x%lx\n", VAR_5);
  return ((void*)0);
 }

 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10 == VAR_2)
  return ((void*)0);

 if ((VAR_6 = VAR_9->g_nasidtable[VAR_10]) == VAR_3)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_1(VAR_6, VAR_7);
  if (VAR_8 && VAR_8->cpu_info.virtid == VAR_5)
   return VAR_8;
 }
 return ((void*)0);
}
