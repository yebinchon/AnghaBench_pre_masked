
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ node_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

node_t *FUNC_5(void)
{
 node_t *VAR_4;

 FUNC_1();
 VAR_3++;
 if (!VAR_0)
 {
  if (VAR_3 >= FUNC_0()) FUNC_2(FUNC_0());
 }
 FUNC_4();

 FUNC_3();

 FUNC_1();

 VAR_3--;

 VAR_4 = VAR_0;
 if (VAR_0)
 {
  VAR_0 = VAR_0->next;
  VAR_2--;
 }
 if (!VAR_0) VAR_1 = ((void*)0);

 FUNC_4();

 return VAR_4;
}
