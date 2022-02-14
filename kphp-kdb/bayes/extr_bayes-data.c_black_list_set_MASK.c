
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text_len; struct TYPE_4__* next; void* text; } ;
typedef TYPE_1__ black_list ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,char*,int) ;
 void* FUNC_3 (int) ;

void FUNC_4 (char *VAR_1, int VAR_2) {
  black_list *VAR_3 = VAR_0;
  int VAR_4, VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    for (VAR_5 = VAR_4; VAR_5 < VAR_2 && VAR_1[VAR_5] != '\t'; VAR_5++) ;
    VAR_1[VAR_5] = 0;

    FUNC_0 (VAR_3->next == ((void*)0));
    VAR_3->next = FUNC_3 (sizeof (black_list));
    FUNC_1 (VAR_3->next);
    VAR_3->next->text_len = VAR_5 - VAR_4;
    VAR_3->next->text = FUNC_3 (VAR_5 - VAR_4 + 1);
    FUNC_2 (VAR_3->next->text, VAR_1 + VAR_4, VAR_5 - VAR_4 + 1);
    VAR_3 = VAR_3->next;

    VAR_4 = VAR_5;
  }
}
