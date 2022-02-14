
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_bitmap_point {int start_bit; scalar_t__ num_bits; } ;



__attribute__((used)) static void FUNC_0(unsigned int VAR_0,
       struct alps_bitmap_point *VAR_1,
       struct alps_bitmap_point *VAR_2,
       int *VAR_3)
{
 struct alps_bitmap_point *VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 VAR_4 = VAR_1;
 for (VAR_5 = 0; VAR_0 != 0; VAR_5++, VAR_0 >>= 1) {
  VAR_6 = VAR_0 & 1;
  if (VAR_6) {
   if (!VAR_7) {
    VAR_4->start_bit = VAR_5;
    VAR_4->num_bits = 0;
    (*VAR_3)++;
   }
   VAR_4->num_bits++;
  } else {
   if (VAR_7)
    VAR_4 = VAR_2;
  }
  VAR_7 = VAR_6;
 }
}
