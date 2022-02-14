
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evbuffer_cb_info {scalar_t__ orig_size; scalar_t__ n_added; } ;
struct evbuffer {int dummy; } ;
struct TYPE_3__ {int timeout_write; int ev_write; } ;
struct TYPE_4__ {TYPE_1__ bev; } ;
struct bufferevent_openssl {scalar_t__ state; scalar_t__ underlying; TYPE_2__ bev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct bufferevent_openssl*) ;

__attribute__((used)) static void
FUNC_2(struct evbuffer *VAR_1,
    const struct evbuffer_cb_info *VAR_2, void *VAR_3)
{
 struct bufferevent_openssl *VAR_4 = VAR_3;
 int VAR_5 = 0;


 if (VAR_2->n_added && VAR_4->state == VAR_0) {
  if (VAR_2->orig_size == 0)
   VAR_5 = FUNC_0(&VAR_4->bev.bev.ev_write,
       &VAR_4->bev.bev.timeout_write);

  if (VAR_4->underlying)
   FUNC_1(VAR_4);
 }

 (void)VAR_5;
}
