
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char**) ;
 scalar_t__ FUNC_3 (int,char**) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 char** FUNC_6 (int,char**) ;

int FUNC_7(int VAR_3, char **VAR_4) {
  if (FUNC_3(VAR_3, VAR_4))
    return VAR_0;

  VAR_4 = FUNC_6(VAR_3, VAR_4);

  switch (VAR_3) {
  case 1: return FUNC_5(0);
  case 2: return FUNC_2(VAR_3, VAR_4);
  case 3: return FUNC_4(VAR_4[1], VAR_4[2]);
  case 4: return FUNC_2(VAR_3, VAR_4);
  default:
    FUNC_1(VAR_2, "Too many arguments.\n");
    FUNC_0(VAR_2);
    return VAR_0;
  }


  return VAR_1;

}
