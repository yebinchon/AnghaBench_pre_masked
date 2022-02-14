
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_2, "%s: %s on line %d\n", FUNC_1(), VAR_4, VAR_1);
 FUNC_0(VAR_2, "%s\n", VAR_0);
 if (VAR_3) {
  char *VAR_5;
  for (VAR_5 = VAR_0; VAR_5 < VAR_3; ++VAR_5)
   FUNC_2(' ', VAR_2);
  FUNC_0(VAR_2, "^\n");
 }
}
