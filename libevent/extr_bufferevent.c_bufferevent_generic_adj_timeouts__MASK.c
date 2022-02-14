
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int write_suspended; int read_suspended; } ;
struct bufferevent {short enabled; int ev_write; int timeout_write; int output; int ev_read; int timeout_read; } ;


 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 short const VAR_0 ;
 short const VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(struct bufferevent *VAR_2)
{
 const short VAR_3 = VAR_2->enabled;
 struct bufferevent_private *VAR_4 = FUNC_0(VAR_2);
 int VAR_5=0, VAR_6=0;
 if ((VAR_3 & VAR_0) && !VAR_4->read_suspended &&
     FUNC_4(&VAR_2->timeout_read))
  VAR_5 = FUNC_2(&VAR_2->ev_read, &VAR_2->timeout_read);
 else
  VAR_5 = FUNC_3(&VAR_2->ev_read);

 if ((VAR_3 & VAR_1) && !VAR_4->write_suspended &&
     FUNC_4(&VAR_2->timeout_write) &&
     FUNC_1(VAR_2->output))
  VAR_6 = FUNC_2(&VAR_2->ev_write, &VAR_2->timeout_write);
 else
  VAR_6 = FUNC_3(&VAR_2->ev_write);
 if (VAR_5 < 0 || VAR_6 < 0)
  return -1;
 return 0;
}
