
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int rcv_scale; int rcv_adv; int rcv_nxt; } ;
struct TYPE_2__ {int sb_hiwat; } ;
struct socket {TYPE_1__ so_rcv; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct tcpcb *VAR_1, struct socket *VAR_2, uint32_t VAR_3, int32_t VAR_4)
{




 uint32_t VAR_5;
 int32_t VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0 << VAR_1->rcv_scale);
 if (FUNC_0(VAR_1->rcv_adv, VAR_1->rcv_nxt)) {
  VAR_6 = (VAR_1->rcv_adv - VAR_1->rcv_nxt);
  VAR_5 -= VAR_6;
 } else
  VAR_6 = 0;





 if (VAR_6 >> VAR_1->rcv_scale == (VAR_5 + VAR_6) >> VAR_1->rcv_scale)
  return (0);

 if (VAR_5 >= (2 * VAR_4) &&
     (VAR_5 >= (VAR_2->so_rcv.sb_hiwat / 4) ||
     VAR_3 <= (VAR_2->so_rcv.sb_hiwat / 8) ||
     VAR_2->so_rcv.sb_hiwat <= 8 * VAR_4)) {
  return (1);
 }
 if (2 * VAR_5 >= (int32_t) VAR_2->so_rcv.sb_hiwat)
  return (1);
 return (0);
}
