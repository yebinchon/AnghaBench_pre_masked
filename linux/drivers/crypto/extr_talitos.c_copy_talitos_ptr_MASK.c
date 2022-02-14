
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int eptr; int len; int len1; int ptr; } ;



__attribute__((used)) static void FUNC_0(struct talitos_ptr *VAR_0,
        struct talitos_ptr *VAR_1, bool VAR_2)
{
 VAR_0->ptr = VAR_1->ptr;
 if (VAR_2) {
  VAR_0->len1 = VAR_1->len1;
 } else {
  VAR_0->len = VAR_1->len;
  VAR_0->eptr = VAR_1->eptr;
 }
}
