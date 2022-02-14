
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int ev_write; int ev_read; struct event_base* ev_base; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct event_base*,int *) ;

int
FUNC_4(struct event_base *VAR_0, struct bufferevent *VAR_1)
{
 int VAR_2 = -1;

 FUNC_1(VAR_1);
 if (!FUNC_0(VAR_1))
  goto done;

 VAR_1->ev_base = VAR_0;

 VAR_2 = FUNC_3(VAR_0, &VAR_1->ev_read);
 if (VAR_2 == -1)
  goto done;

 VAR_2 = FUNC_3(VAR_0, &VAR_1->ev_write);
done:
 FUNC_2(VAR_1);
 return VAR_2;
}
