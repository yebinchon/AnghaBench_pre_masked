
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct object_id {int dummy; } ;
typedef int ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct object_id*) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (char const*,char*,int) ;
 scalar_t__ FUNC_9 (char*,char*,char const**) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

int FUNC_11(const char *VAR_1)
{
 struct stat VAR_2;
 char VAR_3[256];
 const char *VAR_4;
 struct object_id VAR_5;
 int VAR_6;
 ssize_t VAR_7;

 if (FUNC_4(VAR_1, &VAR_2) < 0)
  return -1;


 if (FUNC_0(VAR_2.st_mode)) {
  VAR_7 = FUNC_8(VAR_1, VAR_3, sizeof(VAR_3)-1);
  if (VAR_7 >= 5 && !FUNC_5("refs/", VAR_3, 5))
   return 0;
  return -1;
 }




 VAR_6 = FUNC_6(VAR_1, VAR_0);
 if (VAR_6 < 0)
  return -1;
 VAR_7 = FUNC_7(VAR_6, VAR_3, sizeof(VAR_3)-1);
 FUNC_1(VAR_6);

 if (VAR_7 < 0)
  return -1;
 VAR_3[VAR_7] = '\0';




 if (FUNC_9(VAR_3, "ref:", &VAR_4)) {
  while (FUNC_3(*VAR_4))
   VAR_4++;
  if (FUNC_10(VAR_4, "refs/"))
   return 0;
 }




 if (!FUNC_2(VAR_3, &VAR_5))
  return 0;

 return -1;
}
