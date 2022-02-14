
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct btree_node *VAR_0, uint64_t VAR_1, int VAR_2)
{
 int VAR_3 = -1, VAR_4 = FUNC_0(VAR_0->header.nr_entries);

 while (VAR_4 - VAR_3 > 1) {
  int VAR_5 = VAR_3 + ((VAR_4 - VAR_3) / 2);
  uint64_t VAR_6 = FUNC_1(VAR_0->keys[VAR_5]);

  if (VAR_6 == VAR_1)
   return VAR_5;

  if (VAR_6 < VAR_1)
   VAR_3 = VAR_5;
  else
   VAR_4 = VAR_5;
 }

 return VAR_2 ? VAR_4 : VAR_3;
}
