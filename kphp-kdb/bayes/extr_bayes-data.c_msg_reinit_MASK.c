
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int random_tag; scalar_t__* text; } ;
typedef TYPE_1__ message ;


 scalar_t__* FUNC_0 (scalar_t__*,int,int) ;

int FUNC_1 (message *VAR_0, int VAR_1, int VAR_2) {
  VAR_0->text = FUNC_0 (VAR_0->text, VAR_1 + 1, VAR_0->len);
  if (VAR_0->text == ((void*)0)) {
    VAR_0->len = 0;
    return -1;
  }

  VAR_0->len = VAR_1 + 1;
  VAR_0->text[VAR_1] = 0;
  VAR_0->random_tag = VAR_2;

  return 0;
}
