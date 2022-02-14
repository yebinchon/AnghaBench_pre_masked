
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int rc_pace_max_segs; } ;
struct tcp_bbr {scalar_t__ rc_bbr_state; scalar_t__ rc_use_google; TYPE_2__ r_ctl; scalar_t__ rc_last_options; TYPE_1__* rc_tp; } ;
struct TYPE_3__ {scalar_t__ t_maxseg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_bbr*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tcp_bbr*) ;
 int FUNC_2 (struct tcp_bbr*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static uint32_t
FUNC_5(struct tcp_bbr *VAR_3, uint64_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_7 = FUNC_3((VAR_3->rc_tp->t_maxseg - VAR_3->rc_last_options), VAR_3->r_ctl.rc_pace_max_segs);

 VAR_6 = FUNC_4(FUNC_0(VAR_3, VAR_4, VAR_5), VAR_7);





 VAR_6 += (VAR_2 * VAR_3->r_ctl.rc_pace_max_segs);
 if (VAR_3->rc_use_google) {
  if((VAR_3->rc_bbr_state == VAR_0) &&
     (FUNC_1(VAR_3) == VAR_1)) {






   VAR_6 += 2 * VAR_7;
  }
   if ((VAR_6 / VAR_7) & 0x1) {

   VAR_6 += VAR_7;
  }
 }

 if (VAR_6 < FUNC_2(VAR_3))
  return (FUNC_2(VAR_3));
 return (VAR_6);
}
