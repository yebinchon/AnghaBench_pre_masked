
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree_t ;
struct TYPE_3__ {int Sp; int ** St; } ;
typedef TYPE_1__ tree_iterator_t ;



__attribute__((used)) static inline tree_t *FUNC_0 (tree_iterator_t *VAR_0) {
  return VAR_0->Sp ? VAR_0->St[VAR_0->Sp - 1] : 0;
}
