
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcstat_target {int pt_pid; } ;
struct kinfo_proc {int ki_pid; int ki_comm; } ;
typedef int regmatch_t ;
typedef int regex_t ;
typedef int errbuf ;
struct TYPE_2__ {int pa_targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct pmcstat_target*,int ) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 struct kinfo_proc* FUNC_4 (int *,int ,int ,int*) ;
 int * FUNC_5 (int *,char*,int *,int ,char*) ;
 struct pmcstat_target* FUNC_6 (int) ;
 int * VAR_9 ;
 struct kinfo_proc* VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int,int *,char*,int) ;
 int FUNC_9 (int *,int ,int,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*,char**,int ) ;

void
FUNC_12(const char *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 struct pmcstat_target *VAR_17;
 char VAR_18[VAR_7], *VAR_19;
 static struct kinfo_proc *VAR_20;
 regex_t VAR_21;
 regmatch_t VAR_22;


       VAR_15 = FUNC_11(VAR_12, &VAR_19, 0);
 if (VAR_19 != VAR_12 && VAR_15 >= 0) {
  if ((VAR_17 = FUNC_6(sizeof(*VAR_17))) == ((void*)0))
   goto outofmemory;
  VAR_17->pt_pid = VAR_15;
  FUNC_0(&VAR_8.pa_targets, VAR_17, VAR_11);
  return;
 }


 if (VAR_9 == ((void*)0)) {
  if ((VAR_9 = FUNC_5(((void*)0), "/dev/null", ((void*)0), 0,
      VAR_18)) == ((void*)0))
   FUNC_1(VAR_1, "ERROR: Cannot open kernel \"%s\"",
       VAR_18);
  if ((VAR_10 = FUNC_4(VAR_9, VAR_3,
      0, &VAR_14)) == ((void*)0))
   FUNC_1(VAR_1, "ERROR: Cannot get process list: %s",
       FUNC_3(VAR_9));
 } else
  VAR_14 = 0;

 if ((VAR_16 = FUNC_7(&VAR_21, VAR_12, VAR_4|VAR_6)) != 0) {
  FUNC_8(VAR_16, &VAR_21, VAR_18, sizeof(VAR_18));
  FUNC_1(VAR_0, "ERROR: Failed to compile regex \"%s\": %s",
      VAR_12, VAR_18);
 }

 for (VAR_13 = 0, VAR_20 = VAR_10; VAR_13 < VAR_14; VAR_13++, VAR_20++) {
  if ((VAR_16 = FUNC_9(&VAR_21, VAR_20->ki_comm, 1, &VAR_22, 0)) == 0) {
   if ((VAR_17 = FUNC_6(sizeof(*VAR_17))) == ((void*)0))
    goto outofmemory;
   VAR_17->pt_pid = VAR_20->ki_pid;
   FUNC_0(&VAR_8.pa_targets, VAR_17, VAR_11);
  } else if (VAR_16 != VAR_5) {
   FUNC_8(VAR_16, &VAR_21, VAR_18, sizeof(VAR_18));
   FUNC_2(VAR_2, "ERROR: Regex evalation failed: %s",
       VAR_18);
  }
 }

 FUNC_10(&VAR_21);

 return;

 outofmemory:
 FUNC_2(VAR_2, "Out of memory.");

}
