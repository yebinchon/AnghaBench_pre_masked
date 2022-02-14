
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {int t_maxseg; } ;
struct tcp_bbr {int rc_init_win; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct tcp_bbr *VAR_2, struct tcpcb *VAR_3)
{
 uint32_t VAR_4;

 if (VAR_2->rc_init_win) {
  VAR_4 = VAR_2->rc_init_win * VAR_3->t_maxseg;
 } else if (VAR_1)
  VAR_4 = FUNC_1((VAR_1 * VAR_3->t_maxseg),
      FUNC_0(2 * VAR_3->t_maxseg, 14600));
 else if (VAR_0)
  VAR_4 = FUNC_1(4 * VAR_3->t_maxseg,
      FUNC_0(2 * VAR_3->t_maxseg, 4380));
 else {

  if (VAR_3->t_maxseg > 2190)
   VAR_4 = 2 * VAR_3->t_maxseg;
  else if (VAR_3->t_maxseg > 1095)
   VAR_4 = 3 * VAR_3->t_maxseg;
  else
   VAR_4 = 4 * VAR_3->t_maxseg;
 }
 return (VAR_4);
}
