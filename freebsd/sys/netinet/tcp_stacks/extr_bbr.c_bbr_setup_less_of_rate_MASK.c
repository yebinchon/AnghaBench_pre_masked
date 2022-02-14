
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int rc_delrate; } ;
struct tcp_bbr {int skip_gain; int gain_is_limited; TYPE_1__ r_ctl; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_0, uint32_t VAR_1,
         uint64_t VAR_2, uint64_t VAR_3)
{




 if (FUNC_1(&VAR_0->r_ctl.rc_delrate) >= VAR_2) {

  uint64_t VAR_4;

  VAR_0->skip_gain = 1;
  VAR_0->gain_is_limited = 0;
  VAR_4 = FUNC_1(&VAR_0->r_ctl.rc_delrate) - VAR_2;
  if (VAR_4)
   FUNC_0(&VAR_0->r_ctl.rc_delrate, VAR_4, VAR_1);
 } else {

  VAR_0->skip_gain = 0;
  VAR_0->gain_is_limited = 1;
 }
}
