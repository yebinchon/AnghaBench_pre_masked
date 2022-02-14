
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int u; int e; } ;
typedef TYPE_1__ job ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;

int
FUNC_2()
{
 register job *VAR_2, *VAR_3;
 register int VAR_4 = 0;

 for (VAR_2=VAR_0; VAR_2; VAR_2=VAR_3) {
  FUNC_0(VAR_2->e, VAR_2->u);
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_4++;
 }
 VAR_0 = VAR_1 = ((void*)0);
 return VAR_4;
}
