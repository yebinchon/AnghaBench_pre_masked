
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ewah_bitmap {size_t alloc_size; scalar_t__ buffer; scalar_t__ rlw; } ;
typedef int eword_t ;


 int FUNC_0 (scalar_t__,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct ewah_bitmap *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = (uint8_t *)VAR_0->rlw - (uint8_t *)VAR_0->buffer;

 if (VAR_0->alloc_size >= VAR_1)
  return;

 VAR_0->alloc_size = VAR_1;
 FUNC_0(VAR_0->buffer, VAR_0->alloc_size);
 VAR_0->rlw = VAR_0->buffer + (VAR_2 / sizeof(eword_t));
}
