
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {scalar_t__ pack; struct pack_list* next; } ;


 int FUNC_0 (struct pack_list*,struct pack_list const*,int) ;
 struct pack_list* FUNC_1 (int) ;

__attribute__((used)) static struct pack_list * FUNC_2(const struct pack_list *VAR_0,
            const struct pack_list *VAR_1)
{
 struct pack_list *VAR_2;
 const struct pack_list *VAR_3;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_3 = VAR_1;
 while (VAR_3 != ((void*)0)) {
  if (VAR_0->pack == VAR_3->pack)
   return FUNC_2(VAR_0->next, VAR_1);
  VAR_3 = VAR_3->next;
 }
 VAR_2 = FUNC_1(sizeof(struct pack_list));
 FUNC_0(VAR_2, VAR_0, sizeof(struct pack_list));
 VAR_2->next = FUNC_2(VAR_0->next, VAR_1);
 return VAR_2;
}
