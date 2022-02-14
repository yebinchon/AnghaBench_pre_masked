
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (char const*,int,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3, VAR_0 | VAR_2 | VAR_1, 0666);
 if (VAR_4 < 0)
  FUNC_2(FUNC_0("could not create archive file '%s'"), VAR_3);
 if (VAR_4 != 1) {
  if (FUNC_3(VAR_4, 1) < 0)
   FUNC_2(FUNC_0("could not redirect output"));
  else
   FUNC_1(VAR_4);
 }
}
