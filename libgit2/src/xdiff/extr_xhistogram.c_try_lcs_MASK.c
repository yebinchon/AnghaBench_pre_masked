
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {unsigned int end1; unsigned int begin1; unsigned int begin2; unsigned int end2; } ;
struct record {unsigned int cnt; unsigned int ptr; struct record* next; } ;
struct histindex {unsigned int cnt; int has_common; struct record** records; } ;


 int FUNC_0 (struct histindex*,int,unsigned int,int,unsigned int) ;
 int FUNC_1 (struct histindex*,unsigned int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct histindex*,unsigned int) ;
 size_t FUNC_4 (struct histindex*,int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(
 struct histindex *VAR_0, struct region *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3, unsigned int VAR_4,
 unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_2 + 1;
 struct record *VAR_8 = VAR_0->records[FUNC_4(VAR_0, 2, VAR_2)];
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 for (; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->cnt > VAR_0->cnt) {
   if (!VAR_0->has_common)
    VAR_0->has_common = FUNC_0(VAR_0, 1, VAR_8->ptr, 2, VAR_2);
   continue;
  }

  VAR_9 = VAR_8->ptr;
  if (!FUNC_0(VAR_0, 1, VAR_9, 2, VAR_2))
   continue;

  VAR_0->has_common = 1;
  for (;;) {
   VAR_15 = 0;
   VAR_13 = FUNC_3(VAR_0, VAR_9);
   VAR_11 = VAR_2;
   VAR_10 = VAR_9;
   VAR_12 = VAR_11;
   VAR_14 = VAR_8->cnt;

   while (VAR_3 < VAR_9 && VAR_5 < VAR_11
    && FUNC_0(VAR_0, 1, VAR_9 - 1, 2, VAR_11 - 1)) {
    VAR_9--;
    VAR_11--;
    if (1 < VAR_14)
     VAR_14 = FUNC_5(VAR_14, FUNC_1(VAR_0, VAR_9));
   }
   while (VAR_10 < FUNC_2(1) && VAR_12 < FUNC_2(2)
    && FUNC_0(VAR_0, 1, VAR_10 + 1, 2, VAR_12 + 1)) {
    VAR_10++;
    VAR_12++;
    if (1 < VAR_14)
     VAR_14 = FUNC_5(VAR_14, FUNC_1(VAR_0, VAR_10));
   }

   if (VAR_7 <= VAR_12)
    VAR_7 = VAR_12 + 1;
   if (VAR_1->end1 - VAR_1->begin1 < VAR_10 - VAR_9 || VAR_14 < VAR_0->cnt) {
    VAR_1->begin1 = VAR_9;
    VAR_1->begin2 = VAR_11;
    VAR_1->end1 = VAR_10;
    VAR_1->end2 = VAR_12;
    VAR_0->cnt = VAR_14;
   }

   if (VAR_13 == 0)
    break;

   while (VAR_13 <= VAR_10) {
    VAR_13 = FUNC_3(VAR_0, VAR_13);
    if (VAR_13 == 0) {
     VAR_15 = 1;
     break;
    }
   }

   if (VAR_15)
    break;

   VAR_9 = VAR_13;
  }
 }
 return VAR_7;
}
