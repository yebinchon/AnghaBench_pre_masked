
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {size_t buffer_size; size_t alloc_size; size_t bit_size; int * buffer; int rlw; } ;
typedef int eword_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ewah_bitmap*,size_t) ;
 int FUNC_1 (struct ewah_bitmap*,int ) ;
 int FUNC_2 (int *,int const*,size_t) ;
 size_t FUNC_3 (size_t,scalar_t__) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;

void FUNC_6(
 struct ewah_bitmap *VAR_2, const eword_t *VAR_3,
 size_t VAR_4, int VAR_5)
{
 size_t VAR_6, VAR_7;

 while (1) {
  VAR_6 = FUNC_4(VAR_2->rlw);
  VAR_7 = FUNC_3(VAR_4, VAR_1 - VAR_6);

  FUNC_5(VAR_2->rlw, VAR_6 + VAR_7);

  if (VAR_2->buffer_size + VAR_7 >= VAR_2->alloc_size)
   FUNC_0(VAR_2, (VAR_2->buffer_size + VAR_7) * 3 / 2);

  if (VAR_5) {
   size_t VAR_8;
   for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
    VAR_2->buffer[VAR_2->buffer_size++] = ~VAR_3[VAR_8];
  } else {
   FUNC_2(VAR_2->buffer + VAR_2->buffer_size,
    VAR_3, VAR_7 * sizeof(eword_t));
   VAR_2->buffer_size += VAR_7;
  }

  VAR_2->bit_size += VAR_7 * VAR_0;

  if (VAR_4 - VAR_7 == 0)
   break;

  FUNC_1(VAR_2, 0);
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }
}
