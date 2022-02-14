
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ maplocation_t ;
typedef TYPE_1__ campspot_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1(void)
{
 maplocation_t *VAR_2, *VAR_3;
 campspot_t *VAR_4, *VAR_5;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2);
 }
 VAR_1 = ((void*)0);
 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->next;
  FUNC_0(VAR_4);
 }
 VAR_0 = ((void*)0);
}
