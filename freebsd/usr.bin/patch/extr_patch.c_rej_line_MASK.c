
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LINENUM ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, LINENUM VAR_3)
{
 size_t VAR_4;
 const char *VAR_5 = FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_5);

 FUNC_0(VAR_1, "%c%s", VAR_2, VAR_5);
 if (VAR_4 == 0 || VAR_5[VAR_4 - 1] != '\n') {
  if (VAR_4 >= VAR_0)
   FUNC_0(VAR_1, "\n\\ Line too long\n");
  else
   FUNC_0(VAR_1, "\n\\ No newline at end of line\n");
 }
}
