
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {struct pack_list* next; int pack; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1(struct pack_list *VAR_0)
{
 struct pack_list *VAR_1;
 size_t VAR_2 = 0;

 if (VAR_0 == ((void*)0))
  return 0;

 while ((VAR_1 = VAR_0->next)) {
  while (VAR_1) {
   VAR_2 += FUNC_0(VAR_0->pack, VAR_1->pack);
   VAR_1 = VAR_1->next;
  }
  VAR_0 = VAR_0->next;
 }
 return VAR_2;
}
