
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {scalar_t__ Term; int oldtio; int fd_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;

void
FUNC_2(struct prompt *VAR_5)
{
  int VAR_6;

  VAR_6 = FUNC_0(VAR_5->fd_in, VAR_0, 0);
  if (VAR_6 > 0) {
    VAR_6 &= ~VAR_2;
    FUNC_0(VAR_5->fd_in, VAR_1, VAR_6);
  }

  if (VAR_5->Term == VAR_4)
    FUNC_1(VAR_5->fd_in, VAR_3, &VAR_5->oldtio);
}
