
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int prefix_bit_offset; unsigned char const* start_ptr; unsigned char const* ptr; int m; } ;



void FUNC_0 (struct bitreader *VAR_0, const unsigned char *VAR_1, int VAR_2) {
  VAR_0->prefix_bit_offset = VAR_2;
  VAR_0->start_ptr = VAR_1;
  VAR_0->ptr = VAR_1 + (VAR_2 >> 3);
  VAR_0->m = (((int) *VAR_0->ptr++ << 24) + (1 << 23)) << (VAR_2 & 7);
}
