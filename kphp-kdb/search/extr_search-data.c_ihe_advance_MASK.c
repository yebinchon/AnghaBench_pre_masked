
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cur; scalar_t__ cur0; scalar_t__ cur1; } ;
typedef TYPE_1__ iheap_en_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (iheap_en_t *VAR_0) {
  if (!VAR_0->cur) { return 0; }
  if (VAR_0->cur == VAR_0->cur0) { return FUNC_1 (VAR_0); }
  else if (VAR_0->cur == VAR_0->cur1) { return FUNC_2 (VAR_0); }
  else FUNC_0 (0);
  return 0;
}
