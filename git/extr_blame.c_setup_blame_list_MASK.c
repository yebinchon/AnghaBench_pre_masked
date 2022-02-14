
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_list {struct blame_entry* ent; } ;
struct blame_entry {struct blame_entry* next; } ;


 struct blame_list* FUNC_0 (int,int) ;

__attribute__((used)) static struct blame_list *FUNC_1(struct blame_entry *VAR_0,
        int *VAR_1)
{
 struct blame_entry *VAR_2;
 int VAR_3, VAR_4;
 struct blame_list *VAR_5 = ((void*)0);

 for (VAR_2 = VAR_0, VAR_3 = 0; VAR_2; VAR_2 = VAR_2->next)
  VAR_3++;
 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_3, sizeof(struct blame_list));
  for (VAR_2 = VAR_0, VAR_4 = 0; VAR_2; VAR_2 = VAR_2->next)
   VAR_5[VAR_4++].ent = VAR_2;
 }
 *VAR_1 = VAR_3;
 return VAR_5;
}
