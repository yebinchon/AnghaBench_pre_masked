
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {size_t bit_size; size_t* buffer; int buffer_size; int rlw; } ;
typedef size_t eword_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct ewah_bitmap*,int) ;
 int FUNC_2 (struct ewah_bitmap*,int ,size_t const) ;
 int FUNC_3 (struct ewah_bitmap*,size_t) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

void FUNC_9(struct ewah_bitmap *VAR_1, size_t VAR_2)
{
 const size_t VAR_3 =
  FUNC_0(VAR_2 + 1, VAR_0) -
  FUNC_0(VAR_1->bit_size, VAR_0);

 FUNC_4(VAR_2 >= VAR_1->bit_size);

 VAR_1->bit_size = VAR_2 + 1;

 if (VAR_3 > 0) {
  if (VAR_3 > 1)
   FUNC_2(VAR_1, 0, VAR_3 - 1);

  FUNC_3(VAR_1, (eword_t)1 << (VAR_2 % VAR_0));
  return;
 }

 if (FUNC_5(VAR_1->rlw) == 0) {
  FUNC_8(VAR_1->rlw,
   FUNC_6(VAR_1->rlw) - 1);
  FUNC_3(VAR_1, (eword_t)1 << (VAR_2 % VAR_0));
  return;
 }

 VAR_1->buffer[VAR_1->buffer_size - 1] |=
  ((eword_t)1 << (VAR_2 % VAR_0));


 if (VAR_1->buffer[VAR_1->buffer_size - 1] == (eword_t)(~0)) {
  VAR_1->buffer[--VAR_1->buffer_size] = 0;
  FUNC_7(VAR_1->rlw,
   FUNC_5(VAR_1->rlw) - 1);
  FUNC_1(VAR_1, 1);
 }
}
