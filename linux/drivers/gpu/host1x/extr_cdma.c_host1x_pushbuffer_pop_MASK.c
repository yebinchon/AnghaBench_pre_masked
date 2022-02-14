
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_buffer {scalar_t__ fence; scalar_t__ size; } ;



__attribute__((used)) static void FUNC_0(struct push_buffer *VAR_0, unsigned int VAR_1)
{

 VAR_0->fence += VAR_1 * 8;

 if (VAR_0->fence >= VAR_0->size)
  VAR_0->fence -= VAR_0->size;
}
