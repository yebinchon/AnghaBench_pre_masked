
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct physical {int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct termios*) ;
 int FUNC_2 (int ,struct termios*) ;

__attribute__((used)) static unsigned
FUNC_3(struct physical *VAR_0)
{
  struct termios VAR_1;

  if (FUNC_2(VAR_0->fd, &VAR_1) == -1)
    return 0;

  return FUNC_0(FUNC_1(&VAR_1));
}
