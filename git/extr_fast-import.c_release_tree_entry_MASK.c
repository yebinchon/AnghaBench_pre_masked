
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_entry {scalar_t__ tree; } ;


 struct tree_entry* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tree_entry *VAR_1)
{
 if (VAR_1->tree)
  FUNC_0(VAR_1->tree);
 *((void**)VAR_1) = VAR_0;
 VAR_0 = VAR_1;
}
