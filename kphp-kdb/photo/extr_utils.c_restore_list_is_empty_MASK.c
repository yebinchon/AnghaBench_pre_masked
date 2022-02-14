
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (int ) ;

int FUNC_1 (restore_list *VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_0 (VAR_0->next != ((void*)0));
  }
  return VAR_0 == ((void*)0) || VAR_0->next == VAR_0;
}
