
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mask; } ;
typedef TYPE_1__ event ;



inline int FUNC_0 (event *VAR_0, int VAR_1) {
  return ((long long)VAR_0->mask >> VAR_1) & 1;
}
