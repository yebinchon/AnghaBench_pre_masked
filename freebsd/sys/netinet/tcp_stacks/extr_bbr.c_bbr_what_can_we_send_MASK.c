
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ snd_wnd; } ;
struct TYPE_2__ {scalar_t__ rc_lost_bytes; scalar_t__ rc_sacked; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (struct tcpcb*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct tcpcb *VAR_0, struct tcp_bbr *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3, int32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;

 if (FUNC_1(VAR_0) >= VAR_0->snd_wnd) {

  VAR_6 = 0;
 } else {
  uint32_t VAR_7;

  VAR_7 = FUNC_0(VAR_0, (VAR_1->r_ctl.rc_sacked + VAR_1->r_ctl.rc_lost_bytes));
  if (VAR_7 >= VAR_2) {





   return (0);
  }
  VAR_6 = VAR_2 - VAR_7;
  if ((VAR_6 + FUNC_1(VAR_0)) > VAR_0->snd_wnd) {

   VAR_6 = VAR_0->snd_wnd - FUNC_1(VAR_0);
  }
  if ((VAR_6 + VAR_4) > VAR_3) {




   VAR_6 = VAR_3 - VAR_4;
  }
 }
 return (VAR_6);
}
