
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int en; unsigned int idt; } ;
union cvmx_ciu3_iscx_ctl {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ u64 ;
struct octeon_ciu3_info {scalar_t__ ciu3_addr; } ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_4 (int,unsigned int) ;
 struct octeon_ciu3_info* FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_3, int VAR_4, bool VAR_5)
{
 struct octeon_ciu3_info *VAR_6;
 unsigned int VAR_7;
 u64 VAR_8, VAR_9;
 union cvmx_ciu3_iscx_ctl VAR_10;
 unsigned int VAR_11 = VAR_3->irq - VAR_0;

 VAR_7 = FUNC_4(VAR_4, VAR_11);
 VAR_6 = FUNC_5(VAR_1, VAR_4);
 VAR_9 = VAR_6->ciu3_addr + FUNC_1(VAR_7);
 VAR_8 = VAR_6->ciu3_addr + FUNC_0(VAR_7);

 VAR_10.u64 = 0;
 VAR_10.s.en = 1;

 FUNC_3(VAR_9, VAR_10.u64);
 FUNC_3(VAR_8, 0);
 if (VAR_5) {
  unsigned int VAR_12 = FUNC_5(VAR_2, VAR_4);

  VAR_10.u64 = 0;
  VAR_10.s.en = 1;
  VAR_10.s.idt = VAR_12;
  FUNC_3(VAR_8, VAR_10.u64);
 }
 FUNC_2(VAR_8);
}
