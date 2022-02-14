
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pmc_pmcinfo {struct pmc_info* pm_pmcs; } ;
struct pmc_info {char* pm_name; int pm_ownerpid; int pm_reloadcount; int pm_mode; int pm_event; int pm_rowdisp; scalar_t__ pm_enabled; int pm_class; } ;
struct pmc_cpuinfo {int pm_ncpu; scalar_t__ pm_cputype; int pm_npmc; } ;
typedef int cpuset_t ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct pmc_pmcinfo*) ;
 scalar_t__ FUNC_5 (struct pmc_cpuinfo const**) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (scalar_t__) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,struct pmc_pmcinfo**) ;
 int FUNC_12 (char*,...) ;
 long FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char*,int *,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_15(void)
{
 cpuset_t VAR_5;
 long VAR_6;
 size_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct pmc_info *VAR_13;
 struct pmc_pmcinfo *VAR_14;
 const struct pmc_cpuinfo *VAR_15;

 if (FUNC_5(&VAR_15) != 0)
  FUNC_3(VAR_1, "Unable to determine CPU information");

 FUNC_12("%d %s CPUs present, with %d PMCs per CPU\n", VAR_15->pm_ncpu,
        FUNC_7(VAR_15->pm_cputype),
  VAR_15->pm_npmc);


 VAR_6 = FUNC_13(VAR_3);
 if (VAR_6 == -1 || (u_long)VAR_6 > sizeof(cpuset_t))
  FUNC_3(VAR_1, "Cannot determine which CPUs are logical");
 FUNC_1(&VAR_5);
 VAR_7 = (size_t)VAR_6;
 if (FUNC_14("machdep.logical_cpus_mask", &VAR_5,
     &VAR_7, ((void*)0), 0) < 0)
  FUNC_1(&VAR_5);

 VAR_12 = VAR_15->pm_ncpu;

 for (VAR_8 = VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {

  if (VAR_15->pm_cputype == VAR_2 &&
      FUNC_0(VAR_9, &VAR_5))
   continue;

  if (FUNC_11(VAR_9, &VAR_14) < 0) {
   if (VAR_4 == VAR_0)
    continue;
   FUNC_3(VAR_1, "Unable to get PMC status for CPU %d",
       VAR_9);
  }

  FUNC_12("#CPU %d:\n", VAR_8++);
  VAR_11 = FUNC_10(VAR_9);
  FUNC_12("#N  NAME             CLASS  STATE    ROW-DISP\n");

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_13 = &VAR_14->pm_pmcs[VAR_10];

   FUNC_12(" %-2d %-16s %-6s %-8s %-10s",
       VAR_10,
       VAR_13->pm_name,
       FUNC_6(VAR_13->pm_class),
       VAR_13->pm_enabled ? "ENABLED" : "DISABLED",
       FUNC_8(VAR_13->pm_rowdisp));

   if (VAR_13->pm_ownerpid != -1) {
           FUNC_12(" (pid %d)", VAR_13->pm_ownerpid);
    FUNC_12(" %-32s",
        FUNC_9(VAR_13->pm_event));
    if (FUNC_2(VAR_13->pm_mode))
     FUNC_12(" (reload count %jd)",
         VAR_13->pm_reloadcount);
   }
   FUNC_12("\n");
  }
  FUNC_4(VAR_14);
 }
 return 0;
}
