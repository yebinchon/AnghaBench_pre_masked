
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

void FUNC_2(unsigned long VAR_3, unsigned long VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_2[VAR_0].line_size;
 VAR_7 = VAR_3 & ~(VAR_6 - 1);
 VAR_8 = (VAR_4 + VAR_6 - 1) & ~(VAR_6 - 1);
 FUNC_0(VAR_7, VAR_8);

 if (VAR_5) {
  VAR_6 = VAR_2[VAR_1].line_size;
  VAR_7 = VAR_3 & ~(VAR_6 - 1);
  VAR_8 = (VAR_4 + VAR_6 - 1) & ~(VAR_6 - 1);
  FUNC_1(VAR_7, VAR_8);
 }
}
