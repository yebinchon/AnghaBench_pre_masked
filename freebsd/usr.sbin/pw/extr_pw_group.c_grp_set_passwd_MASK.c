
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int c_lflag; } ;
struct group {char* gr_passwd; char* gr_name; } ;
typedef int line ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (int,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_11(struct group *VAR_6, bool VAR_7, int VAR_8, bool VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct termios VAR_12, VAR_13;
 char *VAR_14, VAR_15[256];

 if (VAR_8 == -1)
  return;

 if (VAR_8 == '-') {
  VAR_6->gr_passwd = "*";
  return;
 }

 if ((VAR_11 = FUNC_4(VAR_8))) {
  VAR_13 = VAR_12;

  VAR_13.c_lflag &= ~(VAR_0);
  FUNC_10(VAR_8, VAR_3, &VAR_13);
  FUNC_5("%sassword for group %s:", VAR_7 ? "New p" : "P",
      VAR_6->gr_name);
  FUNC_2(VAR_5);
 }
 VAR_10 = FUNC_7(VAR_8, VAR_15, sizeof(VAR_15) - 1);
 if (VAR_11) {
  FUNC_10(VAR_8, VAR_3, &VAR_12);
  FUNC_3('\n', VAR_5);
  FUNC_2(VAR_5);
 }
 if (VAR_10 < 0)
  FUNC_0(VAR_2, "-h file descriptor");
 VAR_15[VAR_10] = '\0';
 if ((VAR_14 = FUNC_9(VAR_15, " \t\r\n")) != ((void*)0))
  *VAR_14 = '\0';
 if (!*VAR_15)
  FUNC_1(VAR_1, "empty password read on file descriptor %d",
      VAR_4.fd);
 if (VAR_9) {
  if (FUNC_8(VAR_15, ':') != 0)
   FUNC_1(VAR_1, "wrong encrypted passwrd");
  VAR_6->gr_passwd = VAR_15;
 } else
  VAR_6->gr_passwd = FUNC_6(VAR_15);
}
