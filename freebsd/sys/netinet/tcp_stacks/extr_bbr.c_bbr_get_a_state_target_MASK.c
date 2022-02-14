
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int rc_pace_max_segs; } ;
struct tcp_bbr {TYPE_2__ r_ctl; scalar_t__ rc_last_options; TYPE_1__* rc_tp; scalar_t__ rc_use_google; } ;
struct TYPE_3__ {scalar_t__ t_maxseg; } ;


 int FUNC_0 (struct tcp_bbr*) ;
 int FUNC_1 (struct tcp_bbr*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tcp_bbr*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tcp_bbr*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_6(struct tcp_bbr *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 if (VAR_0->rc_use_google) {

  VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_0), VAR_1);
 } else {
  VAR_2 = FUNC_4((VAR_0->rc_tp->t_maxseg - VAR_0->rc_last_options),
     VAR_0->r_ctl.rc_pace_max_segs);

  VAR_3 = FUNC_5(FUNC_1(VAR_0, FUNC_0(VAR_0),
            VAR_1), VAR_2);

  if (VAR_3 < FUNC_3(VAR_0))
   return (FUNC_3(VAR_0));
 }
 return (VAR_3);
}
