
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rc_level_state_extra; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct tcp_bbr *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  VAR_3 = VAR_1->r_ctl.rc_level_state_extra / VAR_2;
  VAR_1->r_ctl.rc_level_state_extra -= VAR_3;
 }
}
