
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; int name; struct resource* parent; struct resource* sibling; struct resource* child; } ;


 int FUNC_0 (char*,int ,struct resource*,int ) ;

__attribute__((used)) static int FUNC_1(struct resource *VAR_0,
         struct resource *VAR_1)
{
 struct resource *VAR_2, **VAR_3;
 struct resource **VAR_4 = ((void*)0);

 for (VAR_3 = &VAR_0->child; (VAR_2 = *VAR_3) != ((void*)0); VAR_3 = &VAR_2->sibling) {
  if (VAR_2->end < VAR_1->start)
   continue;
  if (VAR_1->end < VAR_2->start)
   break;
  if (VAR_2->start < VAR_1->start || VAR_2->end > VAR_1->end)
   return -1;
  if (VAR_4 == ((void*)0))
   VAR_4 = VAR_3;
 }
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_1->parent = VAR_0;
 VAR_1->child = *VAR_4;
 VAR_1->sibling = *VAR_3;
 *VAR_4 = VAR_1;
 *VAR_3 = ((void*)0);
 for (VAR_2 = VAR_1->child; VAR_2 != ((void*)0); VAR_2 = VAR_2->sibling) {
  VAR_2->parent = VAR_1;
  FUNC_0("PCI: Reparented %s %pR under %s\n",
    VAR_2->name, VAR_2, VAR_1->name);
 }
 return 0;
}
