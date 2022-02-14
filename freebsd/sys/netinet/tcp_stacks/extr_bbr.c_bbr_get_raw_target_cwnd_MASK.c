
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int rc_rttprop; } ;
struct tcp_bbr {int rc_tp; TYPE_1__ r_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct tcp_bbr*) ;
 int FUNC_2 (struct tcp_bbr*,int ) ;
 scalar_t__ FUNC_3 (struct tcp_bbr*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint32_t
FUNC_5(struct tcp_bbr *VAR_2, uint32_t VAR_3, uint64_t VAR_4)
{
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7;

 if ((FUNC_4(&VAR_2->r_ctl.rc_rttprop) == 0xffffffff) ||
     (FUNC_1(VAR_2) == 0)) {

  return (FUNC_3(VAR_2, VAR_2->rc_tp));
 }




 VAR_6 = FUNC_2(VAR_2, VAR_1);

 VAR_5 = FUNC_0(VAR_6, VAR_4);

 VAR_7 = (uint32_t)(((VAR_5 * ((uint64_t)VAR_3)) + (uint64_t)(VAR_0 - 1)) / ((uint64_t)VAR_0));

 return (VAR_7);
}
