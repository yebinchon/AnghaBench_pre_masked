
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_operation {struct pending_operation* newpath; struct pending_operation* oldpath; struct pending_operation* next; } ;


 struct pending_operation* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct pending_operation*) ;
 int FUNC_1 (struct pending_operation*,int) ;

__attribute__((used)) static void FUNC_2 (void) {
  struct pending_operation *VAR_2 = VAR_0, *VAR_3;
  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
    VAR_3 = VAR_2->next;
    if (VAR_2->oldpath) { FUNC_1 (VAR_2->oldpath, FUNC_0 (VAR_2->oldpath) + 1); }
    if (VAR_2->newpath) { FUNC_1 (VAR_2->newpath, FUNC_0 (VAR_2->newpath) + 1); }
    FUNC_1 (VAR_2, sizeof (*VAR_2));
  }
  VAR_0 = VAR_1 = ((void*)0);
}
