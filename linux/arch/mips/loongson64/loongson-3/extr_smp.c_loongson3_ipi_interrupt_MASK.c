
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 () ;
 unsigned int* VAR_4 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 unsigned int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

void FUNC_13(struct pt_regs *VAR_8)
{
 int VAR_9, VAR_10 = FUNC_12();
 unsigned int VAR_11, VAR_12, VAR_13;


 VAR_11 = FUNC_8(VAR_6[FUNC_2(VAR_10)]);
 VAR_13 = VAR_11 >> VAR_0;


 FUNC_9((u32)VAR_11, VAR_5[FUNC_2(VAR_10)]);

 if (VAR_11 & VAR_3)
  FUNC_11();

 if (VAR_11 & VAR_2) {
  FUNC_6();
  FUNC_5();
  FUNC_7();
 }

 if (VAR_11 & VAR_1) {
  FUNC_0(VAR_10 != 0);
  VAR_12 = FUNC_10();
  VAR_12 = VAR_12 ? VAR_12 : 1;
  for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
   VAR_4[VAR_9] = VAR_12;
  FUNC_1();
 }

 if (VAR_13) {
  int VAR_14;
  while ((VAR_14 = FUNC_4(VAR_13))) {
   FUNC_3(VAR_14-1);
   VAR_13 &= ~(1<<(VAR_14-1));
  }
 }
}
