
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int size; int ptr; } ;
typedef TYPE_5__ xrecord_t ;
struct hashmap {TYPE_1__* xpp; TYPE_4__* env; } ;
struct TYPE_8__ {TYPE_5__** recs; } ;
struct TYPE_7__ {TYPE_5__** recs; } ;
struct TYPE_9__ {TYPE_3__ xdf2; TYPE_2__ xdf1; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hashmap *VAR_0, int VAR_1, int VAR_2)
{
 xrecord_t *VAR_3 = VAR_0->env->xdf1.recs[VAR_1 - 1];
 xrecord_t *VAR_4 = VAR_0->env->xdf2.recs[VAR_2 - 1];
 return FUNC_0(VAR_3->ptr, VAR_3->size,
  VAR_4->ptr, VAR_4->size, VAR_0->xpp->flags);
}
