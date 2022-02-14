
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int ans ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5)
{
 struct stat VAR_6;
 int VAR_7 = 1;

 if (VAR_2 == 0 && FUNC_4(VAR_5, &VAR_6) == 0) {
  if (VAR_1)
   FUNC_5(VAR_5);
  else if (FUNC_2(VAR_0)) {
   char VAR_8[10] = { 'n', '\0' };

   FUNC_1(VAR_3, "%s already exists -- do you wish to "
     "overwrite (y or n)? " , VAR_5);
   (void)FUNC_0(VAR_8, sizeof(VAR_8) - 1, VAR_4);
   if (VAR_8[0] != 'y' && VAR_8[0] != 'Y') {
    FUNC_1(VAR_3, "\tnot overwriting\n");
    VAR_7 = 0;
   } else
    FUNC_5(VAR_5);
  } else {
   FUNC_3("%s already exists -- skipping", VAR_5);
   VAR_7 = 0;
  }
 }
 return VAR_7;
}
