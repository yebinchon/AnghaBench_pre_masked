
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct push_buffer {unsigned int fence; unsigned int pos; scalar_t__ size; } ;



__attribute__((used)) static u32 FUNC_0(struct push_buffer *VAR_0)
{
 unsigned int VAR_1 = VAR_0->fence;

 if (VAR_0->fence < VAR_0->pos)
  VAR_1 += VAR_0->size;

 return (VAR_1 - VAR_0->pos) / 8;
}
