
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct url {char* scheme; char* host; int port; char* user; char* pwd; } ;
struct termios {int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct termios*) ;
 int FUNC_4 (int ,int,struct termios*) ;

__attribute__((used)) static int
FUNC_5(struct url *VAR_9)
{
 struct termios VAR_10;
 tcflag_t VAR_11;
 int VAR_12, VAR_13;

 FUNC_1(VAR_7, "Authentication required for <%s://%s:%d/>!\n",
     VAR_9->scheme, VAR_9->host, VAR_9->port);

 FUNC_1(VAR_7, "Login: ");
 if (FUNC_0(VAR_9->user, sizeof VAR_9->user, VAR_8) == ((void*)0))
  return (-1);
 for (VAR_12 = FUNC_2(VAR_9->user); VAR_12 >= 0; --VAR_12)
  if (VAR_9->user[VAR_12] == '\r' || VAR_9->user[VAR_12] == '\n')
   VAR_9->user[VAR_12] = '\0';

 FUNC_1(VAR_7, "Password: ");
 if (FUNC_3(VAR_3, &VAR_10) == 0) {
  VAR_11 = VAR_10.c_lflag;
  VAR_10.c_lflag &= ~VAR_0;
  VAR_10.c_lflag |= VAR_1|VAR_2;
  FUNC_4(VAR_3, VAR_4|VAR_6, &VAR_10);
  VAR_13 = (FUNC_0(VAR_9->pwd, sizeof VAR_9->pwd, VAR_8) == ((void*)0));
  VAR_10.c_lflag = VAR_11;
  FUNC_4(VAR_3, VAR_5|VAR_6, &VAR_10);
 } else {
  VAR_13 = (FUNC_0(VAR_9->pwd, sizeof VAR_9->pwd, VAR_8) == ((void*)0));
 }
 if (VAR_13)
  return (-1);
 for (VAR_12 = FUNC_2(VAR_9->pwd); VAR_12 >= 0; --VAR_12)
  if (VAR_9->pwd[VAR_12] == '\r' || VAR_9->pwd[VAR_12] == '\n')
   VAR_9->pwd[VAR_12] = '\0';

 return (0);
}
