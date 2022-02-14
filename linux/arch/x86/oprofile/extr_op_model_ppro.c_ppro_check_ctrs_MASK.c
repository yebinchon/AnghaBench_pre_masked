
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct pt_regs {int dummy; } ;
struct op_msrs {TYPE_1__* counters; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pt_regs* const,int) ;
 int FUNC_3 (int ,unsigned long long) ;
 int * VAR_4 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pt_regs * const VAR_5,
      struct op_msrs const * const VAR_6)
{
 u64 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  if (!VAR_4[VAR_8])
   continue;
  FUNC_3(VAR_6->counters[VAR_8].addr, VAR_7);
  if (VAR_7 & (1ULL << (VAR_2 - 1)))
   continue;
  FUNC_2(VAR_5, VAR_8);
  FUNC_4(VAR_6->counters[VAR_8].addr, -VAR_4[VAR_8]);
 }



 FUNC_1(VAR_0, FUNC_0(VAR_0) & ~VAR_1);
 return 1;
}
