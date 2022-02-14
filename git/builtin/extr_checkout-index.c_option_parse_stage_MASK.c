
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 int FUNC_1 (char*) ;
 char VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_3,
         const char *VAR_4, int VAR_5)
{
 FUNC_0(VAR_5);

 if (!FUNC_3(VAR_4, "all")) {
  VAR_2 = 1;
  VAR_1 = VAR_0;
 } else {
  int VAR_6 = VAR_4[0];
  if ('1' <= VAR_6 && VAR_6 <= '3')
   VAR_1 = VAR_4[0] - '0';
  else
   FUNC_2(FUNC_1("stage should be between 1 and 3 or all"));
 }
 return 0;
}
