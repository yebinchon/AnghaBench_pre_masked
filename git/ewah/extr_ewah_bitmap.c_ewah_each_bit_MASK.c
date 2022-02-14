
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {size_t buffer_size; int* buffer; } ;
typedef int eword_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 size_t FUNC_2 (int*) ;

void FUNC_3(struct ewah_bitmap *VAR_1, void (*VAR_2)(size_t, void*), void *VAR_3)
{
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;
 size_t VAR_6;

 while (VAR_5 < VAR_1->buffer_size) {
  eword_t *VAR_7 = &VAR_1->buffer[VAR_5];

  if (FUNC_1(VAR_7)) {
   size_t VAR_8 = FUNC_2(VAR_7) * VAR_0;
   for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6, ++VAR_4)
    VAR_2(VAR_4, VAR_3);
  } else {
   VAR_4 += FUNC_2(VAR_7) * VAR_0;
  }

  ++VAR_5;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); ++VAR_6) {
   int VAR_9;


   for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9, ++VAR_4) {
    if ((VAR_1->buffer[VAR_5] & ((eword_t)1 << VAR_9)) != 0)
     VAR_2(VAR_4, VAR_3);
   }

   ++VAR_5;
  }
 }
}
