
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evdns_server_port {int dummy; } ;
typedef int my_addr ;
typedef scalar_t__ evutil_socket_t ;
typedef int evdns_request_callback_fn_type ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 struct evdns_server_port* FUNC_1 (struct event_base*,scalar_t__,int ,int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*) ;

struct evdns_server_port *
FUNC_10(struct event_base *VAR_2,
    ev_uint16_t *VAR_3,
    evutil_socket_t *VAR_4,
    evdns_request_callback_fn_type VAR_5,
    void *VAR_6)
{
 struct evdns_server_port *VAR_7 = ((void*)0);
 evutil_socket_t VAR_8;
 struct sockaddr_in VAR_9;

 VAR_8 = FUNC_8(VAR_0, VAR_1, 0);
 if (VAR_8 < 0) {
  FUNC_9("socket");
 }

 FUNC_3(VAR_8);

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_5(*VAR_3);
 VAR_9.sin_addr.s_addr = FUNC_4(0x7f000001UL);
 if (FUNC_0(VAR_8, (struct sockaddr*)&VAR_9, sizeof(VAR_9)) < 0) {
  FUNC_2(VAR_8);
  FUNC_9("bind");
 }
 VAR_7 = FUNC_1(VAR_2, VAR_8, 0, VAR_5, VAR_6);
 if (!*VAR_3)
  *VAR_3 = FUNC_7(VAR_8);
 if (VAR_4)
  *VAR_4 = VAR_8;

 return VAR_7;
end:
 return ((void*)0);
}
