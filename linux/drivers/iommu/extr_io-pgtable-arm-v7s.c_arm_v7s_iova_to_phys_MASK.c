
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct io_pgtable_ops {int dummy; } ;
struct TYPE_2__ {int cfg; } ;
struct arm_v7s_io_pgtable {TYPE_1__ iop; int * pgd; } ;
typedef unsigned long phys_addr_t ;
typedef int arm_v7s_iopte ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 struct arm_v7s_io_pgtable* FUNC_6 (struct io_pgtable_ops*) ;
 int * FUNC_7 (int ,int,struct arm_v7s_io_pgtable*) ;
 unsigned long FUNC_8 (int ,int,int *) ;

__attribute__((used)) static phys_addr_t FUNC_9(struct io_pgtable_ops *VAR_1,
     unsigned long VAR_2)
{
 struct arm_v7s_io_pgtable *VAR_3 = FUNC_6(VAR_1);
 arm_v7s_iopte *VAR_4 = VAR_3->pgd, VAR_5;
 int VAR_6 = 0;
 u32 VAR_7;

 do {
  VAR_4 += FUNC_0(VAR_2, ++VAR_6);
  VAR_5 = FUNC_4(*VAR_4);
  VAR_4 = FUNC_7(VAR_5, VAR_6, VAR_3);
 } while (FUNC_2(VAR_5, VAR_6));

 if (!FUNC_3(VAR_5))
  return 0;

 VAR_7 = FUNC_1(VAR_6);
 if (FUNC_5(VAR_5, VAR_6))
  VAR_7 *= VAR_0;
 return FUNC_8(VAR_5, VAR_6, &VAR_3->iop.cfg) | (VAR_2 & ~VAR_7);
}
