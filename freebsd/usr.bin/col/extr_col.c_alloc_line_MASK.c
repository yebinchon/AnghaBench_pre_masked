
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* l_next; } ;
typedef TYPE_1__ LINE ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static LINE *
FUNC_3(void)
{
 LINE *VAR_2;
 int VAR_3;

 if (!VAR_1) {
  if ((VAR_2 = FUNC_2(((void*)0), sizeof(LINE) * VAR_0)) == ((void*)0))
   FUNC_0(1, ((void*)0));
  VAR_1 = VAR_2;
  for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++, VAR_2++)
   VAR_2->l_next = VAR_2 + 1;
  VAR_2->l_next = ((void*)0);
 }
 VAR_2 = VAR_1;
 VAR_1 = VAR_2->l_next;

 FUNC_1(VAR_2, 0, sizeof(LINE));
 return (VAR_2);
}
