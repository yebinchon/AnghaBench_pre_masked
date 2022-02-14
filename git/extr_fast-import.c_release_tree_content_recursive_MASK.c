
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_content {unsigned int entry_count; int * entries; } ;


 int FUNC_0 (struct tree_content*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tree_content *VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->entry_count; VAR_1++)
  FUNC_1(VAR_0->entries[VAR_1]);
 FUNC_0(VAR_0);
}
