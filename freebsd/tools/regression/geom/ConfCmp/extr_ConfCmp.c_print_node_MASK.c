
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {char* name; char* id; char* ref; int key; int cont; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct node *VAR_0)
{
 FUNC_0("\"%s\" -- \"%s\" -- \"%s\"", VAR_0->name, FUNC_1(VAR_0->cont), FUNC_1(VAR_0->key));
 if (VAR_0->id)
  FUNC_0(" id=\"%s\"", VAR_0->id);
 if (VAR_0->ref)
  FUNC_0(" ref=\"%s\"", VAR_0->ref);
 FUNC_0("\n");
}
