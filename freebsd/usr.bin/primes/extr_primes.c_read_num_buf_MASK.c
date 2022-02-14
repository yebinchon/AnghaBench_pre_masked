
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubig ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_2 ;
 int FUNC_6 (char*,char**,int ) ;

__attribute__((used)) static ubig
FUNC_7(void)
{
 ubig VAR_3;
 char *VAR_4, VAR_5[VAR_0];

 for (;;) {
  if (FUNC_4(VAR_5, sizeof(VAR_5), VAR_2) == ((void*)0)) {
   if (FUNC_3(VAR_2))
    FUNC_0(1, "stdin");
   FUNC_2(0);
  }
  for (VAR_4 = VAR_5; FUNC_5(*VAR_4); ++VAR_4);
  if (*VAR_4 == '\n' || *VAR_4 == '\0')
   continue;
  if (*VAR_4 == '-')
   FUNC_1(1, "negative numbers aren't permitted.");
  VAR_1 = 0;
  VAR_3 = FUNC_6(VAR_5, &VAR_4, 0);
  if (VAR_1)
   FUNC_0(1, "%s", VAR_5);
  if (*VAR_4 != '\n')
   FUNC_1(1, "%s: illegal numeric format.", VAR_5);
  return (VAR_3);
 }
}
