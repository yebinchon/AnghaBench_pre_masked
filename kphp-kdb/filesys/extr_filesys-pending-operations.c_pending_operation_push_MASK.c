
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_operation {struct pending_operation* next; } ;


 struct pending_operation* VAR_0 ;
 struct pending_operation* VAR_1 ;

void FUNC_0 (struct pending_operation *VAR_2) {
  VAR_2->next = ((void*)0);
  if (VAR_0) {
    VAR_1->next = VAR_2;
    VAR_1 = VAR_2;
  } else {
    VAR_0 = VAR_1 = VAR_2;
  }
}
