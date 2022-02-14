
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const**,char**,char const*,int,int,int,int) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;

pid_t FUNC_4(const char *VAR_2, const char **VAR_3, char **VAR_4,
       const char *VAR_5,
       int VAR_6, int VAR_7, int VAR_8)
{
 pid_t VAR_9;
 char *VAR_10 = FUNC_3(VAR_2, 0);

 if (!VAR_10) {
  VAR_1 = VAR_0;
  VAR_9 = -1;
 }
 else {
  const char *VAR_11 = FUNC_2(VAR_10);

  if (VAR_11) {
   const char *VAR_12 = VAR_3[0];
   char *VAR_13 = FUNC_3(VAR_11, 1);
   VAR_3[0] = VAR_10;
   if (!VAR_13) {
    VAR_1 = VAR_0;
    VAR_9 = -1;
   }
   else {
    VAR_9 = FUNC_1(VAR_13, VAR_3, VAR_4, VAR_5, 1,
             VAR_6, VAR_7, VAR_8);
    FUNC_0(VAR_13);
   }
   VAR_3[0] = VAR_12;
  }
  else
   VAR_9 = FUNC_1(VAR_10, VAR_3, VAR_4, VAR_5, 0,
            VAR_6, VAR_7, VAR_8);
  FUNC_0(VAR_10);
 }
 return VAR_9;
}
