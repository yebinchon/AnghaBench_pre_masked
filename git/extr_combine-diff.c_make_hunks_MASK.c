
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sline {unsigned long flag; struct lline* lost; } ;
struct lline {unsigned long parent_map; struct lline* next; } ;


 unsigned long FUNC_0 (struct sline*,unsigned long,unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct sline*,unsigned long,int) ;
 scalar_t__ FUNC_2 (struct sline*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct sline *VAR_1, unsigned long VAR_2,
         int VAR_3, int VAR_4)
{
 unsigned long VAR_5 = (1UL<<VAR_3) - 1;
 unsigned long VAR_6 = (1UL<<VAR_3);
 unsigned long VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 <= VAR_2; VAR_7++) {
  if (FUNC_2(&VAR_1[VAR_7], VAR_5))
   VAR_1[VAR_7].flag |= VAR_6;
  else
   VAR_1[VAR_7].flag &= ~VAR_6;
 }
 if (!VAR_4)
  return FUNC_1(VAR_1, VAR_2, VAR_3);





 VAR_7 = 0;
 while (VAR_7 <= VAR_2) {
  unsigned long VAR_9, VAR_10, VAR_11;
  unsigned long VAR_12;
  while (VAR_7 <= VAR_2 && !(VAR_1[VAR_7].flag & VAR_6))
   VAR_7++;
  if (VAR_2 < VAR_7)
   break;
  VAR_10 = VAR_7;
  for (VAR_9 = VAR_7 + 1; VAR_9 <= VAR_2; VAR_9++) {
   if (!(VAR_1[VAR_9].flag & VAR_6)) {




    unsigned long VAR_13;
    int VAR_14 = 0;
    VAR_13 = FUNC_0(VAR_1, VAR_5,
           VAR_10, VAR_9);
    VAR_13 = (VAR_13 + VAR_0 < VAR_2 + 1) ?
     (VAR_13 + VAR_0) : VAR_2 + 1;
    while (VAR_13 && VAR_9 <= --VAR_13) {
     if (VAR_1[VAR_13].flag & VAR_6) {
      VAR_14 = 1;
      break;
     }
    }
    if (!VAR_14)
     break;
    VAR_9 = VAR_13;
   }
  }
  VAR_11 = VAR_9;
  VAR_12 = 0;
  VAR_8 = 0;
  for (VAR_9 = VAR_7; VAR_9 < VAR_11 && !VAR_8; VAR_9++) {
   unsigned long VAR_15 = VAR_1[VAR_9].flag & VAR_5;
   struct lline *VAR_16 = VAR_1[VAR_9].lost;
   if (VAR_15) {



    if (!VAR_12)
     VAR_12 = VAR_15;
    else if (VAR_12 != VAR_15) {
     VAR_8 = 1;
     break;
    }
   }
   while (VAR_16 && !VAR_8) {



    VAR_15 = VAR_16->parent_map;
    if (!VAR_12)
     VAR_12 = VAR_15;
    else if (VAR_12 != VAR_15) {
     VAR_8 = 1;
    }
    VAR_16 = VAR_16->next;
   }
  }

  if (!VAR_8 && VAR_12 != VAR_5) {

   for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++)
    VAR_1[VAR_9].flag &= ~VAR_6;
  }
  VAR_7 = VAR_11;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_8;
}
