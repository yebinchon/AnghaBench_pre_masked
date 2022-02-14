
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cb_func; } ;
struct evbuffer_cb_entry {int flags; void* cbarg; TYPE_1__ cb; } ;
struct evbuffer {int callbacks; } ;
typedef int evbuffer_cb_func ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int *,struct evbuffer_cb_entry*,int ) ;
 struct evbuffer_cb_entry* FUNC_3 (int,int) ;
 int VAR_1 ;

struct evbuffer_cb_entry *
FUNC_4(struct evbuffer *VAR_2, evbuffer_cb_func VAR_3, void *VAR_4)
{
 struct evbuffer_cb_entry *VAR_5;
 if (! (VAR_5 = FUNC_3(1, sizeof(struct evbuffer_cb_entry))))
  return ((void*)0);
 FUNC_0(VAR_2);
 VAR_5->cb.cb_func = VAR_3;
 VAR_5->cbarg = VAR_4;
 VAR_5->flags = VAR_0;
 FUNC_2(&VAR_2->callbacks, VAR_5, VAR_1);
 FUNC_1(VAR_2);
 return VAR_5;
}
