
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int options; } ;
struct bufferevent_async {int read_in_progress; int write_in_progress; } ;
struct bufferevent {int input; } ;
typedef scalar_t__ evutil_socket_t ;


 int VAR_0 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct bufferevent_async*) ;
 int FUNC_3 (struct bufferevent_async*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct bufferevent_async* FUNC_7 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_8(struct bufferevent *VAR_2)
{
 struct bufferevent_async *VAR_3 = FUNC_7(VAR_2);
 struct bufferevent_private *VAR_4 = FUNC_0(VAR_2);
 evutil_socket_t VAR_5;

 FUNC_1(!FUNC_7(VAR_2)->write_in_progress &&
   !FUNC_7(VAR_2)->read_in_progress);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 VAR_5 = FUNC_4(VAR_2->input);
 if (VAR_5 != (evutil_socket_t)VAR_1 &&
  (VAR_4->options & VAR_0)) {
  FUNC_6(VAR_5);
  FUNC_5(VAR_2->input, VAR_1);
 }
}
