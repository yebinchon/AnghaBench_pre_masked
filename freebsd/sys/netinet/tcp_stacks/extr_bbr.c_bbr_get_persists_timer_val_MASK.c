
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct tcpcb {scalar_t__ t_srtt; scalar_t__ t_rttvar; size_t t_rxtshift; } ;
struct TYPE_2__ {int rc_hpts_flags; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static uint32_t
FUNC_2(struct tcpcb *VAR_6, struct tcp_bbr *VAR_7)
{
 uint64_t VAR_8, VAR_9;
 uint64_t VAR_10;

 VAR_7->r_ctl.rc_hpts_flags |= VAR_1;
 if (VAR_6->t_srtt == 0) {
  VAR_8 = (uint64_t)VAR_0;
  VAR_9 = 0;
 } else {
  VAR_8 = ((uint64_t)FUNC_1(VAR_6->t_srtt) >> VAR_2);
  VAR_9 = ((uint64_t)FUNC_1(VAR_6->t_rttvar) >> VAR_2);
 }
 FUNC_0(VAR_10, ((VAR_8 + VAR_9) * VAR_5[VAR_6->t_rxtshift]),
     VAR_4, VAR_3);
 return ((uint32_t)VAR_10);
}
