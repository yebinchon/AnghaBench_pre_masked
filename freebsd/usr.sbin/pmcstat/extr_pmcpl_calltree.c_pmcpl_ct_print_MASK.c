
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcpl_ct_sample {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int pa_graphfile; } ;


 int FUNC_0 (int,struct pmcpl_ct_sample*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (struct pmcpl_ct_sample*) ;
 int FUNC_6 (struct pmcpl_ct_sample*) ;
 int VAR_2 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_3;
 char VAR_4[40];
 struct pmcpl_ct_sample VAR_5;

 FUNC_6(&VAR_5);
 FUNC_3();

 FUNC_1(VAR_0.pa_graphfile,
  "version: 1\n"
  "creator: pmcstat\n"
  "positions: instr line\n"
  "events:");
 for (VAR_3=0; VAR_3<VAR_2; VAR_3++) {
  FUNC_8(VAR_4, sizeof(VAR_4), "%s_%d",
      FUNC_7(VAR_3), VAR_3);
  FUNC_4(VAR_4);
  FUNC_1(VAR_0.pa_graphfile, " %s", VAR_4);
 }
 FUNC_1(VAR_0.pa_graphfile, "\nsummary:");
 for (VAR_3=0; VAR_3<VAR_2 ; VAR_3++)
  FUNC_1(VAR_0.pa_graphfile, " %u",
      FUNC_0(VAR_3, &VAR_5));
 FUNC_1(VAR_0.pa_graphfile, "\n");
 FUNC_2(VAR_1);
 FUNC_5(&VAR_5);
}
