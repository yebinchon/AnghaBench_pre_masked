
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_flags; struct TYPE_3__* n_next; } ;
typedef TYPE_1__ NODE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(void)
{
 NODE *VAR_2;

 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->n_next)
  VAR_2->n_flags &= ~VAR_0;
}
