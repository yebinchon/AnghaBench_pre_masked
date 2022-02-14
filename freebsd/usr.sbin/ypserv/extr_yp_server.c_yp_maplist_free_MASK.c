
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ypmaplist {struct ypmaplist* map; struct ypmaplist* next; } ;


 int FUNC_0 (struct ypmaplist*) ;

__attribute__((used)) static void FUNC_1(struct ypmaplist *VAR_0)
{
 register struct ypmaplist *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->map);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
 return;
}
