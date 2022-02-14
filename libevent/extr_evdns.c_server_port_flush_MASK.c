
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct server_request {scalar_t__ addrlen; int addr; scalar_t__ response_len; int response; } ;
struct evdns_server_port {int event; int socket; int event_base; struct server_request* pending_replies; } ;
typedef int ev_socklen_t ;


 int FUNC_0 (struct evdns_server_port*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int,int ,struct evdns_server_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,int ,int,int ,struct sockaddr*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct server_request*) ;

__attribute__((used)) static void
FUNC_11(struct evdns_server_port *VAR_4)
{
 struct server_request *VAR_5 = VAR_4->pending_replies;
 FUNC_0(VAR_4);
 while (VAR_5) {
  int VAR_6 = FUNC_9(VAR_4->socket, VAR_5->response, (int)VAR_5->response_len, 0,
      (struct sockaddr*) &VAR_5->addr, (ev_socklen_t)VAR_5->addrlen);
  if (VAR_6 < 0) {
   int VAR_7 = FUNC_7(VAR_4->socket);
   if (FUNC_2(VAR_7))
    return;
   FUNC_8(VAR_0, "Error %s (%d) while writing response to port; dropping", FUNC_6(VAR_7), VAR_7);
  }
  if (FUNC_10(VAR_5)) {

   return;
  } else {
   FUNC_1(VAR_5 != VAR_4->pending_replies);
   VAR_5 = VAR_4->pending_replies;
  }
 }


 (void) FUNC_5(&VAR_4->event);
 FUNC_4(&VAR_4->event, VAR_4->event_base,
     VAR_4->socket, VAR_2 | VAR_1,
     VAR_3, VAR_4);

 if (FUNC_3(&VAR_4->event, ((void*)0)) < 0) {
  FUNC_8(VAR_0, "Error from libevent when adding event for DNS server.");

 }
}
