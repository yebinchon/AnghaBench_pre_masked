
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ registers; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_3 = VAR_2 + FUNC_0(1000);




 FUNC_4();






 FUNC_5(FUNC_1(VAR_1.registers+VAR_0) | (1<<31),
        VAR_1.registers+VAR_0);

 while (FUNC_1(VAR_1.registers+VAR_0) & (1<<31)) {
  if (FUNC_2(VAR_2, VAR_3))
   break;

  FUNC_3(50);
 }
}
