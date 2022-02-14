
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_iterator {scalar_t__ buffer_size; scalar_t__ pointer; scalar_t__ b; scalar_t__ literals; scalar_t__ compressed; scalar_t__ rl; scalar_t__ lw; int buffer; } ;
struct ewah_bitmap {scalar_t__ buffer_size; int buffer; } ;


 int FUNC_0 (struct ewah_iterator*) ;

void FUNC_1(struct ewah_iterator *VAR_0, struct ewah_bitmap *VAR_1)
{
 VAR_0->buffer = VAR_1->buffer;
 VAR_0->buffer_size = VAR_1->buffer_size;
 VAR_0->pointer = 0;

 VAR_0->lw = 0;
 VAR_0->rl = 0;
 VAR_0->compressed = 0;
 VAR_0->literals = 0;
 VAR_0->b = 0;

 if (VAR_0->pointer < VAR_0->buffer_size)
  FUNC_0(VAR_0);
}
