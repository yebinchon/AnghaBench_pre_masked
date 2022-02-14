
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_summary {char* filename; int fp; } ;
struct clar_report {char* suite; struct clar_report* next; int test; struct clar_error* errors; } ;
struct clar_error {struct clar_error* next; int description; int error_msg; } ;
struct TYPE_2__ {int total_errors; int tests_ran; struct clar_report* reports; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct clar_summary*,char*,int) ;
 scalar_t__ FUNC_1 (struct clar_summary*,char*,int ,int ) ;
 int FUNC_2 (struct clar_summary*,int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct clar_summary*,int ,char*,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct clar_summary*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct clar_summary*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct clar_summary *VAR_1)
{
 struct clar_report *VAR_2;
 const char *VAR_3 = ((void*)0);

 if (FUNC_4(VAR_1) < 0)
  goto on_error;

 VAR_2 = VAR_0.reports;
 while (VAR_2 != ((void*)0)) {
  struct clar_error *VAR_4 = VAR_2->errors;

  if (VAR_3 == ((void*)0) || FUNC_8(VAR_3, VAR_2->suite) != 0) {
   if (FUNC_3(VAR_1, 0, VAR_2->suite, "",
       FUNC_9(((void*)0)), 0, VAR_0.tests_ran, VAR_0.total_errors, 0) < 0)
    goto on_error;
  }

  VAR_3 = VAR_2->suite;

  FUNC_2(VAR_1, VAR_2->test, "what", 0);

  while (VAR_4 != ((void*)0)) {
   if (FUNC_1(VAR_1, "assert",
       VAR_4->error_msg, VAR_4->description) < 0)
    goto on_error;

   VAR_4 = VAR_4->next;
  }

  if (FUNC_0(VAR_1, "testcase", 2) < 0)
   goto on_error;

  VAR_2 = VAR_2->next;

  if (!VAR_2 || FUNC_8(VAR_3, VAR_2->suite) != 0) {
   if (FUNC_0(VAR_1, "testsuite", 1) < 0)
    goto on_error;
  }
 }

 if (FUNC_0(VAR_1, "testsuites", 0) < 0 ||
     FUNC_5(VAR_1->fp) != 0)
  goto on_error;

 FUNC_7("written summary file to %s\n", VAR_1->filename);

 FUNC_6(VAR_1);
 return 0;

on_error:
 FUNC_5(VAR_1->fp);
 FUNC_6(VAR_1);
 return -1;
}
