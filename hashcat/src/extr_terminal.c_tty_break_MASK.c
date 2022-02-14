
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int* c_cc; int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 struct termios VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,struct termios*) ;
 int FUNC_2 (int ,int ,struct termios*) ;

int FUNC_3()
{
  struct termios VAR_7;

  if (FUNC_1 (FUNC_0 (VAR_6), &VAR_5) < 0) return -1;

  VAR_4 = 1;

  VAR_7 = VAR_5;
  VAR_7.c_lflag &= ~VAR_0;
  VAR_7.c_cc[VAR_2] = 1;
  VAR_7.c_cc[VAR_3] = 0;

  return FUNC_2 (FUNC_0 (VAR_6), VAR_1, &VAR_7);
}
