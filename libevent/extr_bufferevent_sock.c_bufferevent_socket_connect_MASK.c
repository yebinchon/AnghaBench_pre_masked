
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct bufferevent_private {int connecting; } ;
struct bufferevent {int ev_base; int ev_write; } ;
typedef scalar_t__ evutil_socket_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bufferevent*,int) ;
 scalar_t__ FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*,scalar_t__,struct sockaddr const*,int) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (struct bufferevent*,int) ;
 scalar_t__ FUNC_7 (struct bufferevent*) ;
 int FUNC_8 (struct bufferevent*) ;
 int FUNC_9 (struct bufferevent*,int ,int ) ;
 int FUNC_10 (struct bufferevent*,scalar_t__) ;
 int FUNC_11 (struct bufferevent*,int,int ) ;
 int VAR_8 ;
 int FUNC_12 (int *,int ,scalar_t__,int,int ,struct bufferevent*) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int,int ) ;
 int FUNC_15 (scalar_t__*,struct sockaddr const*,int) ;

int
FUNC_16(struct bufferevent *VAR_9,
    const struct sockaddr *VAR_10, int VAR_11)
{
 struct bufferevent_private *VAR_12 = FUNC_1(VAR_9);

 evutil_socket_t VAR_13;
 int VAR_14 = 0;
 int VAR_15=-1;
 int VAR_16 = 0;

 FUNC_8(VAR_9);

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13 < 0) {
  if (!VAR_10)
   goto done;
  VAR_13 = FUNC_14(VAR_10->sa_family,
      VAR_7|VAR_2, 0);
  if (VAR_13 < 0)
   goto freesock;
  VAR_16 = 1;
 }
 if (VAR_10) {
  VAR_14 = FUNC_15(&VAR_13, VAR_10, VAR_11);
  if (VAR_14 < 0)
   goto freesock;
 }
 FUNC_10(VAR_9, VAR_13);
 if (VAR_14 == 0) {
  if (! FUNC_2(VAR_9, VAR_6)) {
   VAR_12->connecting = 1;
   VAR_15 = 0;
   goto done;
  }
 } else if (VAR_14 == 1) {

  VAR_15 = 0;
  VAR_12->connecting = 1;
  FUNC_11(VAR_9, VAR_6, VAR_1);
 } else {

  VAR_15 = 0;
  FUNC_9(VAR_9, VAR_0, VAR_1);
  FUNC_6(VAR_9, VAR_6|VAR_5);
 }

 goto done;

freesock:
 if (VAR_16)
  FUNC_13(VAR_13);
done:
 FUNC_5(VAR_9);
 return VAR_15;
}
