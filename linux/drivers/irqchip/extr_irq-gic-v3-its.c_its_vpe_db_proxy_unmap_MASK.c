
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct its_vpe {int dummy; } ;
struct TYPE_4__ {int has_direct_lpi; } ;
struct TYPE_3__ {int lock; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct its_vpe*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(struct its_vpe *VAR_2)
{
 if (!VAR_0->has_direct_lpi) {
  unsigned long VAR_3;

  FUNC_1(&VAR_1.lock, VAR_3);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_1.lock, VAR_3);
 }
}
