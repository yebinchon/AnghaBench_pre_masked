
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int doc_id; } ;
typedef TYPE_1__ pair_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0 (pair_t *VAR_2, int *VAR_3, int VAR_4) {
  if (VAR_4 <= 0) {
    return -1;
  }
  if (VAR_4 > VAR_0) {
    return VAR_1;
  }
  return VAR_2[VAR_3[VAR_4]].doc_id;
}
