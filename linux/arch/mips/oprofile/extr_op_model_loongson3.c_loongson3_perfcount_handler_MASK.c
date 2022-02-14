
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {int reset_counter1; int reset_counter2; scalar_t__ ctr2_enable; scalar_t__ ctr1_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pt_regs*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void)
{
 unsigned long VAR_6;
 uint64_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10 = VAR_3;
 struct pt_regs *VAR_11 = FUNC_0();

 VAR_9 = FUNC_4();
 if (!(VAR_9 & VAR_0))
  return VAR_10;

 VAR_7 = FUNC_5();
 VAR_8 = FUNC_6();

 FUNC_2(VAR_6);

 if (VAR_7 & VAR_4) {
  if (VAR_5.ctr1_enable)
   FUNC_3(VAR_11, 0);
  VAR_7 = VAR_5.reset_counter1;
 }
 if (VAR_8 & VAR_4) {
  if (VAR_5.ctr2_enable)
   FUNC_3(VAR_11, 1);
  VAR_8 = VAR_5.reset_counter2;
 }

 FUNC_1(VAR_6);

 FUNC_7(VAR_7);
 FUNC_8(VAR_8);

 if (!(VAR_9 & VAR_1))
  VAR_10 = VAR_2;

 return VAR_10;
}
