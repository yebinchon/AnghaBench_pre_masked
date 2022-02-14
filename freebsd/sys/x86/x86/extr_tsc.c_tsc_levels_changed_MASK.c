
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ freq; } ;
struct cf_level {TYPE_1__ total_set; } ;
typedef int * device_t ;


 int FUNC_0 (int *,struct cf_level*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (struct cf_level*,int ) ;
 struct cf_level* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, int VAR_4)
{
 device_t VAR_5;
 struct cf_level *VAR_6;
 int VAR_7, VAR_8;
 uint64_t VAR_9;


 if (VAR_4 != 0)
  return;


 VAR_5 = FUNC_2(FUNC_1("cpufreq"), VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_5("tsc_levels_changed() called but no cpufreq device?\n");
  return;
 }


 VAR_7 = 64;
 VAR_6 = FUNC_4(VAR_7 * sizeof(*VAR_6), VAR_1, VAR_0);
 if (VAR_6 == ((void*)0))
  return;
 VAR_8 = FUNC_0(VAR_5, VAR_6, &VAR_7);
 if (VAR_8 == 0 && VAR_7 != 0) {
  VAR_9 = (uint64_t)VAR_6[0].total_set.freq * 1000000;
  FUNC_6(VAR_2, VAR_9, 1);
 } else
  FUNC_5("tsc_levels_changed: no max freq found\n");
 FUNC_3(VAR_6, VAR_1);
}
