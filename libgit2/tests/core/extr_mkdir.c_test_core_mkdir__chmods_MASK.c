
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,char*,int,int,int *) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (int) ;

void FUNC_8(void)
{
 struct stat VAR_4;
 mode_t *VAR_5 = FUNC_3(sizeof(mode_t));
 *VAR_5 = FUNC_7(022);

 FUNC_2(VAR_3, VAR_5);

 FUNC_1(FUNC_4("r", 0777, 0));

 FUNC_1(FUNC_5("mode/is/important", "r", 0777, VAR_2, ((void*)0)));

 FUNC_1(FUNC_6("r/mode", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode/is", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode/is/important", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);

 FUNC_1(FUNC_5("mode2/is2/important2", "r", 0777, VAR_2 | VAR_0, ((void*)0)));

 FUNC_1(FUNC_6("r/mode2", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode2/is2", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode2/is2/important2", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);

 FUNC_1(FUNC_5("mode3/is3/important3", "r", 0777, VAR_2 | VAR_1, ((void*)0)));

 FUNC_1(FUNC_6("r/mode3", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode3/is3", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode3/is3/important3", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);



 FUNC_1(FUNC_5("mode/is/important", "r", 0777, VAR_2 | VAR_0, ((void*)0)));

 FUNC_1(FUNC_6("r/mode", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode/is", &VAR_4));
 FUNC_0(0755, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode/is/important", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);



 FUNC_1(FUNC_5("mode2/is2/important2.1", "r", 0777, VAR_2 | VAR_1, ((void*)0)));

 FUNC_1(FUNC_6("r/mode2", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode2/is2", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);
 FUNC_1(FUNC_6("r/mode2/is2/important2.1", &VAR_4));
 FUNC_0(0777, VAR_4.st_mode);
}
