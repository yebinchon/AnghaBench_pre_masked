
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** recs; } ;
struct TYPE_7__ {TYPE_2__ xdf2; } ;
typedef TYPE_3__ xdfenv_t ;
struct TYPE_5__ {int size; int ptr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(xdfenv_t *VAR_0, int VAR_1, int VAR_2)
{
 for (; VAR_2; VAR_2--, VAR_1++)
  if (FUNC_0(VAR_0->xdf2.recs[VAR_1]->ptr,
    VAR_0->xdf2.recs[VAR_1]->size))
   return 1;
 return 0;
}
