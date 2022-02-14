
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_cb_info {int dummy; } ;
struct evbuffer {int dummy; } ;
struct bufferevent_filtered {TYPE_1__* underlying; int inbuf_cb; scalar_t__ got_eof; } ;
struct bufferevent {int input; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
struct TYPE_2__ {int input; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 int FUNC_1 (struct bufferevent*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct bufferevent_filtered*) ;
 int FUNC_3 (struct bufferevent_filtered*,int) ;
 struct bufferevent* FUNC_4 (struct bufferevent_filtered*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct evbuffer *VAR_3,
    const struct evbuffer_cb_info *VAR_4, void *VAR_5)
{
 struct bufferevent_filtered *VAR_6 = VAR_5;
 enum bufferevent_flush_mode VAR_7;
 struct bufferevent *VAR_8 = FUNC_4(VAR_6);

 FUNC_0(VAR_8);

 if (VAR_6->got_eof)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;


 if (!FUNC_3(VAR_6, VAR_7)) {




  FUNC_5(VAR_8->input, VAR_6->inbuf_cb,
   VAR_2);
  if (FUNC_6(VAR_6->underlying->input) > 0)
   FUNC_2(VAR_6->underlying, VAR_6);
 }

 FUNC_1(VAR_8);
}
