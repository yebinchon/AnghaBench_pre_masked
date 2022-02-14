
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc_pace_min_segs; } ;
struct tcp_bbr {scalar_t__ rc_last_options; TYPE_1__ r_ctl; } ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static inline int32_t
FUNC_0(struct tcp_bbr *VAR_0)
{
 return (VAR_0->r_ctl.rc_pace_min_segs - VAR_0->rc_last_options);
}
