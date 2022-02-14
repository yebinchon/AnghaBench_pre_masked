
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char const*,size_t*,size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, const char VAR_3, const char *VAR_4)
{
 size_t VAR_5;


 VAR_5 = 0;
 if (VAR_2) {

  FUNC_0(VAR_2, &VAR_5, VAR_1);

 }


 for (; VAR_5 < VAR_1; ++VAR_5)
  FUNC_2(' ');


 if (VAR_3 == ' ' && !VAR_4) {
  FUNC_1(" (\n");
  return;
 }





 if (!VAR_4) {
  FUNC_1(" %c\n", VAR_3);
  return;
 }
 FUNC_1(" %c ", VAR_3);
 VAR_5 += 3;


 FUNC_0(VAR_4, &VAR_5, VAR_0);

 FUNC_2('\n');
}
