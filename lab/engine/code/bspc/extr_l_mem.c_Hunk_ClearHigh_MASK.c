
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ memhunk_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1(void)
{
 memhunk_t *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2);
 }
 VAR_0 = ((void*)0);
 VAR_1 = 16 * 1024 * 1024;
}
