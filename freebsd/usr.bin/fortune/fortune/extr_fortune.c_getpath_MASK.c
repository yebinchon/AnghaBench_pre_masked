
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int * VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_3 ;
 void* FUNC_6 (int *) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_4, VAR_5;
 char *VAR_6, **VAR_7, *VAR_8, *VAR_9;

 VAR_5 = 1;
 VAR_1 = FUNC_4("FORTUNE_PATH");
 if (VAR_1 == ((void*)0)) {
  VAR_1 = VAR_0;
  VAR_5 = 0;
 }
 VAR_9 = FUNC_6(VAR_1);

 for (VAR_4 = 2, VAR_6 = VAR_9; *VAR_6 != '\0'; VAR_6++) {
  if (*VAR_6 == ':')
   VAR_4++;
 }

 VAR_7 = VAR_2 = (char **)FUNC_0(VAR_4, sizeof(char *));

 VAR_4 = 0;
 VAR_8 = FUNC_7(VAR_9, ":");
 while (VAR_8) {
  if (FUNC_5(VAR_8)) {
   VAR_4++;
   *VAR_7++ = VAR_8;
  }
  VAR_8 = FUNC_7(((void*)0), ":");
 }

 if (VAR_4 == 0) {
  if (VAR_5 == 1) {
   FUNC_2(VAR_3,
       "fortune: FORTUNE_PATH: None of the specified "
       "directories found.\n");
   FUNC_1(1);
  }
  FUNC_3(VAR_9);
  VAR_2[0] = FUNC_6(VAR_0);
 }
}
