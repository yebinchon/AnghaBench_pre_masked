
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct pmcstat_pmcrecord {int dummy; } ;
typedef int pmcstat_interned_string ;
typedef int fullpath ;
struct TYPE_2__ {char* pa_samplesdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

void
FUNC_6(pmcstat_interned_string VAR_8, struct pmcstat_pmcrecord *VAR_9)
{
 struct stat VAR_10;
 char VAR_11[VAR_1];

 (void) VAR_9;





 (void) FUNC_4(VAR_11, sizeof(VAR_11), "%s/%s", VAR_7.pa_samplesdir,
     FUNC_3(VAR_8));


 if (FUNC_5(VAR_11, &VAR_10) == 0 && FUNC_0(VAR_10.st_mode))
  return;

 if (FUNC_2(VAR_11, VAR_4|VAR_2|VAR_5|VAR_3|VAR_6) < 0)
  FUNC_1(VAR_0, "ERROR: Cannot create directory \"%s\"",
      VAR_11);
}
