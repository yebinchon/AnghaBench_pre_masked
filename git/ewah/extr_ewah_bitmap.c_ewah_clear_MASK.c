
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int buffer_size; scalar_t__* buffer; scalar_t__* rlw; scalar_t__ bit_size; } ;



__attribute__((used)) static void FUNC_0(struct ewah_bitmap *VAR_0)
{
 VAR_0->buffer_size = 1;
 VAR_0->buffer[0] = 0;
 VAR_0->bit_size = 0;
 VAR_0->rlw = VAR_0->buffer;
}
