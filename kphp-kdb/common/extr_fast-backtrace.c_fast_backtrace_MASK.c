
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {struct stack_frame* bp; void* ip; } ;


 void* VAR_0 ;
 struct stack_frame* FUNC_0 () ;

int FUNC_1 (void **VAR_1, int VAR_2) {
  struct stack_frame *VAR_3 = FUNC_0 ();
  int VAR_4 = 0;
  while (VAR_4 < VAR_2 && (void *) VAR_3 <= VAR_0 && !((long) VAR_3 & (sizeof (long) - 1))) {
    void *VAR_5 = VAR_3->ip;
    VAR_1[VAR_4++] = VAR_5;
    struct stack_frame *VAR_6 = VAR_3->bp;
    if (VAR_6 <= VAR_3) {
      break;
    }
    VAR_3 = VAR_6;
  }
  return VAR_4;
}
