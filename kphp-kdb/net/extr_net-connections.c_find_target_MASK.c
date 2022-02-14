
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {unsigned long s_addr; } ;
struct TYPE_2__ {unsigned long s_addr; } ;
struct conn_target {int port; int * type; TYPE_1__ target; } ;
typedef int conn_type_t ;


 struct conn_target** VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;

struct conn_target **FUNC_1 (struct in_addr VAR_2, int VAR_3, conn_type_t *VAR_4) {
  FUNC_0 (VAR_2.s_addr);
  unsigned VAR_5 = ((unsigned long) VAR_4 * 0xabacaba + VAR_2.s_addr) % VAR_1;
  unsigned VAR_6 = ((unsigned long) VAR_4 * 0xdabacab + VAR_2.s_addr) % (VAR_1 - 1);
  VAR_5 = (VAR_5 * 239 + VAR_3) % VAR_1;
  VAR_6 = (VAR_6 * 17 + VAR_3) % (VAR_1 - 1) + 1;
  while (VAR_0[VAR_5]) {
    if (VAR_0[VAR_5]->target.s_addr == VAR_2.s_addr &&
        VAR_0[VAR_5]->port == VAR_3 &&
 VAR_0[VAR_5]->type == VAR_4) {
      return VAR_0 + VAR_5;
    }
    if ((VAR_5 += VAR_6) >= VAR_1) {
      VAR_5 -= VAR_1;
    }
  }
  return VAR_0 + VAR_5;
}
