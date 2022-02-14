
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct conn_target {int port; TYPE_1__ target; int * type; scalar_t__ target_ipv6; } ;
typedef int conn_type_t ;


 struct conn_target** VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;

struct conn_target **FUNC_1 (unsigned char VAR_2[16], int VAR_3, conn_type_t *VAR_4) {
  FUNC_0 (*(long long *)VAR_2 || ((long long *) VAR_2)[1]);
  unsigned VAR_5 = ((unsigned long) VAR_4 * 0xabacaba) % VAR_1;
  unsigned VAR_6 = ((unsigned long) VAR_4 * 0xdabacab) % (VAR_1 - 1);
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
    VAR_5 = ((unsigned long long) VAR_5 * 17239 + ((unsigned *) VAR_2)[VAR_7]) % VAR_1;
    VAR_6 = ((unsigned long long) VAR_6 * 23917 + ((unsigned *) VAR_2)[VAR_7]) % (VAR_1 - 1);
  }
  VAR_5 = (VAR_5 * 239 + VAR_3) % VAR_1;
  VAR_6 = (VAR_6 * 17 + VAR_3) % (VAR_1 - 1) + 1;
  while (VAR_0[VAR_5]) {
    if (
 ((long long *)VAR_0[VAR_5]->target_ipv6)[1] == ((long long *)VAR_2)[1] &&
 *(long long *)VAR_0[VAR_5]->target_ipv6 == *(long long *)VAR_2 &&
        VAR_0[VAR_5]->port == VAR_3 &&
 VAR_0[VAR_5]->type == VAR_4 && !VAR_0[VAR_5]->target.s_addr) {
      return VAR_0 + VAR_5;
    }
    if ((VAR_5 += VAR_6) >= VAR_1) {
      VAR_5 -= VAR_1;
    }
  }
  return VAR_0 + VAR_5;
}
