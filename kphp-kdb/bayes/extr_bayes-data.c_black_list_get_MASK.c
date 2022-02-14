
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text_len; struct TYPE_3__* next; int text; } ;
typedef TYPE_1__ black_list ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

int FUNC_1 (char *VAR_1, int VAR_2) {
  black_list *VAR_3 = VAR_0;
  int VAR_4 = 0;
  while (VAR_3->next != ((void*)0) && VAR_3->next->text_len + VAR_4 + 1 < VAR_2) {
    FUNC_0 (VAR_1 + VAR_4, VAR_3->next->text, VAR_3->next->text_len);
    VAR_4 += VAR_3->next->text_len;
    VAR_1[VAR_4++] = '\t';
    VAR_3 = VAR_3->next;
  }
  if (VAR_4 == 0) {
    VAR_4 = 1;
  }
  VAR_1[VAR_4 - 1] = 0;

  if (VAR_3->next != ((void*)0)) {
    return -1;
  }

  return VAR_4 - 1;
}
