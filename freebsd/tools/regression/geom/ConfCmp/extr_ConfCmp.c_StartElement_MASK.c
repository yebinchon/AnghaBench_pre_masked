
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int children; struct node* parent; int key; void* name; void* ref; void* id; } ;
struct mytree {int ignore; int indent; struct node* cur; } ;


 int FUNC_0 (int *,struct node*,int ) ;
 struct node* FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char const*,char*) ;
 void* FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, const char *VAR_2, const char **VAR_3)
{
 struct mytree *VAR_4;
 struct node *VAR_5;
 int VAR_6;

 VAR_4 = VAR_1;
 if (!FUNC_3(VAR_2, "FreeBSD")) {
  VAR_4->ignore = 1;
  return;
 }
 VAR_4->ignore = 0;
 VAR_4->indent += 2;
 VAR_5 = FUNC_1();
 for (VAR_6 = 0; VAR_3[VAR_6]; VAR_6 += 2) {
  if (!FUNC_3(VAR_3[VAR_6], "id"))
   VAR_5->id = FUNC_4(VAR_3[VAR_6+1]);
  else if (!FUNC_3(VAR_3[VAR_6], "ref"))
   VAR_5->ref = FUNC_4(VAR_3[VAR_6+1]);
 }
 VAR_5->name = FUNC_4(VAR_2);
 FUNC_2(VAR_5->key, VAR_2);
 FUNC_2(VAR_5->key, "::");
 VAR_5->parent = VAR_4->cur;
 FUNC_0(&VAR_4->cur->children, VAR_5, VAR_0);
 VAR_4->cur = VAR_5;
}
