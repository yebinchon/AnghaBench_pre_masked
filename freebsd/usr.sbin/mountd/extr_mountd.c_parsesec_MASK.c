
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exportlist {size_t ex_numsecflavors; int* ex_secflavors; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_6, struct exportlist *VAR_7)
{
 char *VAR_8, VAR_9;
 int VAR_10;

 VAR_7->ex_numsecflavors = 0;
 for (;;) {
  VAR_8 = FUNC_0(VAR_6, ':');
  if (VAR_8) {
   VAR_9 = *VAR_8;
   *VAR_8 = '\0';
  }

  if (!FUNC_1(VAR_6, "sys"))
   VAR_10 = VAR_0;
  else if (!FUNC_1(VAR_6, "krb5"))
   VAR_10 = VAR_3;
  else if (!FUNC_1(VAR_6, "krb5i"))
   VAR_10 = VAR_4;
  else if (!FUNC_1(VAR_6, "krb5p"))
   VAR_10 = VAR_5;
  else {
   if (VAR_8)
    *VAR_8 = VAR_9;
   FUNC_2(VAR_1, "bad sec flavor: %s", VAR_6);
   return (1);
  }
  if (VAR_7->ex_numsecflavors == VAR_2) {
   if (VAR_8)
    *VAR_8 = VAR_9;
   FUNC_2(VAR_1, "too many sec flavors: %s", VAR_6);
   return (1);
  }
  VAR_7->ex_secflavors[VAR_7->ex_numsecflavors] = VAR_10;
  VAR_7->ex_numsecflavors++;
  if (VAR_8) {
   *VAR_8 = VAR_9;
   VAR_6 = VAR_8 + 1;
  } else {
   break;
  }
 }
 return (0);
}
