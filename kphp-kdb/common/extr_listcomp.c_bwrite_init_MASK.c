
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {unsigned int prefix_bit_offset; unsigned char* start_ptr; unsigned char* end_ptr; unsigned char* ptr; int m; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct bitwriter *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, unsigned int VAR_3) {
  VAR_0->prefix_bit_offset = VAR_3;
  VAR_0->start_ptr = VAR_1;
  VAR_0->end_ptr = VAR_2;
  VAR_0->ptr = VAR_1 + (VAR_3 >> 3);
  FUNC_0 (VAR_0->ptr < VAR_0->end_ptr);
  VAR_3 &= 7;
  VAR_0->m = 0x80 >> VAR_3;
  *VAR_0->ptr &= 0xffffff00U >> VAR_3;
}
