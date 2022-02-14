
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_operation {struct pending_operation* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pending_operation*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pending_operation* VAR_2 ;
 int * VAR_3 ;

void FUNC_3 (void) {
  struct pending_operation *VAR_4;
  for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
    FUNC_1 (VAR_4);
  }
  if (VAR_1) {
    FUNC_0 (VAR_0);
  } else {
    FUNC_2 ();
  }
  VAR_2 = VAR_3 = ((void*)0);
}
