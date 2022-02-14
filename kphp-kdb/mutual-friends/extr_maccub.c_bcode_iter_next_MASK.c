
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i; scalar_t__ len; scalar_t__ val; int * ptr; } ;
typedef TYPE_1__ bcode_iterator ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;

void FUNC_1 (bcode_iterator *VAR_0) {
  if (VAR_0->ptr != ((void*)0) && VAR_0->i + 1 < VAR_0->len) {
    VAR_0->val = FUNC_0 (VAR_0, ++VAR_0->i);
  } else {
    VAR_0->val = 0;
  }
}
