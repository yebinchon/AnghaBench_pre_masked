
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_summary; int * summary_filename; int summary; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;

void
FUNC_8(int VAR_3, char **VAR_4)
{
 FUNC_1(
  (int)VAR_1,
  (int)VAR_2,
  ""
 );

 if ((VAR_0.summary_filename = FUNC_6("CLAR_SUMMARY")) != ((void*)0)) {
  VAR_0.write_summary = 1;
  VAR_0.summary_filename = FUNC_7(VAR_0.summary_filename);
 }

 if (VAR_3 > 1)
  FUNC_0(VAR_3, VAR_4);

 if (VAR_0.write_summary &&
     !(VAR_0.summary = FUNC_4(VAR_0.summary_filename))) {
  FUNC_2("Failed to open the summary file\n");
  FUNC_5(-1);
 }

 if (FUNC_3() < 0) {
  FUNC_2("Failed to sandbox the test runner.\n");
  FUNC_5(-1);
 }
}
