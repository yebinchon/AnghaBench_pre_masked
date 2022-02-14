
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_1)
{
 FILE *VAR_2 = FUNC_2(VAR_1, "r");

 if (!VAR_2) {
  FUNC_4("%s", VAR_1);
  ++VAR_0;
 } else {
  FUNC_3(VAR_2, VAR_1);
  if (FUNC_1(VAR_2)) {
   FUNC_4("%s", VAR_1);
   ++VAR_0;
  }
  FUNC_0(VAR_2);
 }
}
