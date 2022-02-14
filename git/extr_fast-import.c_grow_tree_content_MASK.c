
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_content {scalar_t__ entry_count; int entries; int delta_depth; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 struct tree_content* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tree_content*) ;

__attribute__((used)) static struct tree_content *FUNC_3(
 struct tree_content *VAR_0,
 int VAR_1)
{
 struct tree_content *VAR_2 = FUNC_1(VAR_0->entry_count + VAR_1);
 VAR_2->entry_count = VAR_0->entry_count;
 VAR_2->delta_depth = VAR_0->delta_depth;
 FUNC_0(VAR_2->entries, VAR_0->entries, VAR_0->entry_count);
 FUNC_2(VAR_0);
 return VAR_2;
}
