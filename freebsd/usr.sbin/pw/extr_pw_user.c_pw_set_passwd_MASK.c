
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; } ;
struct passwd {char* pw_passwd; int pw_name; } ;
typedef int login_cap_t ;
typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct passwd*) ;
 int * FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (char*,char*,char*,int ) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int,char*,int) ;
 int VAR_5 ;
 int * FUNC_11 (char*,char) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char*,char*) ;
 int FUNC_14 (int,struct termios*) ;
 int FUNC_15 (int,int ,struct termios*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(struct passwd *VAR_6, int VAR_7, bool VAR_8, bool VAR_9)
{
 int VAR_10, VAR_11;
 struct termios VAR_12, VAR_13;
 login_cap_t *VAR_14;
 char VAR_15[VAR_4+1];
 char *VAR_16;

 if (VAR_7 == '-') {
  if (!VAR_6->pw_passwd || *VAR_6->pw_passwd != '*') {
   VAR_6->pw_passwd = "*";
   return (1);
  }
  return (0);
 }

 if ((VAR_11 = FUNC_4(VAR_7))) {
  if (FUNC_14(VAR_7, &VAR_12) == -1)
   VAR_11 = 0;
  else {
   VAR_13 = VAR_12;
   VAR_13.c_lflag &= ~(VAR_0);
   FUNC_15(VAR_7, VAR_3, &VAR_13);
   FUNC_8("%s%spassword for user %s:",
       VAR_9 ? "new " : "",
       VAR_8 ? "encrypted " : "",
       VAR_6->pw_name);
   FUNC_2(VAR_5);
  }
 }
 VAR_10 = FUNC_10(VAR_7, VAR_15, sizeof(VAR_15) - 1);
 if (VAR_11) {
  FUNC_15(VAR_7, VAR_3, &VAR_12);
  FUNC_3('\n', VAR_5);
  FUNC_2(VAR_5);
 }

 if (VAR_10 < 0)
  FUNC_0(VAR_2, "-%c file descriptor",
      VAR_8 ? 'H' : 'h');
 VAR_15[VAR_10] = '\0';
 if ((VAR_16 = FUNC_13(VAR_15, "\r\n")) != ((void*)0))
  *VAR_16 = '\0';
 if (!*VAR_15)
  FUNC_1(VAR_1, "empty password read on file descriptor %d",
      VAR_7);
 if (VAR_8) {
  if (FUNC_11(VAR_15, ':') != ((void*)0))
   FUNC_1(VAR_1, "bad encrypted password");
  VAR_6->pw_passwd = FUNC_12(VAR_15);
 } else {
  VAR_14 = FUNC_6(VAR_6);
  if (VAR_14 == ((void*)0) ||
    FUNC_7(VAR_14, "sha512", ((void*)0)) == ((void*)0))
   FUNC_16("setting crypt(3) format");
  FUNC_5(VAR_14);
  VAR_6->pw_passwd = FUNC_9(VAR_15);
 }
 return (1);
}
