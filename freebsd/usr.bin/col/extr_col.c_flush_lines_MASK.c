
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * l_prev; scalar_t__ l_line; struct TYPE_5__* l_next; } ;
typedef TYPE_1__ LINE ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
 LINE *VAR_3;

 while (--VAR_2 >= 0) {
  VAR_3 = VAR_0;
  VAR_0 = VAR_3->l_next;
  if (VAR_3->l_line) {
   FUNC_0();
   FUNC_1(VAR_3);
  }
  if (VAR_3->l_line || VAR_3->l_next)
   VAR_1++;
  if (VAR_3->l_line)
   (void)FUNC_2(VAR_3->l_line);
  FUNC_3(VAR_3);
 }
 if (VAR_0)
  VAR_0->l_prev = ((void*)0);
}
