
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_5, int *VAR_6, int VAR_7)
{

 if (FUNC_1(VAR_5, "minimum") == 0 || FUNC_1(VAR_5, "min") == 0)
  *VAR_6 = VAR_3;
 else if (FUNC_1(VAR_5, "maximum") == 0 || FUNC_1(VAR_5, "max") == 0)
  *VAR_6 = VAR_2;
 else if (FUNC_1(VAR_5, "adaptive") == 0 || FUNC_1(VAR_5, "adp") == 0)
  *VAR_6 = VAR_0;
 else if (FUNC_1(VAR_5, "hiadaptive") == 0 || FUNC_1(VAR_5, "hadp") == 0)
  *VAR_6 = VAR_1;
 else
  FUNC_0(1, "bad option: -%c %s", (char)VAR_7, VAR_4);
}
