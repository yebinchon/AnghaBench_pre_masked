
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int nr; struct entry* first; } ;
struct entry {scalar_t__ line2; struct entry* previous; struct entry* next; scalar_t__ anchor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct entry**,int,struct entry*) ;
 int FUNC_1 (struct entry**) ;
 struct entry** FUNC_2 (int) ;

__attribute__((used)) static struct entry *FUNC_3(struct hashmap *VAR_1)
{
 struct entry **VAR_2 = FUNC_2(VAR_1->nr * sizeof(struct entry *));
 int VAR_3 = 0, VAR_4;
 struct entry *VAR_5;






 int VAR_6 = -1;

 for (VAR_5 = VAR_1->first; VAR_5; VAR_5 = VAR_5->next) {
  if (!VAR_5->line2 || VAR_5->line2 == VAR_0)
   continue;
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_5);
  VAR_5->previous = VAR_4 < 0 ? ((void*)0) : VAR_2[VAR_4];
  ++VAR_4;
  if (VAR_4 <= VAR_6)
   continue;
  VAR_2[VAR_4] = VAR_5;
  if (VAR_5->anchor) {
   VAR_6 = VAR_4;
   VAR_3 = VAR_6 + 1;
  } else if (VAR_4 == VAR_3) {
   VAR_3++;
  }
 }


 if (!VAR_3) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }


 VAR_5 = VAR_2[VAR_3 - 1];
 VAR_5->next = ((void*)0);
 while (VAR_5->previous) {
  VAR_5->previous->next = VAR_5;
  VAR_5 = VAR_5->previous;
 }
 FUNC_1(VAR_2);
 return VAR_5;
}
