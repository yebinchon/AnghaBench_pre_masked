
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct conn_target {int port; struct in_addr target; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct conn_target*) ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3 (const char *VAR_1, int VAR_2, struct conn_target *VAR_3) {
  if (!(0 <= VAR_2 && VAR_2 < 0x10000)) {
    FUNC_2 (0, "bad port %d\n", VAR_2);
    return -1;
  }

  struct hostent *VAR_4;
  if (!(VAR_4 = FUNC_1 (VAR_1)) || VAR_4->h_addrtype != VAR_0 || VAR_4->h_length != 4 || !VAR_4->h_addr_list || !VAR_4->h_addr) {
    FUNC_2 (0, "can't resolve host\n");
    return -1;
  }

  VAR_3->target = *(struct in_addr *) VAR_4->h_addr;
  VAR_3->port = VAR_2;

  return FUNC_0 (VAR_3);
}
