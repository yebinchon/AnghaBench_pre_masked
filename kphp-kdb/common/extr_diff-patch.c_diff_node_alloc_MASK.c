
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_node {int x; struct diff_node* prev; } ;


 int VAR_0 ;
 struct diff_node* FUNC_0 (int,int ) ;

__attribute__((used)) static struct diff_node *FUNC_1 (int VAR_1, struct diff_node *VAR_2) {
  struct diff_node *VAR_3 = FUNC_0 (sizeof (struct diff_node), VAR_0);
  if (VAR_3 == ((void*)0)) { return VAR_3; }
  VAR_3->x = VAR_1;
  VAR_3->prev = VAR_2;
  return VAR_3;
}
