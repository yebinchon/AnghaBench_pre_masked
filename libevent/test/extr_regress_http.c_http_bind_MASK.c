
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int dummy; } ;
typedef scalar_t__ ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct evhttp_bound_socket* FUNC_1 (struct evhttp*,char*,scalar_t__) ;
 int FUNC_2 (struct evhttp_bound_socket*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct evhttp *VAR_1, ev_uint16_t *VAR_2, int VAR_3)
{
 int VAR_4;
 struct evhttp_bound_socket *VAR_5;
 int VAR_6 = VAR_3 & VAR_0;

 if (VAR_6)
  VAR_5 = FUNC_1(VAR_1, "::1", *VAR_2);
 else
  VAR_5 = FUNC_1(VAR_1, "127.0.0.1", *VAR_2);

 if (VAR_5 == ((void*)0)) {
  if (VAR_6)
   return -1;
  else
   FUNC_0(1, "Could not start web server");
 }

 VAR_4 = FUNC_3(FUNC_2(VAR_5));
 if (VAR_4 < 0)
  return -1;
 *VAR_2 = (ev_uint16_t) VAR_4;

 return 0;
}
