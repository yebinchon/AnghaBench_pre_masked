
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rc_pace_max_segs; } ;
struct tcp_bbr {TYPE_2__ r_ctl; scalar_t__ rc_last_options; TYPE_1__* rc_tp; } ;
struct TYPE_3__ {scalar_t__ t_maxseg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tcp_bbr*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_2(struct tcp_bbr *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1((VAR_4->rc_tp->t_maxseg - VAR_4->rc_last_options), VAR_4->r_ctl.rc_pace_max_segs);
 if (FUNC_0(VAR_4, VAR_1) < VAR_0)
  return (VAR_3 * VAR_5);
 else
  return (VAR_2 * VAR_5);
}
