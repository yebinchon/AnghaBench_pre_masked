
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_content {int dummy; } ;
struct avail_tree_content {struct avail_tree_content* next_avail; int entry_capacity; } ;


 struct avail_tree_content** VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tree_content *VAR_1)
{
 struct avail_tree_content *VAR_2 = (struct avail_tree_content*)VAR_1;
 unsigned int VAR_3 = FUNC_0(VAR_2->entry_capacity);
 VAR_2->next_avail = VAR_0[VAR_3];
 VAR_0[VAR_3] = VAR_2;
}
