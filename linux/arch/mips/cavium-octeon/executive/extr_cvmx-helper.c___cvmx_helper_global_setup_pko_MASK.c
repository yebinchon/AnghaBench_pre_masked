
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size1; int size2; int size3; int size4; int size5; int size6; int size7; } ;
union cvmx_pko_reg_min_pkt {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int tout_val; scalar_t__ tout_enb; } ;
union cvmx_iob_fau_timeout {scalar_t__ u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void)
{




 union cvmx_iob_fau_timeout VAR_3;
 VAR_3.u64 = 0;
 VAR_3.s.tout_val = 0xfff;
 VAR_3.s.tout_enb = 0;
 FUNC_1(VAR_0, VAR_3.u64);

 if (FUNC_0(VAR_2)) {
  union cvmx_pko_reg_min_pkt VAR_4;

  VAR_4.u64 = 0;
  VAR_4.s.size1 = 59;
  VAR_4.s.size2 = 59;
  VAR_4.s.size3 = 59;
  VAR_4.s.size4 = 59;
  VAR_4.s.size5 = 59;
  VAR_4.s.size6 = 59;
  VAR_4.s.size7 = 59;
  FUNC_1(VAR_1, VAR_4.u64);
 }

 return 0;
}
