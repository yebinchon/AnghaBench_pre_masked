
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned long FUNC_0 (struct page*) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 struct page* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,struct page*,unsigned long,int ) ;

__attribute__((used)) static struct scatterlist *FUNC_4(struct scatterlist *VAR_1,
      struct page **VAR_2,
      unsigned long VAR_3,
      unsigned int VAR_4,
      int *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 bool VAR_8 = 0;
 bool VAR_9 = !FUNC_2(VAR_1);




 if (!VAR_9 && (FUNC_0(FUNC_2(VAR_1)) + (VAR_1->length >> VAR_0) ==
         FUNC_0(VAR_2[0])))
  VAR_8 = 1;

 while (VAR_7 != VAR_3) {
  unsigned long VAR_10;
  struct page *VAR_11 = VAR_2[VAR_7];

  VAR_6 = FUNC_0(VAR_11);




  for (VAR_10 = 0; VAR_7 != VAR_3 &&
         VAR_6 + VAR_10 == FUNC_0(VAR_2[VAR_7]) &&
         VAR_10 < (VAR_4 >> VAR_0);
       VAR_10++)
   VAR_7++;


  if (VAR_8) {
   if ((VAR_4 - VAR_1->length) >= (VAR_10 << VAR_0)) {
    FUNC_3(VAR_1, FUNC_2(VAR_1),
         VAR_1->length + (VAR_10 << VAR_0),
         0);
    VAR_8 = 0;
    continue;
   }
   VAR_8 = 0;
  }


  if (!VAR_9)
   VAR_1 = FUNC_1(VAR_1);

  (*VAR_5)++;
  FUNC_3(VAR_1, VAR_11, VAR_10 << VAR_0, 0);
  VAR_9 = 0;
 }

 return VAR_1;
}
