
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_buffer {int * buff; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (struct transaction_buffer *VAR_0) {
  if (VAR_0->buff) {
    FUNC_0 (VAR_0->buff);
    VAR_0->buff = ((void*)0);
  }
}
