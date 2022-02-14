
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ rc_probertt_int; scalar_t__ last_in_probertt; int rc_rtt_shrinks; } ;
struct tcp_bbr {int rc_past_init_win; scalar_t__ rc_in_persist; TYPE_1__ r_ctl; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int32_t inline
FUNC_2(struct tcp_bbr *VAR_1, uint32_t VAR_2)
{
 if ((VAR_1->rc_past_init_win == 1) &&
     (VAR_1->rc_in_persist == 0) &&
     (FUNC_1(VAR_2, VAR_1->r_ctl.rc_rtt_shrinks) >= VAR_1->r_ctl.rc_probertt_int)) {
  return (1);
 }
 if (VAR_0 &&
     (VAR_1->rc_in_persist == 0) &&
     (FUNC_0(VAR_2, VAR_1->r_ctl.last_in_probertt)) &&
     ((VAR_2 - VAR_1->r_ctl.last_in_probertt) > VAR_1->r_ctl.rc_probertt_int)) {
  return (1);
 }
 return (0);
}
