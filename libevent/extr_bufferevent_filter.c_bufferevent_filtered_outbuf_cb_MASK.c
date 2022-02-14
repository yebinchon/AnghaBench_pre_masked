
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_info {scalar_t__ n_added; } ;
struct evbuffer {int dummy; } ;
struct bufferevent_filtered {int dummy; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent_filtered*,int ,int*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent* FUNC_3 (struct bufferevent_filtered*) ;

__attribute__((used)) static void
FUNC_4(struct evbuffer *VAR_1,
    const struct evbuffer_cb_info *VAR_2, void *VAR_3)
{
 struct bufferevent_filtered *VAR_4 = VAR_3;
 struct bufferevent *VAR_5 = FUNC_3(VAR_4);

 if (VAR_2->n_added) {
  int VAR_6 = 0;


  FUNC_2(VAR_5);
  FUNC_0(VAR_4, VAR_0, &VAR_6);
  FUNC_1(VAR_5);
 }
}
