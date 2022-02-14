
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int deferred; } ;
struct bufferevent {int ev_write; int ev_read; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

int
FUNC_6(struct bufferevent *VAR_0, int VAR_1)
{
 int VAR_2 = -1;
 struct bufferevent_private *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(VAR_0);
 if (!FUNC_0(VAR_0))
  goto done;

 if (FUNC_5(&VAR_0->ev_read, VAR_1) == -1)
  goto done;
 if (FUNC_5(&VAR_0->ev_write, VAR_1) == -1)
  goto done;

 FUNC_4(&VAR_3->deferred, VAR_1);

 VAR_2 = 0;
done:
 FUNC_2(VAR_0);
 return VAR_2;
}
