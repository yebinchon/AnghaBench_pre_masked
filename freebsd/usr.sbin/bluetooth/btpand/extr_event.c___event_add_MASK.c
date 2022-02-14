
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event {int flags; struct timeval timeout; int expire; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct timeval const*) ;

int
FUNC_4(struct event *VAR_3, const struct timeval *VAR_4)
{
 FUNC_1((VAR_3->flags & (VAR_2|VAR_0)) == 0);

 if (VAR_4 != ((void*)0)) {
  FUNC_2(&VAR_3->expire, ((void*)0));
  FUNC_3(&VAR_3->expire, VAR_4);
  VAR_3->timeout = *VAR_4;
  VAR_3->flags |= VAR_1;
 } else
  VAR_3->flags &= ~VAR_1;

 FUNC_0(VAR_3);

 return (0);
}
