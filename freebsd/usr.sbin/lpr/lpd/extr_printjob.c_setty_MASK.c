
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct printer {scalar_t__ mode_set; int printer; int baud_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct termios*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,struct termios*) ;
 int VAR_3 ;
 char* FUNC_4 (scalar_t__) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int ,struct termios*) ;
 int FUNC_8 (int ,int ,struct termios*) ;

__attribute__((used)) static void
FUNC_9(const struct printer *VAR_4)
{
 struct termios VAR_5;

 if (FUNC_2(VAR_3, VAR_2, (char *)0) < 0) {
  FUNC_6(VAR_0, "%s: ioctl(TIOCEXCL): %m", VAR_4->printer);
  FUNC_1(1);
 }
 if (FUNC_7(VAR_3, &VAR_5) < 0) {
  FUNC_6(VAR_0, "%s: tcgetattr: %m", VAR_4->printer);
  FUNC_1(1);
 }
 if (VAR_4->baud_rate > 0)
  FUNC_0(&VAR_5, VAR_4->baud_rate);
 if (VAR_4->mode_set) {
  char *VAR_6 = FUNC_4(VAR_4->mode_set), *VAR_7;

  while ((VAR_7 = FUNC_5(&VAR_6, ",")) != ((void*)0)) {
   (void) FUNC_3(VAR_7, &VAR_5);
  }
 }
 if (VAR_4->mode_set != 0 || VAR_4->baud_rate > 0) {
  if (FUNC_8(VAR_3, VAR_1, &VAR_5) == -1) {
   FUNC_6(VAR_0, "%s: tcsetattr: %m", VAR_4->printer);
  }
 }
}
