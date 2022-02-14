
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {char* name; char* id; char* ref; int children; int cont; } ;


 struct node* FUNC_0 (int *) ;
 struct node* FUNC_1 (struct node*,int ) ;
 int FUNC_2 (struct node*,struct node*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct node*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(struct node *VAR_1, struct node *VAR_2, int VAR_3)
{
 int VAR_4;
 struct node *VAR_5, *VAR_6;

 VAR_4 = FUNC_8(VAR_1->name, VAR_2->name);
 if (VAR_4)
  return (VAR_4);
 if (VAR_1->id && VAR_2->id)
  VAR_4 = FUNC_6(VAR_1->id, VAR_2->id);
 else if (VAR_1->id || VAR_2->id)
  VAR_4 = -1;
 if (VAR_4)
  return (VAR_4);
 if (VAR_1->ref && VAR_2->ref)
  VAR_4 = FUNC_6(VAR_1->ref, VAR_2->ref);
 else if (VAR_1->ref || VAR_2->ref)
  VAR_4 = -1;
 if (VAR_4)
  return (VAR_4);
 if (!FUNC_8(VAR_1->name, "ref"))
  VAR_4 = FUNC_6(FUNC_7(VAR_1->cont), FUNC_7(VAR_2->cont));
 else
  VAR_4 = FUNC_8(FUNC_7(VAR_1->cont), FUNC_7(VAR_2->cont));
 if (VAR_4)
  return (1);
 VAR_5 = FUNC_0(&VAR_1->children);
 VAR_6 = FUNC_0(&VAR_2->children);
 for (;;) {
  if (VAR_5 == ((void*)0) && VAR_6 == ((void*)0))
   return (0);
  if (VAR_5 != ((void*)0) && VAR_6 == ((void*)0)) {
   FUNC_5("1>");
   FUNC_3(VAR_3);
   FUNC_4(VAR_5);
   FUNC_5("2>\n");
   return (1);
  }
  if (VAR_5 == ((void*)0) && VAR_6 != ((void*)0)) {
   FUNC_5("1>\n");
   FUNC_5("2>");
   FUNC_3(VAR_3);
   FUNC_4(VAR_6);
   return (1);
  }
  VAR_4 = FUNC_2(VAR_5, VAR_6, VAR_3 + 2);
  if (VAR_4)
   return (1);
  VAR_5 = FUNC_1(VAR_5, VAR_0);
  VAR_6 = FUNC_1(VAR_6, VAR_0);
 }
 return (0);
}
