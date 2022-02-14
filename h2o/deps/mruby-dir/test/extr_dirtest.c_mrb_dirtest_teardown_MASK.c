
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (char const*) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

mrb_value
FUNC_12(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4;
  DIR *VAR_5;
  struct dirent *VAR_6;
  const char *VAR_7;


  VAR_4 = FUNC_2(VAR_1, VAR_2, FUNC_3(VAR_1, "sandbox"));
  VAR_7 = FUNC_6(VAR_1, VAR_4);

  VAR_5 = FUNC_8(VAR_7);
  while ((VAR_6 = FUNC_9(VAR_5)) != ((void*)0)) {
    if (FUNC_11(VAR_6->d_name, ".") == 0 || FUNC_11(VAR_6->d_name, "..") == 0)
      continue;
    if (FUNC_10(VAR_6->d_name) == -1) {
      FUNC_4(VAR_1, VAR_0, "rmdir(%S) failed", FUNC_5(VAR_1, VAR_6->d_name));
    }
  }
  FUNC_1(VAR_5);


  VAR_3 = FUNC_2(VAR_1, VAR_2, FUNC_3(VAR_1, "pwd"));
  VAR_7 = FUNC_6(VAR_1, VAR_3);
  if (FUNC_0(VAR_7) == -1) {
    FUNC_4(VAR_1, VAR_0, "chdir(%S) failed", VAR_3);
  }


  VAR_4 = FUNC_2(VAR_1, VAR_2, FUNC_3(VAR_1, "sandbox"));
  VAR_7 = FUNC_6(VAR_1, VAR_4);
  if (FUNC_10(VAR_7) == -1) {
    FUNC_4(VAR_1, VAR_0, "rmdir(%S) failed", VAR_4);
  }

  return FUNC_7();
}
