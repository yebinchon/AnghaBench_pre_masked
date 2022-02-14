
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_4;
 unsigned long VAR_8 = VAR_5;
 unsigned long VAR_9;
 VAR_6 = VAR_3[VAR_2].line_size;
 VAR_4 = VAR_4 & (~(VAR_6 - 1));
 VAR_5 = (VAR_5 + VAR_6 - 1) & (~(VAR_6 - 1));
 if (FUNC_6(VAR_4 == VAR_5))
  return;
 FUNC_5(VAR_9);
 if (VAR_4 != VAR_7) {
  FUNC_2(VAR_4, VAR_4 + VAR_6);
  FUNC_3(VAR_4, VAR_4 + VAR_6, VAR_1);
 }
 if (VAR_5 != VAR_8) {
  FUNC_2(VAR_5 - VAR_6, VAR_5);
  FUNC_3(VAR_5 - VAR_6, VAR_5, VAR_1);
 }
 FUNC_1(VAR_4, VAR_5);
 FUNC_3(VAR_4, VAR_5, VAR_0);
 FUNC_0();
 FUNC_4(VAR_9);

}
