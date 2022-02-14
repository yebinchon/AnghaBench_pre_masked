
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_2__ xrecord_t ;
struct TYPE_6__ {TYPE_2__** recs; } ;
struct TYPE_8__ {TYPE_1__ xdf2; } ;
typedef TYPE_3__ xdfenv_t ;


 int FUNC_0 (int ,int ,int ,int ,long) ;

__attribute__((used)) static int FUNC_1(xdfenv_t *VAR_0, int VAR_1, xdfenv_t *VAR_2, int VAR_3,
  int VAR_4, long VAR_5)
{
 int VAR_6;
 xrecord_t **VAR_7 = VAR_0->xdf2.recs + VAR_1;
 xrecord_t **VAR_8 = VAR_2->xdf2.recs + VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_9 = FUNC_0(VAR_7[VAR_6]->ptr, VAR_7[VAR_6]->size,
   VAR_8[VAR_6]->ptr, VAR_8[VAR_6]->size, VAR_5);
  if (!VAR_9)
   return -1;
 }
 return 0;
}
