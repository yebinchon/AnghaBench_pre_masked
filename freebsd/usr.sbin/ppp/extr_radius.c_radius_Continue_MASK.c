
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_5__ {int load; } ;
struct TYPE_4__ {TYPE_2__ timer; int fd; int rad; } ;
struct radius {TYPE_1__ cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int *,struct timeval*) ;
 int FUNC_3 (struct radius*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(struct radius *VAR_4, int VAR_5)
{
  struct timeval VAR_6;
  int VAR_7;

  FUNC_5(&VAR_4->cx.timer);
  if ((VAR_7 = FUNC_2(VAR_4->cx.rad, VAR_5, &VAR_4->cx.fd, &VAR_6)) == 0) {
    FUNC_1(FUNC_0(VAR_1) ? VAR_1 : VAR_0,
        "Radius: Request re-sent\n");
    VAR_4->cx.timer.load = VAR_6.tv_usec / VAR_3 + VAR_6.tv_sec * VAR_2;
    FUNC_4(&VAR_4->cx.timer);
    return;
  }

  FUNC_3(VAR_4, VAR_7);
}
