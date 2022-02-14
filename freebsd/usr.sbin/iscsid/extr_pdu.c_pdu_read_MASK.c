
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int conn_socket; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct connection const*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ,char*,size_t) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(const struct connection *VAR_1, char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = FUNC_3(VAR_1->conn_socket, VAR_2, VAR_3);
  if (VAR_4 < 0) {
   if (FUNC_5()) {
    FUNC_0(VAR_1, "Login Phase timeout");
    FUNC_2(1, "exiting due to timeout");
   }
   FUNC_0(VAR_1, FUNC_4(VAR_0));
   FUNC_1(1, "read");
  } else if (VAR_4 == 0) {
   FUNC_0(VAR_1, "connection lost");
   FUNC_2(1, "read: connection lost");
  }
  VAR_3 -= VAR_4;
  VAR_2 += VAR_4;
 }
}
