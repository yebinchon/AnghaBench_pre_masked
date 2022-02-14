
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long config; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(int VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  return;

 FUNC_3(VAR_4);

 VAR_5 = VAR_1[VAR_6].config;
 VAR_5 = (VAR_5 & ~VAR_0) | VAR_3;
 FUNC_0(VAR_6, VAR_5);

 FUNC_2(VAR_4);
}
