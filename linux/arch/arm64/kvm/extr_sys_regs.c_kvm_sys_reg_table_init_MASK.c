
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct sys_reg_desc {unsigned int val; } ;
struct TYPE_10__ {int (* reset ) (int *,TYPE_1__*) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int *,struct sys_reg_desc*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 TYPE_1__* VAR_6 ;

void FUNC_5(void)
{
 unsigned int VAR_7;
 struct sys_reg_desc VAR_8;


 FUNC_1(FUNC_2(VAR_6, FUNC_0(VAR_6)));
 FUNC_1(FUNC_2(VAR_2, FUNC_0(VAR_2)));
 FUNC_1(FUNC_2(VAR_1, FUNC_0(VAR_1)));
 FUNC_1(FUNC_2(VAR_4, FUNC_0(VAR_4)));
 FUNC_1(FUNC_2(VAR_3, FUNC_0(VAR_3)));
 FUNC_1(FUNC_2(VAR_5, FUNC_0(VAR_5)));


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
  VAR_5[VAR_7].reset(((void*)0), &VAR_5[VAR_7]);
 FUNC_3(((void*)0), &VAR_8);
 VAR_0 = VAR_8.val;
 for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
  if (((VAR_0 >> (VAR_7*3)) & 7) == 0)
   break;

 VAR_0 &= (1 << (VAR_7*3))-1;
}
