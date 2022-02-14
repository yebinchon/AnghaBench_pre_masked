
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*,void*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int VAR_6 ;
 int FUNC_7 (char const*,char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(const char *VAR_8, const char *VAR_9, void *VAR_10)
{
 if (!FUNC_7(VAR_8, "fetch.prune")) {
  VAR_3 = FUNC_2(VAR_8, VAR_9);
  return 0;
 }

 if (!FUNC_7(VAR_8, "fetch.prunetags")) {
  VAR_4 = FUNC_2(VAR_8, VAR_9);
  return 0;
 }

 if (!FUNC_7(VAR_8, "fetch.showforcedupdates")) {
  VAR_5 = FUNC_2(VAR_8, VAR_9);
  return 0;
 }

 if (!FUNC_7(VAR_8, "submodule.recurse")) {
  int VAR_11 = FUNC_2(VAR_8, VAR_9) ?
   VAR_1 : VAR_0;
  VAR_6 = VAR_11;
 }

 if (!FUNC_7(VAR_8, "submodule.fetchjobs")) {
  VAR_7 = FUNC_6(VAR_8, VAR_9);
  return 0;
 } else if (!FUNC_7(VAR_8, "fetch.recursesubmodules")) {
  VAR_6 = FUNC_5(VAR_8, VAR_9);
  return 0;
 }

 if (!FUNC_7(VAR_8, "fetch.parallel")) {
  VAR_2 = FUNC_3(VAR_8, VAR_9);
  if (VAR_2 < 0)
   FUNC_1(FUNC_0("fetch.parallel cannot be negative"));
  return 0;
 }

 return FUNC_4(VAR_8, VAR_9, VAR_10);
}
