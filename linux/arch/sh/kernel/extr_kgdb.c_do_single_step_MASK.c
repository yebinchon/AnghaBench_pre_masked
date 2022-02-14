
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long,scalar_t__) ;
 unsigned short* FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_3)
{

 unsigned short *VAR_4 = FUNC_2(VAR_3);

 VAR_1 = (int)VAR_4;


 VAR_2 = FUNC_0((long)VAR_4);
 *VAR_4 = VAR_0;


 FUNC_1((long)VAR_4, (long)VAR_4 +
      FUNC_3(VAR_2));
}
