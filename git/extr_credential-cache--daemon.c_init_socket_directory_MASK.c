
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,struct stat*) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(const char *VAR_1)
{
 struct stat VAR_2;
 char *VAR_3 = FUNC_9(VAR_1);
 char *VAR_4 = FUNC_4(VAR_3);

 if (!FUNC_8(VAR_4, &VAR_2)) {
  if (VAR_2.st_mode & 077)
   FUNC_2(FUNC_0(VAR_0), VAR_4);
 } else {






  if (FUNC_7(VAR_4) < 0)
   FUNC_3("unable to create directories for '%s'", VAR_4);
  if (FUNC_6(VAR_4, 0700) < 0)
   FUNC_3("unable to mkdir '%s'", VAR_4);
 }

 if (FUNC_1(VAR_4))





  ;

 FUNC_5(VAR_3);
}
