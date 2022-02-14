
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ op; } ;
typedef TYPE_1__ inst ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(inst *VAR_1, int VAR_2) {
  return !((FUNC_0(VAR_1->op)->flags & VAR_2) != VAR_2 && VAR_1->op != VAR_0);
}
