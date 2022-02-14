
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_radix_node {scalar_t__ rn_count; struct vm_radix_node** rn_child; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vm_radix_node*) ;
 int FUNC_2 (struct vm_radix_node*) ;

__attribute__((used)) static void
FUNC_3(struct vm_radix_node *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->rn_count <= VAR_0,
     ("vm_radix_reclaim_allnodes_int: bad count in rnode %p", VAR_1));
 for (VAR_2 = 0; VAR_1->rn_count != 0; VAR_2++) {
  if (VAR_1->rn_child[VAR_2] == ((void*)0))
   continue;
  if (!FUNC_1(VAR_1->rn_child[VAR_2]))
   FUNC_3(VAR_1->rn_child[VAR_2]);
  VAR_1->rn_child[VAR_2] = ((void*)0);
  VAR_1->rn_count--;
 }
 FUNC_2(VAR_1);
}
