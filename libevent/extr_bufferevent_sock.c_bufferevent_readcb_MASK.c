
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {int dummy; } ;
struct bufferevent_private {int connection_refused; scalar_t__ read_suspended; } ;
struct TYPE_2__ {scalar_t__ high; } ;
struct bufferevent {TYPE_1__ wm_read; struct evbuffer* input; } ;
typedef int evutil_socket_t ;
typedef scalar_t__ ev_ssize_t ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 short VAR_5 ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent_private*,int) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 scalar_t__ FUNC_6 (struct bufferevent_private*) ;
 int FUNC_7 (struct bufferevent*) ;
 int FUNC_8 (struct bufferevent*,short,int ) ;
 int FUNC_9 (struct bufferevent*,int ,int ) ;
 int FUNC_10 (struct bufferevent*) ;
 int FUNC_11 (struct evbuffer*,int ) ;
 scalar_t__ FUNC_12 (struct evbuffer*) ;
 int FUNC_13 (struct evbuffer*,int ,int) ;
 int FUNC_14 (struct evbuffer*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(evutil_socket_t VAR_6, short VAR_7, void *VAR_8)
{
 struct bufferevent *VAR_9 = VAR_8;
 struct bufferevent_private *VAR_10 = FUNC_0(VAR_9);
 struct evbuffer *VAR_11;
 int VAR_12 = 0;
 short VAR_13 = VAR_2;
 ev_ssize_t VAR_14 = -1, VAR_15=-1;

 FUNC_7(VAR_9);

 if (VAR_7 == VAR_5) {



  VAR_13 |= VAR_3;
  goto error;
 }

 VAR_11 = VAR_9->input;





 if (VAR_9->wm_read.high != 0) {
  VAR_14 = VAR_9->wm_read.high - FUNC_12(VAR_11);

  if (VAR_14 <= 0) {
   FUNC_10(VAR_9);
   goto done;
  }
 }
 VAR_15 = FUNC_6(VAR_10);
 if (VAR_14 < 0 || VAR_14 > VAR_15)

  VAR_14 = VAR_15;
 if (VAR_10->read_suspended)
  goto done;

 FUNC_14(VAR_11, 0);
 VAR_12 = FUNC_13(VAR_11, VAR_6, (int)VAR_14);
 FUNC_11(VAR_11, 0);

 if (VAR_12 == -1) {
  int VAR_16 = FUNC_15(VAR_6);
  if (FUNC_2(VAR_16))
   goto reschedule;
  if (FUNC_1(VAR_16)) {
   VAR_10->connection_refused = 1;
   goto done;
  }

  VAR_13 |= VAR_1;
 } else if (VAR_12 == 0) {

  VAR_13 |= VAR_0;
 }

 if (VAR_12 <= 0)
  goto error;

 FUNC_4(VAR_10, VAR_12);


 FUNC_9(VAR_9, VAR_4, 0);

 goto done;

 reschedule:
 goto done;

 error:
 FUNC_5(VAR_9, VAR_4);
 FUNC_8(VAR_9, VAR_13, 0);

 done:
 FUNC_3(VAR_9);
}
