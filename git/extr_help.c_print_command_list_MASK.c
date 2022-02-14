
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cmdname_help {char* name; int category; int help; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(const struct cmdname_help *VAR_0,
          uint32_t VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].name; VAR_3++) {
  if (VAR_0[VAR_3].category & VAR_1) {
   size_t VAR_4 = FUNC_4(VAR_0[VAR_3].name);
   FUNC_2("   %s   ", VAR_0[VAR_3].name);
   if (VAR_2 > VAR_4)
    FUNC_1(' ', VAR_2 - VAR_4);
   FUNC_3(FUNC_0(VAR_0[VAR_3].help));
  }
 }
}
