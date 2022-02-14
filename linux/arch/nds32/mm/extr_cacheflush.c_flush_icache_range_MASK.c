
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;
 VAR_4 = VAR_1[VAR_0].line_size;
 VAR_2 = VAR_2 & ~(VAR_4 - 1);
 VAR_3 = (VAR_3 + VAR_4 - 1) & ~(VAR_4 - 1);
 FUNC_2(VAR_5);
 FUNC_0(VAR_2, VAR_3, 1);
 FUNC_1(VAR_5);
}
