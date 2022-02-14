
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* text; scalar_t__ len; } ;
typedef TYPE_1__ message ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (message *VAR_3, int VAR_4) {
  if (FUNC_2 (VAR_3, VAR_4) < 0) {
    return -1;
  }

  if (VAR_2 > 2) {
    FUNC_1 (VAR_1, "bayes_set_ham\n%s\n", VAR_3->text);
  }

  return FUNC_0 (VAR_3->text, VAR_3->len - 1, VAR_0);
}
