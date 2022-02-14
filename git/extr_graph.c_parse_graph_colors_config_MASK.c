
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*,char*) ;
 int FUNC_2 (char const*,int,char*) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int,char const*) ;

__attribute__((used)) static void FUNC_6(struct argv_array *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5;

 VAR_5 = VAR_3;
 VAR_4 = VAR_3 + FUNC_4(VAR_3);
 while (VAR_5 < VAR_4) {
  const char *VAR_6 = FUNC_3(VAR_5, ',');
  char VAR_7[VAR_0];

  if (!FUNC_2(VAR_5, VAR_6 - VAR_5, VAR_7))
   FUNC_1(VAR_2, VAR_7);
  else
   FUNC_5(FUNC_0("ignore invalid color '%.*s' in log.graphColors"),
    (int)(VAR_6 - VAR_5), VAR_5);
  VAR_5 = VAR_6 + 1;
 }
 FUNC_1(VAR_2, VAR_1);
}
