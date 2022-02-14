
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_info {scalar_t__ n_added; scalar_t__ n_deleted; } ;
struct evbuffer {int dummy; } ;
struct bufferevent_pair {struct bufferevent_pair* partner; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct bufferevent_pair*,struct bufferevent_pair*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bufferevent_pair*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct evbuffer *VAR_0,
    const struct evbuffer_cb_info *VAR_1, void *VAR_2)
{
 struct bufferevent_pair *VAR_3 = VAR_2;
 struct bufferevent_pair *VAR_4 = VAR_3->partner;

 FUNC_4(FUNC_3(VAR_3));

 if (VAR_1->n_added > VAR_1->n_deleted && VAR_4) {


  if (FUNC_1(VAR_3, VAR_4)) {
   FUNC_0(FUNC_3(VAR_3), FUNC_3(VAR_4), 0);
  }
 }

 FUNC_2(FUNC_3(VAR_3));
}
