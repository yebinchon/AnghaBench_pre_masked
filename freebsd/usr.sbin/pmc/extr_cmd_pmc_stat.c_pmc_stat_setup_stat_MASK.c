
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmcstat_ev {char* ev_name; int ev_count; int ev_cumulative; long long ev_saved; scalar_t__ ev_cpu; int ev_pmcid; int ev_flags; int * ev_spec; int ev_mode; } ;
typedef int rootmask ;
typedef int cpuset_t ;
struct TYPE_3__ {int pa_flags; int pa_required; int pa_events; void* pa_outputpath; int pa_logfd; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (int *,struct pmcstat_ev*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int,int,int *) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_24 ;
 scalar_t__ FUNC_9 () ;
 void* FUNC_10 (int) ;
 TYPE_1__ VAR_25 ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char const***) ;
 char** VAR_26 ;
 int FUNC_13 (struct pmcstat_ev*,int *,TYPE_1__*) ;
 int FUNC_14 (void*,int ) ;
 char** VAR_27 ;
 char const** VAR_28 ;
 int FUNC_15 (void*,char*) ;
 void* FUNC_16 (char const*) ;
 int FUNC_17 (char*,char*,int) ;
 char* FUNC_18 (char**,char*) ;

__attribute__((used)) static void
FUNC_19(int VAR_29, const char *VAR_30)
{
 const char *VAR_31[VAR_22];
 static const char **VAR_32;
 struct pmcstat_ev *VAR_33;
 char *VAR_34, *VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 cpuset_t VAR_40, VAR_41;

 if (FUNC_6(VAR_1, VAR_2, -1,
     sizeof(VAR_41), &VAR_41) == -1)
  FUNC_7(VAR_4, "ERROR: Cannot determine the root set of CPUs");
 FUNC_1(&VAR_41, &VAR_40);

 if (FUNC_12(&VAR_32) != 0)
  FUNC_8(VAR_6, "ERROR: hwmpc.ko not loaded or stat not supported on host.");
 if (VAR_29 && FUNC_9() != 0)
  FUNC_8(VAR_6, "ERROR: system mode counters can only be used as root");
 VAR_34 = ((void*)0);
 for (VAR_36 = 0; VAR_36 < VAR_22; VAR_36++) {
  VAR_27[VAR_36] = VAR_32[VAR_36];
  VAR_28[VAR_36] = VAR_26[VAR_36];
 }
 if (VAR_30) {
  VAR_34 = FUNC_16(VAR_30);
  VAR_39 = 0;
  while ((VAR_35 = FUNC_18(&VAR_34, ",")) != ((void*)0) &&
      VAR_39 < VAR_22 - VAR_15) {
   VAR_31[VAR_39++] = VAR_35;
   if (FUNC_11(VAR_35) == VAR_3)
    FUNC_8(VAR_6, "ERROR: %s not recognized on host", VAR_35);
  }
  VAR_38 = VAR_15 + VAR_22 - VAR_7 - VAR_39;
  for (VAR_36 = 0; VAR_36 < VAR_39; VAR_36++) {
   VAR_27[VAR_38 + VAR_36] = VAR_31[VAR_36];
   VAR_28[VAR_38 + VAR_36] = VAR_31[VAR_36];
  }
 }
 if (VAR_29)
  VAR_25.pa_flags |= VAR_13;
 else
  VAR_25.pa_flags |= VAR_12;
 VAR_25.pa_flags |= VAR_9;
 VAR_25.pa_flags |= VAR_8 | VAR_14;
 VAR_25.pa_flags |= VAR_11;
 VAR_25.pa_required |= VAR_8 | VAR_14 | VAR_10;
 VAR_25.pa_outputpath = FUNC_16("/dev/null");
 VAR_25.pa_logfd = FUNC_14(VAR_25.pa_outputpath,
     VAR_16);
 for (VAR_36 = 0; VAR_36 < VAR_22; VAR_36++) {
  if ((VAR_33 = FUNC_10(sizeof(*VAR_33))) == ((void*)0))
   FUNC_8(VAR_5, "ERROR: Out of memory.");
  if (VAR_29)
   VAR_33->ev_mode = VAR_20;
  else
   VAR_33->ev_mode = VAR_21;
  VAR_33->ev_spec = FUNC_16(VAR_27[VAR_36]);
  if (VAR_33->ev_spec == ((void*)0))
   FUNC_8(VAR_5, "ERROR: Out of memory.");
  VAR_37 = FUNC_15(FUNC_16(VAR_27[VAR_36]), ", \t");
  VAR_33->ev_name = FUNC_10(VAR_37 + 1);
  if (VAR_33->ev_name == ((void*)0))
   FUNC_8(VAR_5, "ERROR: Out of memory.");
  (void)FUNC_17(VAR_33->ev_name, VAR_27[VAR_36], VAR_37);
  *(VAR_33->ev_name + VAR_37) = '\0';

  VAR_33->ev_count = -1;
  VAR_33->ev_flags = 0;
  VAR_33->ev_flags |= VAR_18;
  VAR_33->ev_cumulative = 1;

  VAR_33->ev_saved = 0LL;
  VAR_33->ev_pmcid = VAR_19;
  FUNC_4(&VAR_25.pa_events, VAR_33, VAR_24);
  if (VAR_29) {
   VAR_33->ev_cpu = FUNC_2(&VAR_40) - 1;
   FUNC_0(VAR_33->ev_cpu, &VAR_40);
   FUNC_13(VAR_33, &VAR_40, &VAR_25);
   FUNC_3(VAR_33->ev_cpu, &VAR_40);
  } else
   VAR_33->ev_cpu = VAR_17;

 }
 if (FUNC_5(VAR_0, &VAR_23))
  FUNC_7(1, "clock_gettime");
}
