
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int random_tag; scalar_t__ len; int * text; } ;
typedef TYPE_1__ message ;


 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1 (message *VAR_0) {
 if (VAR_0->text != ((void*)0)) {
    FUNC_0 (VAR_0->text, VAR_0->len);
    VAR_0->text = ((void*)0);
  }
  VAR_0->len = 0;
  VAR_0->random_tag = -1;
}
