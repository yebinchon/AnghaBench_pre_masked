
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_report {struct clar_report* next; } ;
struct clar_explicit {struct clar_explicit* next; } ;
struct TYPE_2__ {struct clar_report* summary_filename; struct clar_report* reports; struct clar_report* explicit; int summary; scalar_t__ write_summary; int total_errors; int tests_ran; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct clar_report*) ;

void
FUNC_6(void)
{
 struct clar_explicit *VAR_2, *VAR_3;
 struct clar_report *VAR_4, *VAR_5;

 FUNC_1(
  VAR_0.tests_ran,
  (int)VAR_1,
  VAR_0.total_errors
 );

 FUNC_3();

 if (VAR_0.write_summary && FUNC_2(VAR_0.summary) < 0) {
  FUNC_0("Failed to write the summary file\n");
  FUNC_4(-1);
 }

 for (VAR_2 = VAR_0.explicit; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_5(VAR_2);
 }

 for (VAR_4 = VAR_0.reports; VAR_4; VAR_4 = VAR_5) {
  VAR_5 = VAR_4->next;
  FUNC_5(VAR_4);
 }

 FUNC_5(VAR_0.summary_filename);
}
