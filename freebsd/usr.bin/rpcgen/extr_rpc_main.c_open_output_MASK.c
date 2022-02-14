
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * FUNC_1 (char const*,char*) ;
 int * VAR_0 ;
 int FUNC_2 (char const*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, const char *VAR_3)
{

 if (VAR_3 == ((void*)0)) {
  VAR_0 = VAR_1;
  return;
 }

 if (VAR_2 != ((void*)0) && FUNC_3(VAR_3, VAR_2)) {
  FUNC_5("%s already exists. No output generated", VAR_2);
  FUNC_0();
 }
 VAR_0 = FUNC_1(VAR_3, "w");
 if (VAR_0 == ((void*)0)) {
  FUNC_4("unable to open %s", VAR_3);
  FUNC_0();
 }
 FUNC_2(VAR_3);

 return;
}
