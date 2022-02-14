
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_entry {int dummy; } ;
struct tree_desc {struct name_entry entry; int size; } ;


 scalar_t__ FUNC_0 (struct tree_desc*) ;

int FUNC_1(struct tree_desc *VAR_0, struct name_entry *VAR_1)
{
 if (!VAR_0->size)
  return 0;

 *VAR_1 = VAR_0->entry;
 if (FUNC_0(VAR_0))
  return 0;
 return 1;
}
