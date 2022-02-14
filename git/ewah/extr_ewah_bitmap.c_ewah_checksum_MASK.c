
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ewah_bitmap {int buffer_size; scalar_t__ bit_size; scalar_t__ buffer; } ;
typedef int eword_t ;



uint32_t FUNC_0(struct ewah_bitmap *VAR_0)
{
 const uint8_t *VAR_1 = (uint8_t *)VAR_0->buffer;
 uint32_t VAR_2 = (uint32_t)VAR_0->bit_size;
 size_t VAR_3 = VAR_0->buffer_size * sizeof(eword_t);

 while (VAR_3--)
  VAR_2 = (VAR_2 << 5) - VAR_2 + (uint32_t)*VAR_1++;

 return VAR_2;
}
