
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ magic; scalar_t__ rptr; scalar_t__ eptr; scalar_t__ wptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4 (int VAR_3) {
  FUNC_0 (VAR_2);
  FUNC_2 (VAR_2);
  FUNC_3 (VAR_1 && VAR_1->magic == VAR_0);
  if (VAR_3 < 0 || VAR_1->rptr + VAR_3 > VAR_1->eptr) {
    return 0;
  }
  VAR_1->wptr = VAR_1->rptr + VAR_3;
  FUNC_1 (VAR_2);
  return 1;
}
