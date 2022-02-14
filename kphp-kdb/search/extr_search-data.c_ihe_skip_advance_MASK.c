
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* ihe_skip_advance1 ) (TYPE_1__*,long long) ;scalar_t__ cur1; scalar_t__ cur0; } ;
typedef TYPE_1__ iheap_en_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,long long) ;
 int FUNC_2 (TYPE_1__*,long long) ;

__attribute__((used)) inline static int FUNC_3 (iheap_en_t *VAR_0, long long VAR_1) {
  if (VAR_0->cur0) {
    FUNC_1 (VAR_0, VAR_1);
  }
  if (VAR_0->cur1) {
    VAR_0->ihe_skip_advance1 (VAR_0, VAR_1);
  }
  return FUNC_0 (VAR_0);
}
