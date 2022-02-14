
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long flag; int * p_lno; struct lline* lost; } ;
struct lline {unsigned long parent_map; struct lline* next; } ;



__attribute__((used)) static void FUNC_0(struct sline *VAR_0, unsigned long VAR_1,
          int VAR_2, int VAR_3)
{




 unsigned long VAR_4, VAR_5, VAR_6;
 VAR_5 = (1UL<<VAR_2);
 VAR_6 = (1UL<<VAR_3);

 for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
  struct lline *VAR_7 = VAR_0->lost;
  VAR_0->p_lno[VAR_2] = VAR_0->p_lno[VAR_3];
  while (VAR_7) {
   if (VAR_7->parent_map & VAR_6)
    VAR_7->parent_map |= VAR_5;
   VAR_7 = VAR_7->next;
  }
  if (VAR_0->flag & VAR_6)
   VAR_0->flag |= VAR_5;
  VAR_0++;
 }

 VAR_0->p_lno[VAR_2] = VAR_0->p_lno[VAR_3];
}
