
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_iterator {scalar_t__ pointer; scalar_t__ buffer_size; scalar_t__ compressed; scalar_t__ rl; scalar_t__ literals; scalar_t__ lw; int * buffer; scalar_t__ b; } ;
typedef int eword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ewah_iterator*) ;

int FUNC_2(eword_t *VAR_0, struct ewah_iterator *VAR_1)
{
 if (VAR_1->pointer >= VAR_1->buffer_size)
  return 0;

 if (VAR_1->compressed < VAR_1->rl) {
  VAR_1->compressed++;
  *VAR_0 = VAR_1->b ? (eword_t)(~0) : 0;
 } else {
  FUNC_0(VAR_1->literals < VAR_1->lw);

  VAR_1->literals++;
  VAR_1->pointer++;

  FUNC_0(VAR_1->pointer < VAR_1->buffer_size);

  *VAR_0 = VAR_1->buffer[VAR_1->pointer];
 }

 if (VAR_1->compressed == VAR_1->rl && VAR_1->literals == VAR_1->lw) {
  if (++VAR_1->pointer < VAR_1->buffer_size)
   FUNC_1(VAR_1);
 }

 return 1;
}
