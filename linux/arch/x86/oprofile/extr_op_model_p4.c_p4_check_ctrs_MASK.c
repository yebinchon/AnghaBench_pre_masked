
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct op_msrs {int dummy; } ;
struct TYPE_2__ {int counter_address; int cccr_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 unsigned long FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct pt_regs* const,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (int ,unsigned long,unsigned long) ;
 scalar_t__* VAR_5 ;
 int FUNC_8 (int ,unsigned long,unsigned long) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct pt_regs * const VAR_6,
    struct op_msrs const * const VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = FUNC_5();

 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {

  if (!VAR_5[VAR_13])
   continue;
  VAR_12 = FUNC_2(VAR_11, VAR_13);

  FUNC_7(VAR_4[VAR_12].cccr_address, VAR_9, VAR_10);
  FUNC_7(VAR_4[VAR_12].counter_address, VAR_8, VAR_10);
  if (FUNC_1(VAR_9) || !(VAR_8 & VAR_2)) {
   FUNC_6(VAR_6, VAR_13);
   FUNC_9(VAR_4[VAR_12].counter_address,
          -(u64)VAR_5[VAR_13]);
   FUNC_0(VAR_9);
   FUNC_8(VAR_4[VAR_12].cccr_address, VAR_9, VAR_10);
   FUNC_9(VAR_4[VAR_12].counter_address,
          -(u64)VAR_5[VAR_13]);
  }
 }


 FUNC_4(VAR_0, FUNC_3(VAR_0) & ~VAR_1);


 return 1;
}
