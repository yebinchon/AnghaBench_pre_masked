
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct btree_node *VAR_0, uint64_t *VAR_1,
   unsigned VAR_2, unsigned VAR_3)
{
        return ((VAR_3 >= FUNC_0(VAR_0->header.nr_entries)) ||
  (FUNC_1(VAR_0->keys[VAR_3]) != VAR_1[VAR_2]));
}
