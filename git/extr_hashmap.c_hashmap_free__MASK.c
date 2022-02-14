
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_iter {int dummy; } ;
struct hashmap_entry {int dummy; } ;
struct hashmap {char* table; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hashmap*,struct hashmap_iter*) ;
 struct hashmap_entry* FUNC_2 (struct hashmap_iter*) ;
 int FUNC_3 (struct hashmap*,int ,int) ;

void FUNC_4(struct hashmap *VAR_0, ssize_t VAR_1)
{
 if (!VAR_0 || !VAR_0->table)
  return;
 if (VAR_1 >= 0) {
  struct hashmap_iter VAR_2;
  struct hashmap_entry *VAR_3;

  FUNC_1(VAR_0, &VAR_2);
  while ((VAR_3 = FUNC_2(&VAR_2)))




   FUNC_0((char *)VAR_3 - VAR_1);
 }
 FUNC_0(VAR_0->table);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
}
