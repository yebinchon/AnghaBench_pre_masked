
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ magic; int wptr; int rptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4 (void) {
  FUNC_0 (VAR_2);
  FUNC_2 (VAR_2);
  FUNC_3 (VAR_1 && VAR_1->magic == VAR_0);
  FUNC_1 (VAR_2);
  return VAR_1->wptr - VAR_1->rptr;
}
