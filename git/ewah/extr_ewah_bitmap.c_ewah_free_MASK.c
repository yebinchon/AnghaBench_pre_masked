
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {struct ewah_bitmap* buffer; scalar_t__ alloc_size; } ;


 int FUNC_0 (struct ewah_bitmap*) ;

void FUNC_1(struct ewah_bitmap *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->alloc_size)
  FUNC_0(VAR_0->buffer);

 FUNC_0(VAR_0);
}
