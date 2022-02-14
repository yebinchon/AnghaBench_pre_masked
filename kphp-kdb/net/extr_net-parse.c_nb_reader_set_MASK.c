
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuffer {int dummy; } ;
struct nb_reader {int bytes; int it; scalar_t__ ptr_s; scalar_t__ ptr_e; scalar_t__ p; scalar_t__ bytes_read; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct netbuffer*) ;

void FUNC_3 (struct nb_reader *VAR_0, struct netbuffer *VAR_1, const int VAR_2) {
  VAR_0->bytes = VAR_2;
  VAR_0->bytes_read = 0;
  FUNC_2 (&VAR_0->it, VAR_1);
  VAR_0->p = VAR_0->ptr_s = FUNC_0 (&VAR_0->it);
  VAR_0->ptr_e = VAR_0->ptr_s + FUNC_1 (&VAR_0->it);
}
