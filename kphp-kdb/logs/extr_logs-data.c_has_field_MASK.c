
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ event ;


 scalar_t__ VAR_0 ;

inline int FUNC_0 (event *VAR_1, int VAR_2) {
  return VAR_0 || ((VAR_1->mask >> VAR_2) & 1);
}
