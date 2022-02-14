
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcstat_pmcrecord {double pr_samples; float pr_dubious_frames; int pr_pmcname; } ;
typedef int pmcname ;
struct TYPE_4__ {size_t pa_plugin; } ;
struct TYPE_3__ {int (* pl_topdisplay ) () ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (float) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pmcstat_pmcrecord* FUNC_6 (int) ;
 int VAR_4 ;
 char* FUNC_7 (int ) ;
 double VAR_5 ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(void)
{
 int VAR_6;
 float VAR_7;
 char VAR_8[40];
 struct pmcstat_pmcrecord *VAR_9;


 if (VAR_3)
  return;


 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9 == ((void*)0))
  return;


 if (VAR_2)
  FUNC_8(VAR_8, sizeof(VAR_8), "[%s]",
      FUNC_7(VAR_9->pr_pmcname));
 else
  FUNC_8(VAR_8, sizeof(VAR_8), "%s.%d",
      FUNC_7(VAR_9->pr_pmcname),
      VAR_4);


 if (VAR_5 > 0)
  VAR_7 = (VAR_9->pr_samples * 100.0) / VAR_5;
 else
  VAR_7 = 0.;
 VAR_6 = FUNC_2(VAR_7);

 FUNC_3();
 FUNC_5("PMC: %s Samples: %u ",
     VAR_8,
     VAR_9->pr_samples);
 FUNC_1(VAR_6);
 FUNC_5("(%.1f%%) ", VAR_7);
 FUNC_0(VAR_6);
 FUNC_5(", %u unresolved\n\n",
     VAR_9->pr_dubious_frames);
 if (VAR_1[VAR_0.pa_plugin].pl_topdisplay != ((void*)0))
  VAR_1[VAR_0.pa_plugin].pl_topdisplay();
 FUNC_4();
}
