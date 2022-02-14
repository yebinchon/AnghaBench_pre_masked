
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_3(node_t *VAR_3)
{
 FUNC_0();

 VAR_3->next = ((void*)0);
 if (VAR_1) VAR_1->next = VAR_3;
 else VAR_0 = VAR_3;
 VAR_1 = VAR_3;
 VAR_2++;

 FUNC_2();

 FUNC_1(1);
}
