
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trie_node ;
struct TYPE_3__ {size_t size; int * nodes; } ;
typedef TYPE_1__ git_oid_shorten ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int *,int,size_t) ;

__attribute__((used)) static int FUNC_3(git_oid_shorten *VAR_0, size_t VAR_1)
{
 VAR_0->nodes = FUNC_1(VAR_0->nodes, VAR_1, sizeof(trie_node));
 FUNC_0(VAR_0->nodes);

 if (VAR_1 > VAR_0->size) {
  FUNC_2(&VAR_0->nodes[VAR_0->size], 0x0, (VAR_1 - VAR_0->size) * sizeof(trie_node));
 }

 VAR_0->size = VAR_1;
 return 0;
}
