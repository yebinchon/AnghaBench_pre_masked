
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,int*) ;
 struct passwd* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(int VAR_3, char *VAR_4[])
{
 struct passwd *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_9 = VAR_1;
 VAR_10 = 0;
 VAR_3--, VAR_4++;
 if (VAR_3 < 2)
  FUNC_5();
 if (FUNC_4(*VAR_4, "-n") == 0) {
  VAR_7 = 1;
  VAR_3--, VAR_4++;
  if (VAR_3 < 2)
   FUNC_5();
 }
 if (FUNC_2("priority", *VAR_4, &VAR_8))
  return (1);
 VAR_3--, VAR_4++;
 for (; VAR_3 > 0; VAR_3--, VAR_4++) {
  if (FUNC_4(*VAR_4, "-g") == 0) {
   VAR_9 = VAR_0;
   continue;
  }
  if (FUNC_4(*VAR_4, "-u") == 0) {
   VAR_9 = VAR_2;
   continue;
  }
  if (FUNC_4(*VAR_4, "-p") == 0) {
   VAR_9 = VAR_1;
   continue;
  }
  if (VAR_9 == VAR_2) {
   if ((VAR_5 = FUNC_3(*VAR_4)) != ((void*)0))
    VAR_10 = VAR_5->pw_uid;
   else if (FUNC_2("uid", *VAR_4, &VAR_10)) {
    VAR_6++;
    continue;
   } else if (VAR_10 < 0) {
    FUNC_6("%s: bad value", *VAR_4);
    VAR_6++;
    continue;
   }
  } else {
   if (FUNC_2("pid", *VAR_4, &VAR_10)) {
    VAR_6++;
    continue;
   }
   if (VAR_10 < 0) {
    FUNC_6("%s: bad value", *VAR_4);
    VAR_6++;
    continue;
   }
  }
  VAR_6 += FUNC_0(VAR_9, VAR_10, VAR_8, VAR_7);
 }
 FUNC_1(VAR_6 != 0);
}
