
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int * right; int * left; int right_name; int text; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tl_expression*,int) ;

__attribute__((used)) static void FUNC_3 (struct tl_expression *VAR_0) {
  FUNC_0 (&VAR_0->text);
  FUNC_0 (&VAR_0->right_name);
  FUNC_1 (VAR_0->left); VAR_0->left = ((void*)0);
  FUNC_1 (VAR_0->right); VAR_0->right = ((void*)0);
  FUNC_2 (VAR_0, sizeof (*VAR_0));
}
