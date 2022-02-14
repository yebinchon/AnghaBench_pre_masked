
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_buffer {long long size; scalar_t__ p; int buff; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,long long) ;
 int FUNC_2 (long long) ;

__attribute__((used)) static void FUNC_3 (struct transaction_buffer *VAR_0, long long VAR_1) {
  VAR_0->buff = FUNC_2 (VAR_1);
  if (!VAR_0->buff) {
    FUNC_1 ("Not enough memory to allocate transaction buffer (%lld bytes size).\n", VAR_1);
    FUNC_0 (1);
  }
  VAR_0->size = VAR_1;
  VAR_0->p = 0;
}
