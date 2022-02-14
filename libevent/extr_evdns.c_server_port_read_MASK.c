
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct evdns_server_port {int socket; } ;
typedef int packet ;
typedef int ev_socklen_t ;


 int FUNC_0 (struct evdns_server_port*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,void*,int,int ,struct sockaddr*,int*) ;
 int FUNC_6 (int *,int,struct evdns_server_port*,struct sockaddr*,int) ;

__attribute__((used)) static void
FUNC_7(struct evdns_server_port *VAR_1) {
 u8 VAR_2[1500];
 struct sockaddr_storage VAR_3;
 ev_socklen_t VAR_4;
 int VAR_5;
 FUNC_0(VAR_1);

 for (;;) {
  VAR_4 = sizeof(struct sockaddr_storage);
  VAR_5 = FUNC_5(VAR_1->socket, (void*)VAR_2, sizeof(VAR_2), 0,
      (struct sockaddr*) &VAR_3, &VAR_4);
  if (VAR_5 < 0) {
   int VAR_6 = FUNC_3(VAR_1->socket);
   if (FUNC_1(VAR_6))
    return;
   FUNC_4(VAR_0,
       "Error %s (%d) while reading request.",
       FUNC_2(VAR_6), VAR_6);
   return;
  }
  FUNC_6(VAR_2, VAR_5, VAR_1, (struct sockaddr*) &VAR_3, VAR_4);
 }
}
