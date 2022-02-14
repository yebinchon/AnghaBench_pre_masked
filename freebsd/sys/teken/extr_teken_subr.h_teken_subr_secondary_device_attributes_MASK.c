
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int teken_t ;


 int FUNC_0 (int const*,char const*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(const teken_t *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 == 0) {
  const char VAR_2[] = "\x1B[>0;10;0c";
  FUNC_0(VAR_0, VAR_2, sizeof VAR_2 - 1);
 } else {
  FUNC_1("Unknown DA2\n");
 }
}
