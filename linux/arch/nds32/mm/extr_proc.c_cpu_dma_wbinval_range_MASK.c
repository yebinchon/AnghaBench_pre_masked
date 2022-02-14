
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 VAR_5 = VAR_2[VAR_1].line_size;
 VAR_3 = VAR_3 & (~(VAR_5 - 1));
 VAR_4 = (VAR_4 + VAR_5 - 1) & (~(VAR_5 - 1));
 if (FUNC_5(VAR_3 == VAR_4))
  return;

 FUNC_4(VAR_6);
 FUNC_1(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_4, VAR_0);
 FUNC_0();
 FUNC_3(VAR_6);
}
