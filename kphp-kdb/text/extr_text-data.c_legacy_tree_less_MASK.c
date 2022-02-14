
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long x; int z; } ;
typedef TYPE_1__ ltree_t ;



__attribute__((used)) static inline int FUNC_0 (long long VAR_0, int VAR_1, ltree_t *VAR_2) {
  return VAR_0 < VAR_2->x || (VAR_0 == VAR_2->x && VAR_1 < VAR_2->z);
}
