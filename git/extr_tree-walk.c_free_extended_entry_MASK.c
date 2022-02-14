
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc_x {struct tree_desc_skip* skip; } ;
struct tree_desc_skip {struct tree_desc_skip* prev; } ;


 int FUNC_0 (struct tree_desc_skip*) ;

__attribute__((used)) static void FUNC_1(struct tree_desc_x *VAR_0)
{
 struct tree_desc_skip *VAR_1, *VAR_2;

 for (VAR_2 = VAR_0->skip; VAR_2; VAR_2 = VAR_1) {
  VAR_1 = VAR_2->prev;
  FUNC_0(VAR_2);
 }
}
