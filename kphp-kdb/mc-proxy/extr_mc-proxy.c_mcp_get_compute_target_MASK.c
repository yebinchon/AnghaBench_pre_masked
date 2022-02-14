
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct conn_target {int port; TYPE_1__ target; } ;


 int * VAR_0 ;
 struct conn_target* FUNC_0 (char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct connection*,char const*,int,int,int,int *,int) ;

int FUNC_3 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  struct conn_target *VAR_4 = FUNC_0 (VAR_2+6, VAR_3-6);
  if (!VAR_4) {
    return 0;
  }
  VAR_0[0] = FUNC_1 (VAR_4->target.s_addr);
  VAR_0[1] = VAR_4->port;
  return FUNC_2 (VAR_1, VAR_2, VAR_3, 1, 2, VAR_0, 2);
}
