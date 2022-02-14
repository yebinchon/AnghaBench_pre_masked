
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picoIndex_t ;
struct TYPE_6__ {scalar_t__ data; scalar_t__ last; } ;
struct TYPE_5__ {int indices; TYPE_2__ tree; } ;
typedef TYPE_1__ UniqueIndices ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

picoIndex_t FUNC_3(UniqueIndices* VAR_0, picoIndex_t VAR_1) {
 if (VAR_0->tree.data == VAR_0->tree.last) {
  FUNC_1(&VAR_0->tree);
  FUNC_2(&VAR_0->indices, VAR_1);
  return 0;
 }
 else
 {
  return FUNC_0(VAR_0, VAR_1);
 }
}
