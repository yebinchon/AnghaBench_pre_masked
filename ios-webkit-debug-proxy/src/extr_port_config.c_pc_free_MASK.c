
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pc_struct {int dummy; } ;
typedef TYPE_1__* pc_t ;
struct TYPE_6__ {scalar_t__ re; struct TYPE_6__* groups; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(pc_t VAR_0) {
  if (VAR_0) {
    FUNC_2(VAR_0);
    FUNC_0(VAR_0->groups);
    if (VAR_0->re) {
      FUNC_3(VAR_0->re);
    }
    FUNC_1(VAR_0, 0, sizeof(struct pc_struct));
    FUNC_0(VAR_0);
  }
}
