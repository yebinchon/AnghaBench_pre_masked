
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uinfo; } ;
struct TYPE_4__ {int updated_at; } ;


 TYPE_1__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

int FUNC_2 (void) {
  if (!VAR_1) {
    return -1;
  }
  VAR_0.updated_at = FUNC_0 (1000000);
  FUNC_1 (VAR_1->uinfo, &VAR_0);
  FUNC_1 (VAR_1->uinfo + 1, &VAR_0);
  return 1;
}
