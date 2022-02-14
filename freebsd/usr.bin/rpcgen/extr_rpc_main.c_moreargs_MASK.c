
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char**,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char **VAR_3;

 VAR_2 = VAR_2 == 0 ? 32 : VAR_2 << 1;
 if (VAR_2 > VAR_0 / 4) {
  FUNC_3("refusing to allocate too many arguments");
  FUNC_0();
 }
 VAR_3 = FUNC_2(VAR_1, VAR_2 * sizeof(*VAR_1));
 if (VAR_3 == ((void*)0)) {
  FUNC_3("unable to allocate arglist");
  FUNC_0();
 }
 FUNC_1(VAR_1);
 VAR_1 = VAR_3;
}
