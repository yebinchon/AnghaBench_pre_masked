
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char,int ) ;
 int VAR_3 ;
 char* FUNC_2 (char*,char**) ;
 char* FUNC_3 (char*,int,int) ;
 int FUNC_4 (char const*,int,int ) ;

int
FUNC_5(void)
{
 int VAR_4;
 char *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 char VAR_10[1024];
 const char *VAR_11;

 VAR_5 = VAR_10;
 VAR_9 = FUNC_2("st", &VAR_5);

 if (VAR_9 && (VAR_6 = FUNC_2("ct", &VAR_5))) {
  (void)FUNC_1('\r', VAR_3);
  FUNC_4(VAR_6, 0, VAR_2);
 }

 VAR_7 = FUNC_2("ch", &VAR_5);
 VAR_8 = VAR_7 ? ((void*)0) : FUNC_2("cm", &VAR_5);

 if (VAR_9) {
  for (VAR_4 = 8; VAR_4 < VAR_0; VAR_4 += 8) {




   VAR_11 = "OOPS";
   if (VAR_7)
    VAR_11 = FUNC_3(VAR_7, 0, VAR_4);
   if (*VAR_11 == 'O' && VAR_8)
    VAR_11 = FUNC_3(VAR_8, VAR_4, VAR_1 - 1);
   if (*VAR_11 != 'O')
    FUNC_4(VAR_11, 1, VAR_2);
   else
    (void)FUNC_0(VAR_3, "%s", "        ");

   FUNC_4(VAR_9, 0, VAR_2);
  }
  FUNC_1('\r', VAR_3);
  return (1);
 }
 return (0);
}
