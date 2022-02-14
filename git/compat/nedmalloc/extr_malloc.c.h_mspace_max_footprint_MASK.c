
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef int mspace ;
struct TYPE_5__ {size_t max_footprint; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

size_t FUNC_2(mspace VAR_0) {
  size_t VAR_1 = 0;
  mstate VAR_2 = (mstate)VAR_0;
  if (FUNC_1(VAR_2)) {
    VAR_1 = VAR_2->max_footprint;
  }
  else {
    FUNC_0(VAR_2,VAR_2);
  }
  return VAR_1;
}
