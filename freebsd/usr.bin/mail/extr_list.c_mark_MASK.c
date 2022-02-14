
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void
FUNC_1(int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3;
 if (VAR_4 < 1 || VAR_4 > VAR_2)
  FUNC_0(1, "Bad message number to mark");
 VAR_1[VAR_4-1].m_flag |= VAR_0;
}
