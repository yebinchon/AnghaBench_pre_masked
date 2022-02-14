
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int max_res; } ;
typedef TYPE_1__ query_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (query_t *VAR_1) {
  VAR_1->flags ^= 1;
  if (VAR_1->max_res != VAR_0) {
    VAR_1->max_res = ~VAR_1->max_res;
  }
}
