
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* cmp; } ;
struct TYPE_2__ {int waiting_for; int err; int com; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vio_driver_state *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->cmp &&
     (VAR_2 == -1 ||
      VAR_0->cmp->waiting_for == VAR_2)) {
  VAR_0->cmp->err = VAR_1;
  FUNC_0(&VAR_0->cmp->com);
  VAR_0->cmp = ((void*)0);
 }
}
