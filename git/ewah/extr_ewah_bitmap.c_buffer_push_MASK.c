
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int buffer_size; int alloc_size; int * buffer; } ;
typedef int eword_t ;


 int FUNC_0 (struct ewah_bitmap*,int) ;

__attribute__((used)) static inline void FUNC_1(struct ewah_bitmap *VAR_0, eword_t VAR_1)
{
 if (VAR_0->buffer_size + 1 >= VAR_0->alloc_size)
  FUNC_0(VAR_0, VAR_0->buffer_size * 3 / 2);

 VAR_0->buffer[VAR_0->buffer_size++] = VAR_1;
}
