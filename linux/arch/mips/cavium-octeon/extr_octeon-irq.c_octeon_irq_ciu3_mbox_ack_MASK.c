
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raw; } ;
union cvmx_ciu3_iscx_w1c {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ u64 ;
struct octeon_ciu3_info {scalar_t__ ciu3_addr; } ;
struct irq_data {unsigned int irq; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 struct octeon_ciu3_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 unsigned int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct octeon_ciu3_info *VAR_3;
 unsigned int VAR_4;
 u64 VAR_5;
 union cvmx_ciu3_iscx_w1c VAR_6;
 unsigned int VAR_7 = VAR_2->irq - VAR_0;

 VAR_4 = FUNC_5(FUNC_2(), VAR_7);

 VAR_6.u64 = 0;
 VAR_6.s.raw = 1;

 VAR_3 = FUNC_1(VAR_1);
 VAR_5 = VAR_3->ciu3_addr + FUNC_0(VAR_4);
 FUNC_4(VAR_5, VAR_6.u64);
 FUNC_3(VAR_5);
}
