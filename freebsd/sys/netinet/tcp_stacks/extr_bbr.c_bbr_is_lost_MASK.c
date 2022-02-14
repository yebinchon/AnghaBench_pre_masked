
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcp_bbr {int dummy; } ;
struct bbr_sendmap {scalar_t__* r_tim_lastsent; int r_rtr_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_bbr*,int ,scalar_t__,struct bbr_sendmap*) ;
 int FUNC_1 (struct tcp_bbr*,int ) ;

__attribute__((used)) static int
FUNC_2(struct tcp_bbr *VAR_1, struct bbr_sendmap *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_1, VAR_0),
          VAR_3, VAR_2);
 if ((VAR_3 - VAR_2->r_tim_lastsent[(VAR_2->r_rtr_cnt - 1)]) >= VAR_4) {

  return (1);
 }
 return (0);
}
