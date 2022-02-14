
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_1, off_t VAR_2)
{
 struct stat VAR_3;
 const char *VAR_4 = "/flocktempXXXXXX";
 size_t VAR_5;
 char *VAR_6;
 int VAR_7;

 if (FUNC_7(VAR_1, &VAR_3) == 0) {
  if (FUNC_0(VAR_3.st_mode)) {
   VAR_7 = FUNC_6(VAR_1, VAR_0);
   if (VAR_7 < 0)
    FUNC_1(1, "open(%s)", VAR_1);
   if (FUNC_3(VAR_7, VAR_2) < 0)
    FUNC_1(1, "ftruncate");
   return (VAR_7);
  }
 }

 VAR_5 = FUNC_10(VAR_1) + FUNC_10(VAR_4) + 1;
 VAR_6 = FUNC_4(VAR_5);
 FUNC_9(VAR_6, VAR_1);
 FUNC_8(VAR_6, VAR_4);
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 < 0)
  FUNC_1(1, "mkstemp");
 if (FUNC_3(VAR_7, VAR_2) < 0)
  FUNC_1(1, "ftruncate");
 if (FUNC_11(VAR_6) < 0)
  FUNC_1(1, "unlink");
 FUNC_2(VAR_6);

 return (VAR_7);
}
