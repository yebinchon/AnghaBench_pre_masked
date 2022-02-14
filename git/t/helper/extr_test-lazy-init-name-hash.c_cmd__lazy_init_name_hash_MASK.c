
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct option {int dummy; } ;


 struct option FUNC_0 (char,char*,scalar_t__*,char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (char,char*,int*,char*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int,char const**,char const*,struct option*,char const**,int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_7 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(int VAR_8, const char **VAR_9)
{
 const char *VAR_10[] = {
  "test-tool lazy-init-name-hash -d (-s | -m)",
  "test-tool lazy-init-name-hash -p [-c c]",
  "test-tool lazy-init-name-hash -a a [--step s] [-c c]",
  "test-tool lazy-init-name-hash (-s | -m) [-c c]",
  "test-tool lazy-init-name-hash -s -m [-c c]",
  ((void*)0)
 };
 struct option VAR_11[] = {
  FUNC_0('s', "single", &VAR_7, "run single-threaded code"),
  FUNC_0('m', "multi", &VAR_5, "run multi-threaded code"),
  FUNC_2('c', "count", &VAR_2, "number of passes"),
  FUNC_0('d', "dump", &VAR_3, "dump hash tables"),
  FUNC_0('p', "perf", &VAR_6, "compare single vs multi"),
  FUNC_2('a', "analyze", &VAR_0, "analyze different multi sizes"),
  FUNC_2(0, "step", &VAR_1, "analyze step factor"),
  FUNC_1(),
 };
 const char *VAR_12;
 uint64_t VAR_13, VAR_14;

 VAR_12 = FUNC_7();

 VAR_8 = FUNC_6(VAR_8, VAR_9, VAR_12, VAR_11, VAR_10, 0);




 VAR_4 = 1;

 if (VAR_3) {
  if (VAR_6 || VAR_0 > 0)
   FUNC_4("cannot combine dump, perf, or analyze");
  if (VAR_2 > 1)
   FUNC_4("count not valid with dump");
  if (VAR_7 && VAR_5)
   FUNC_4("cannot use both single and multi with dump");
  if (!VAR_7 && !VAR_5)
   FUNC_4("dump requires either single or multi");
  FUNC_5();
  return 0;
 }

 if (VAR_6) {
  if (VAR_0 > 0)
   FUNC_4("cannot combine dump, perf, or analyze");
  if (VAR_7 || VAR_5)
   FUNC_4("cannot use single or multi with perf");
  VAR_13 = FUNC_8(0);
  VAR_14 = FUNC_8(1);
  if (VAR_14 > VAR_13)
   FUNC_4("multi is slower");
  return 0;
 }

 if (VAR_0) {
  if (VAR_0 < 500)
   FUNC_4("analyze must be at least 500");
  if (!VAR_1)
   VAR_1 = VAR_0;
  if (VAR_7 || VAR_5)
   FUNC_4("cannot use single or multi with analyze");
  FUNC_3();
  return 0;
 }

 if (!VAR_7 && !VAR_5)
  FUNC_4("require either -s or -m or both");

 if (VAR_7)
  FUNC_8(0);
 if (VAR_5)
  FUNC_8(1);

 return 0;
}
