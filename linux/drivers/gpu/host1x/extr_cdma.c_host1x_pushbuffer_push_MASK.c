
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct push_buffer {int pos; scalar_t__ fence; scalar_t__ size; scalar_t__ mapped; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct push_buffer *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 *VAR_3 = (u32 *)((void *)VAR_0->mapped + VAR_0->pos);

 FUNC_0(VAR_0->pos == VAR_0->fence);
 *(VAR_3++) = VAR_1;
 *(VAR_3++) = VAR_2;
 VAR_0->pos += 8;

 if (VAR_0->pos >= VAR_0->size)
  VAR_0->pos -= VAR_0->size;
}
