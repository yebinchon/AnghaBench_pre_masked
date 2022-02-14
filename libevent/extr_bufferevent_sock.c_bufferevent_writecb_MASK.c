
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {scalar_t__ write_suspended; scalar_t__ connecting; scalar_t__ connection_refused; } ;
struct bufferevent {int enabled; int ev_write; int output; int ev_read; } ;
typedef int evutil_socket_t ;
typedef int ev_ssize_t ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 scalar_t__ FUNC_0 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (int) ;
 short VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*) ;
 int FUNC_5 (struct bufferevent_private*,int) ;
 int FUNC_6 (struct bufferevent*,int) ;
 int FUNC_7 (struct bufferevent_private*) ;
 int FUNC_8 (struct bufferevent*) ;
 int FUNC_9 (struct bufferevent*,short,int ) ;
 int FUNC_10 (struct bufferevent*,int ) ;
 int FUNC_11 (struct bufferevent*,int,int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void
FUNC_19(evutil_socket_t VAR_7, short VAR_8, void *VAR_9)
{
 struct bufferevent *VAR_10 = VAR_9;
 struct bufferevent_private *VAR_11 = FUNC_1(VAR_10);
 int VAR_12 = 0;
 short VAR_13 = VAR_4;
 int VAR_14 = 0;
 ev_ssize_t VAR_15 = -1;

 FUNC_8(VAR_10);

 if (VAR_8 == VAR_5) {



  VAR_13 |= VAR_3;
  goto error;
 }
 if (VAR_11->connecting) {
  int VAR_16 = FUNC_17(VAR_7);


  if (VAR_11->connection_refused) {
   VAR_11->connection_refused = 0;
   VAR_16 = -1;
  }

  if (VAR_16 == 0)
   goto done;

  VAR_11->connecting = 0;
  if (VAR_16 < 0) {
   FUNC_16(&VAR_10->ev_write);
   FUNC_16(&VAR_10->ev_read);
   FUNC_9(VAR_10, VAR_2, 0);
   goto done;
  } else {
   VAR_14 = 1;
   FUNC_10(VAR_10, VAR_7);
   FUNC_9(VAR_10,
     VAR_0, 0);
   if (!(VAR_10->enabled & VAR_6) ||
       VAR_11->write_suspended) {
    FUNC_16(&VAR_10->ev_write);
    goto done;
   }
  }
 }

 VAR_15 = FUNC_7(VAR_11);

 if (VAR_11->write_suspended)
  goto done;

 if (FUNC_13(VAR_10->output)) {
  FUNC_14(VAR_10->output, 1);
  VAR_12 = FUNC_15(VAR_10->output, VAR_7, VAR_15);
  FUNC_12(VAR_10->output, 1);
  if (VAR_12 == -1) {
   int VAR_17 = FUNC_18(VAR_7);
   if (FUNC_2(VAR_17))
    goto reschedule;
   VAR_13 |= VAR_2;
  } else if (VAR_12 == 0) {




   VAR_13 |= VAR_1;
  }
  if (VAR_12 <= 0)
   goto error;

  FUNC_5(VAR_11, VAR_12);
 }

 if (FUNC_13(VAR_10->output) == 0) {
  FUNC_16(&VAR_10->ev_write);
 }





 if (VAR_12 || !VAR_14) {
  FUNC_11(VAR_10, VAR_6, 0);
 }

 goto done;

 reschedule:
 if (FUNC_13(VAR_10->output) == 0) {
  FUNC_16(&VAR_10->ev_write);
 }
 goto done;

 error:
 FUNC_6(VAR_10, VAR_6);
 FUNC_9(VAR_10, VAR_13, 0);

 done:
 FUNC_4(VAR_10);
}
