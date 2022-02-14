
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ th_triangle_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(char *VAR_0)
{
 th_triangle_t *VAR_1, *VAR_2, *VAR_3;
 int VAR_4;

 if (!FUNC_0(VAR_0, 0, 0))
  FUNC_1("couldn't load %s\n", VAR_0);


 FUNC_5();

 VAR_1 = FUNC_3();

 VAR_4 = 0;
 VAR_3 = ((void*)0);
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next)
 {
  VAR_4++;
  if (VAR_2->prev != VAR_3) FUNC_2("BAH\n");
  VAR_3 = VAR_2;
 }
 FUNC_2("%6d triangles\n", VAR_4);

 FUNC_6(VAR_1);

 FUNC_4();
}
