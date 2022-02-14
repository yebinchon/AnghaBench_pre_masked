
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * translate; int * fastmap; scalar_t__ allocated; int * buffer; } ;
typedef TYPE_1__ regex_t ;
typedef int re_dfa_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3 (regex_t *VAR_0)
{
  re_dfa_t *VAR_1 = (re_dfa_t *) VAR_0->buffer;
  if (FUNC_0 (VAR_1 != ((void*)0), 1))
    FUNC_1 (VAR_1);
  VAR_0->buffer = ((void*)0);
  VAR_0->allocated = 0;

  FUNC_2 (VAR_0->fastmap);
  VAR_0->fastmap = ((void*)0);

  FUNC_2 (VAR_0->translate);
  VAR_0->translate = ((void*)0);
}
