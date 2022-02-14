
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyfd {int rfd; } ;
struct termios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct termios*) ;
 int FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,int ,struct termios*) ;
 struct termios VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct ttyfd *VAR_5)
{
 struct termios VAR_6, VAR_7;

 FUNC_2(VAR_5->rfd, &VAR_6);
 VAR_7 = VAR_6;
 FUNC_1(&VAR_7);
 VAR_7.c_cflag |= VAR_0;
 FUNC_3(VAR_5->rfd, VAR_1, &VAR_7);
 if (VAR_4) {
  VAR_2 = VAR_6;
  FUNC_0(VAR_3);
 }
}
