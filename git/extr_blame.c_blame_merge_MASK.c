
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {scalar_t__ s_lno; struct blame_entry* next; } ;



__attribute__((used)) static struct blame_entry *FUNC_0(struct blame_entry *VAR_0,
           struct blame_entry *VAR_1)
{
 struct blame_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1,
  **VAR_4 = &VAR_0;

 if (!VAR_2)
  return VAR_3;
 if (!VAR_3)
  return VAR_2;

 if (VAR_2->s_lno <= VAR_3->s_lno) {
  do {
   VAR_4 = &VAR_2->next;
   if ((VAR_2 = *VAR_4) == ((void*)0)) {
    *VAR_4 = VAR_3;
    return VAR_0;
   }
  } while (VAR_2->s_lno <= VAR_3->s_lno);
 }
 for (;;) {
  *VAR_4 = VAR_3;
  do {
   VAR_4 = &VAR_3->next;
   if ((VAR_3 = *VAR_4) == ((void*)0)) {
    *VAR_4 = VAR_2;
    return VAR_0;
   }
  } while (VAR_2->s_lno > VAR_3->s_lno);
  *VAR_4 = VAR_2;
  do {
   VAR_4 = &VAR_2->next;
   if ((VAR_2 = *VAR_4) == ((void*)0)) {
    *VAR_4 = VAR_3;
    return VAR_0;
   }
  } while (VAR_2->s_lno <= VAR_3->s_lno);
 }
}
