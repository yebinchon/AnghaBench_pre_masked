
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {scalar_t__ Term; struct datalink* TermMode; int fd_in; int comtio; } ;
struct datalink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int *) ;

void
FUNC_2(struct prompt *VAR_5, struct datalink *VAR_6)
{
  int VAR_7;

  if (VAR_5->Term == VAR_4)
    FUNC_1(VAR_5->fd_in, VAR_3, &VAR_5->comtio);

  VAR_7 = FUNC_0(VAR_5->fd_in, VAR_0, 0);
  if (VAR_7 > 0) {
    VAR_7 &= ~VAR_2;
    FUNC_0(VAR_5->fd_in, VAR_1, VAR_7);
  }
  VAR_5->TermMode = VAR_6;
}
