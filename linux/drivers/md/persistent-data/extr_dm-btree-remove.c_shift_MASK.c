
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {void* nr_entries; void* max_entries; } ;
struct btree_node {TYPE_1__ header; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct btree_node*,struct btree_node*,int) ;
 int FUNC_4 (struct btree_node*,int) ;

__attribute__((used)) static void FUNC_5(struct btree_node *VAR_0, struct btree_node *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = FUNC_2(VAR_0->header.nr_entries);
 uint32_t VAR_4 = FUNC_2(VAR_1->header.nr_entries);
 uint32_t VAR_5 = FUNC_2(VAR_0->header.max_entries);
 uint32_t VAR_6 = FUNC_2(VAR_1->header.max_entries);

 FUNC_0(VAR_5 != VAR_6);
 FUNC_0(VAR_3 - VAR_2 > VAR_5);
 FUNC_0(VAR_4 + VAR_2 > VAR_5);

 if (!VAR_2)
  return;

 if (VAR_2 > 0) {
  FUNC_4(VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_4(VAR_1, VAR_2);
 }

 VAR_0->header.nr_entries = FUNC_1(VAR_3 - VAR_2);
 VAR_1->header.nr_entries = FUNC_1(VAR_4 + VAR_2);
}
