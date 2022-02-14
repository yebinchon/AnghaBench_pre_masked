
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clar_suite {char const* name; size_t test_count; int cleanup; int initialize; int enabled; struct clar_func* tests; } ;
struct clar_report {char const* suite; struct clar_report* next; int status; int test_number; int * test; } ;
struct clar_func {int * name; } ;
struct TYPE_2__ {char const* active_suite; int * active_test; scalar_t__ total_errors; scalar_t__ exit_on_error; struct clar_report* last_report; struct clar_report* reports; int tests_ran; int suites_ran; int report_errors_only; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct clar_report* FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct clar_func const*,int *,int *) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,size_t) ;

__attribute__((used)) static void
FUNC_6(const struct clar_suite *VAR_4, const char *VAR_5)
{
 const struct clar_func *VAR_6 = VAR_4->tests;
 size_t VAR_7, VAR_8;
 struct clar_report *VAR_9;

 if (!VAR_4->enabled)
  return;

 if (VAR_3.exit_on_error && VAR_3.total_errors)
  return;

 if (!VAR_3.report_errors_only)
  FUNC_2(VAR_4->name, ++VAR_3.suites_ran);

 VAR_3.active_suite = VAR_4->name;
 VAR_3.active_test = ((void*)0);
 FUNC_0(VAR_1);

 if (VAR_5) {
  size_t VAR_10 = FUNC_4(VAR_4->name);
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_8 <= VAR_10) {
   VAR_5 = ((void*)0);
  } else {
   VAR_5 += VAR_10;
   while (*VAR_5 == ':')
    ++VAR_5;
   VAR_8 = FUNC_4(VAR_5);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->test_count; ++VAR_7) {
  if (VAR_5 && FUNC_5(VAR_6[VAR_7].name, VAR_5, VAR_8))
   continue;

  VAR_3.active_test = VAR_6[VAR_7].name;

  VAR_9 = FUNC_1(1, sizeof(struct clar_report));
  VAR_9->suite = VAR_3.active_suite;
  VAR_9->test = VAR_3.active_test;
  VAR_9->test_number = VAR_3.tests_ran;
  VAR_9->status = VAR_0;

  if (VAR_3.reports == ((void*)0))
   VAR_3.reports = VAR_9;

  if (VAR_3.last_report != ((void*)0))
   VAR_3.last_report->next = VAR_9;

  VAR_3.last_report = VAR_9;

  FUNC_3(&VAR_6[VAR_7], &VAR_4->initialize, &VAR_4->cleanup);

  if (VAR_3.exit_on_error && VAR_3.total_errors)
   return;
 }

 VAR_3.active_test = ((void*)0);
 FUNC_0(VAR_2);
}
