
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* base; } ;
struct TYPE_9__ {int node; TYPE_1__ filename; } ;
typedef TYPE_3__ resolve_tag_node_cache_entry_t ;
struct TYPE_8__ {size_t size; TYPE_3__* entries; } ;
struct TYPE_10__ {TYPE_2__ node_cache; } ;
typedef TYPE_4__ resolve_tag_arg_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(resolve_tag_arg_t *VAR_0)
{
    size_t VAR_1;
    for (VAR_1 = 0; VAR_1 != VAR_0->node_cache.size; ++VAR_1) {
        resolve_tag_node_cache_entry_t *VAR_2 = VAR_0->node_cache.entries + VAR_1;
        FUNC_0(VAR_2->filename.base);
        FUNC_1(VAR_2->node, ((void*)0));
    }
    FUNC_0(VAR_0->node_cache.entries);
}
