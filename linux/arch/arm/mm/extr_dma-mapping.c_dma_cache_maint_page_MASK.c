
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (struct page*) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct page*) ;
 void* FUNC_6 (struct page*) ;
 unsigned long FUNC_7 (struct page*) ;
 struct page* FUNC_8 (unsigned long) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_1, unsigned long VAR_2,
 size_t VAR_3, enum dma_data_direction VAR_4,
 void (*VAR_5)(const void *, size_t, int))
{
 unsigned long VAR_6;
 size_t VAR_7 = VAR_3;

 VAR_6 = FUNC_7(VAR_1) + VAR_2 / VAR_0;
 VAR_2 %= VAR_0;







 do {
  size_t VAR_8 = VAR_7;
  void *VAR_9;

  VAR_1 = FUNC_8(VAR_6);

  if (FUNC_0(VAR_1)) {
   if (VAR_8 + VAR_2 > VAR_0)
    VAR_8 = VAR_0 - VAR_2;

   if (FUNC_1()) {
    VAR_9 = FUNC_2(VAR_1);
    VAR_5(VAR_9 + VAR_2, VAR_8, VAR_4);
    FUNC_4(VAR_9);
   } else {
    VAR_9 = FUNC_3(VAR_1);
    if (VAR_9) {
     VAR_5(VAR_9 + VAR_2, VAR_8, VAR_4);
     FUNC_5(VAR_1);
    }
   }
  } else {
   VAR_9 = FUNC_6(VAR_1) + VAR_2;
   VAR_5(VAR_9, VAR_8, VAR_4);
  }
  VAR_2 = 0;
  VAR_6++;
  VAR_7 -= VAR_8;
 } while (VAR_7);
}
