
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_req_t ;
struct TYPE_9__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_8__ {size_t size; TYPE_1__* entries; } ;
struct TYPE_10__ {TYPE_3__ sets; TYPE_2__ unsets; struct TYPE_10__* parent; } ;
typedef TYPE_4__ h2o_envconf_t ;
struct TYPE_11__ {int len; int base; } ;
struct TYPE_7__ {int len; int base; } ;


 TYPE_5__* FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(h2o_req_t *VAR_0, h2o_envconf_t *VAR_1)
{
    size_t VAR_2;

    if (VAR_1->parent != ((void*)0))
        FUNC_2(VAR_0, VAR_1->parent);
    for (VAR_2 = 0; VAR_2 != VAR_1->unsets.size; ++VAR_2)
        FUNC_1(VAR_0, VAR_1->unsets.entries[VAR_2].base, VAR_1->unsets.entries[VAR_2].len);
    for (VAR_2 = 0; VAR_2 != VAR_1->sets.size; VAR_2 += 2)
        *FUNC_0(VAR_0, VAR_1->sets.entries[VAR_2].base, VAR_1->sets.entries[VAR_2].len, 1) = VAR_1->sets.entries[VAR_2 + 1];
}
