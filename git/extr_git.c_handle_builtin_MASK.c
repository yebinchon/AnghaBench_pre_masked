
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_struct {int dummy; } ;
struct argv_array {char** argv; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,char const*) ;
 int FUNC_2 (int ) ;
 struct cmd_struct* FUNC_3 (char const*) ;
 int FUNC_4 (struct cmd_struct*,int,char const**) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const**) ;

__attribute__((used)) static void FUNC_7(int VAR_1, const char **VAR_2)
{
 struct argv_array VAR_3 = VAR_0;
 const char *VAR_4;
 struct cmd_struct *VAR_5;

 FUNC_6(VAR_2);
 VAR_4 = VAR_2[0];


 if (VAR_1 > 1 && !FUNC_5(VAR_2[1], "--help")) {
  int VAR_6;

  VAR_2[1] = VAR_2[0];
  VAR_2[0] = VAR_4 = "help";

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   FUNC_1(&VAR_3, VAR_2[VAR_6]);
   if (!VAR_6)
    FUNC_1(&VAR_3, "--exclude-guides");
  }

  VAR_1++;
  VAR_2 = VAR_3.argv;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  FUNC_2(FUNC_4(VAR_5, VAR_1, VAR_2));
 FUNC_0(&VAR_3);
}
