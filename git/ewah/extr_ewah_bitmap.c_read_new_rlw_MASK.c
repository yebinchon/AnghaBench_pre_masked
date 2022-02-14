
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_iterator {size_t pointer; int buffer_size; int lw; int rl; int b; int * buffer; scalar_t__ compressed; scalar_t__ literals; } ;
typedef int eword_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static void FUNC_3(struct ewah_iterator *VAR_0)
{
 const eword_t *VAR_1 = ((void*)0);

 VAR_0->literals = 0;
 VAR_0->compressed = 0;

 while (1) {
  VAR_1 = &VAR_0->buffer[VAR_0->pointer];

  VAR_0->rl = FUNC_2(VAR_1);
  VAR_0->lw = FUNC_0(VAR_1);
  VAR_0->b = FUNC_1(VAR_1);

  if (VAR_0->rl || VAR_0->lw)
   return;

  if (VAR_0->pointer < VAR_0->buffer_size - 1) {
   VAR_0->pointer++;
  } else {
   VAR_0->pointer = VAR_0->buffer_size;
   return;
  }
 }
}
