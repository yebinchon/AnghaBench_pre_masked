
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_info {scalar_t__ n_added; } ;
struct evbuffer {int dummy; } ;
struct bufferevent_private {int write_suspended; } ;
struct bufferevent {int enabled; int timeout_write; int ev_write; } ;


 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_3(struct evbuffer *VAR_1,
    const struct evbuffer_cb_info *VAR_2,
    void *VAR_3)
{
 struct bufferevent *VAR_4 = VAR_3;
 struct bufferevent_private *VAR_5 = FUNC_0(VAR_4);

 if (VAR_2->n_added &&
     (VAR_4->enabled & VAR_0) &&
     !FUNC_2(&VAR_4->ev_write, VAR_0, ((void*)0)) &&
     !VAR_5->write_suspended) {


  if (FUNC_1(&VAR_4->ev_write, &VAR_4->timeout_write) == -1) {

  }
 }
}
