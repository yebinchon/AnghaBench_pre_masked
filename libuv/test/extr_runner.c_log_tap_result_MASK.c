
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int process_info_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int,char const*,char const*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

void FUNC_5(int VAR_1,
                    const char* VAR_2,
                    int VAR_3,
                    process_info_t* VAR_4) {
  const char* VAR_5;
  const char* VAR_6;
  char VAR_7[1024];
  int VAR_8;

  switch (VAR_3) {
  case 129:
    VAR_5 = "ok";
    VAR_6 = "";
    break;
  case 128:
    VAR_5 = "ok";
    VAR_6 = " # SKIP ";
    break;
  default:
    VAR_5 = "not ok";
    VAR_6 = "";
  }

  if (VAR_3 == 128 && FUNC_2(VAR_4) > 0) {
    FUNC_3(VAR_4, VAR_7, sizeof VAR_7);
    VAR_8 = FUNC_4(VAR_7);
    if (VAR_8 > 0 && VAR_7[VAR_8 - 1] == '\n')
      VAR_7[VAR_8 - 1] = '\0';
  } else {
    VAR_7[0] = '\0';
  }

  FUNC_1(VAR_0, "%s %d - %s%s%s\n", VAR_5, VAR_1, VAR_2, VAR_6, VAR_7);
  FUNC_0(VAR_0);
}
