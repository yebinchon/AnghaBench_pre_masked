
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long config; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(unsigned long *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 unsigned long *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_4 = VAR_1; VAR_5 < VAR_2; VAR_5++, VAR_4++) {

  VAR_6 = FUNC_2(FUNC_0(*VAR_4));
  if (VAR_6 < 0)
   continue;

  FUNC_4(VAR_3);

  VAR_0[VAR_6].config = *VAR_4;
  FUNC_1(VAR_6, *VAR_4);

  FUNC_3(VAR_3);
 }
}
