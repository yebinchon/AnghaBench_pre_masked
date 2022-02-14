
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int t_srtt; int t_rttvar; size_t t_rxtshift; } ;
struct TYPE_2__ {int rc_hpts_flags; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static uint32_t
FUNC_2(struct tcpcb *VAR_6, struct tcp_rack *VAR_7)
{
 int32_t VAR_8;
 int32_t VAR_9;
 uint32_t VAR_10;

 VAR_8 = FUNC_1((VAR_6->t_srtt >> VAR_2) + ((VAR_6->t_rttvar * 4) >> VAR_2));
 FUNC_0(VAR_9, VAR_8 * VAR_5[VAR_6->t_rxtshift],
     VAR_4, VAR_3);
 if (VAR_6->t_rxtshift < VAR_1)
  VAR_6->t_rxtshift++;
 VAR_7->r_ctl.rc_hpts_flags |= VAR_0;
 VAR_10 = (uint32_t)VAR_9;
 return (VAR_10);
}
