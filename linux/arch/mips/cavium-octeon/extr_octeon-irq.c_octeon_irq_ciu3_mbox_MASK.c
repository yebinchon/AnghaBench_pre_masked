
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int en; } ;
union cvmx_ciu3_iscx_w1c {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int intr; int intsn; } ;
union cvmx_ciu3_destx_pp_int {TYPE_1__ s; int u64; } ;
typedef scalar_t__ u64 ;
struct octeon_ciu3_info {scalar_t__ ciu3_addr; } ;
typedef int irq_hw_number_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct octeon_ciu3_info* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 union cvmx_ciu3_destx_pp_int VAR_3;
 struct octeon_ciu3_info *VAR_4;
 u64 VAR_5;
 int VAR_6 = FUNC_3();

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = VAR_4->ciu3_addr;

 VAR_3.u64 = FUNC_4(VAR_5 + FUNC_0(1 + 3 * VAR_6));

 if (FUNC_7(VAR_3.s.intr)) {
  irq_hw_number_t VAR_7 = VAR_3.s.intsn;
  int VAR_8 = VAR_7 - FUNC_8(VAR_6);

  if (FUNC_7(VAR_8 >= 0 && VAR_8 < VAR_0)) {
   FUNC_6(VAR_8 + VAR_1);
  } else {
   union cvmx_ciu3_iscx_w1c VAR_9;
   u64 VAR_10 = VAR_5 + FUNC_1(VAR_7);

   VAR_9.u64 = 0;
   VAR_9.s.en = 1;
   FUNC_5(VAR_10, VAR_9.u64);
   FUNC_4(VAR_10);
   FUNC_9();
  }
 } else {
  FUNC_9();
 }
}
