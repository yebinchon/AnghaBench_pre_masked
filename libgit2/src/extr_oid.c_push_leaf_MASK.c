
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t* children; char const* tail; } ;
typedef TYPE_1__ trie_node ;
typedef size_t node_index ;
struct TYPE_7__ {scalar_t__ node_count; scalar_t__ size; int full; TYPE_1__* nodes; } ;
typedef TYPE_2__ git_oid_shorten ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static trie_node *FUNC_1(git_oid_shorten *VAR_1, node_index VAR_2, int VAR_3, const char *VAR_4)
{
 trie_node *VAR_5, *VAR_6;
 node_index VAR_7;

 if (VAR_1->node_count >= VAR_1->size) {
  if (FUNC_0(VAR_1, VAR_1->size * 2) < 0)
   return ((void*)0);
 }

 VAR_7 = (node_index)VAR_1->node_count++;

 if (VAR_1->node_count == VAR_0) {
  VAR_1->full = 1;
        return ((void*)0);
    }

 VAR_5 = &VAR_1->nodes[VAR_2];
 VAR_5->children[VAR_3] = -VAR_7;

 VAR_6 = &VAR_1->nodes[VAR_7];
 VAR_6->tail = VAR_4;

 return VAR_5;
}
