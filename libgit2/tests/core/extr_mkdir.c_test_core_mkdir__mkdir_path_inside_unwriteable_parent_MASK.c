
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 int * FUNC_6 (int) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*,char*,int,int ,int *) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int) ;

void FUNC_12(void)
{
 struct stat VAR_2;
 mode_t *VAR_3;


 if (!FUNC_3())
  return;

 FUNC_1((VAR_3 = FUNC_6(sizeof(mode_t))) != ((void*)0));
 *VAR_3 = FUNC_11(022);
 FUNC_5(VAR_1, VAR_3);

 FUNC_2(FUNC_7("r", 0777, 0));
 FUNC_2(FUNC_8("mode/is/important", "r", 0777, VAR_0, ((void*)0)));
 FUNC_2(FUNC_9("r/mode", &VAR_2));
 FUNC_0(0755, VAR_2.st_mode);

 FUNC_4(FUNC_10("r/mode", 0111));
 FUNC_2(FUNC_9("r/mode", &VAR_2));
 FUNC_0(0111, VAR_2.st_mode);

 FUNC_2(
  FUNC_8("mode/is/okay/inside", "r", 0777, VAR_0, ((void*)0)));
 FUNC_2(FUNC_9("r/mode/is/okay/inside", &VAR_2));
 FUNC_0(0755, VAR_2.st_mode);

 FUNC_4(FUNC_10("r/mode", 0777));
}
