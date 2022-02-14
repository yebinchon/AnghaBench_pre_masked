
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int * rb_node; } ;
struct rb_node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rb_node*) ;
 int FUNC_2 (struct rb_node*,struct rb_root*) ;
 struct rb_node* FUNC_3 (struct rb_root*) ;
 struct rb_node* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static bool FUNC_5(struct rb_root *VAR_0,
       unsigned long long VAR_1)
{
 struct rb_node *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1 != 0);
  return 0;
 }

 while (VAR_3) {
  VAR_2 = VAR_3;
  VAR_3 = FUNC_4(VAR_2);
  FUNC_2(VAR_2, VAR_0);
  VAR_1--;
  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_1 != 0);
 FUNC_0(VAR_0->rb_node != ((void*)0));

 return 1;
}
