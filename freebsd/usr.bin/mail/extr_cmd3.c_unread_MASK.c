
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_0(void *VAR_5)
{
 int *VAR_6 = VAR_5;
 int *VAR_7;

 for (VAR_7 = VAR_6; *VAR_7 != 0; VAR_7++) {
  VAR_3 = &VAR_4[*VAR_7-1];
  VAR_3->m_flag &= ~(VAR_0|VAR_2);
  VAR_3->m_flag |= VAR_1;
 }
 return (0);
}
