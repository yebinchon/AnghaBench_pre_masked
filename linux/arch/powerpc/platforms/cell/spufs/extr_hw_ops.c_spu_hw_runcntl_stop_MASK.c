
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {TYPE_2__* spu; } ;
struct TYPE_4__ {int register_lock; TYPE_1__* problem; } ;
struct TYPE_3__ {int spu_status_R; int spu_runcntl_RW; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct spu_context *VAR_2)
{
 FUNC_3(&VAR_2->spu->register_lock);
 FUNC_2(&VAR_2->spu->problem->spu_runcntl_RW, VAR_0);
 while (FUNC_1(&VAR_2->spu->problem->spu_status_R) & VAR_1)
  FUNC_0();
 FUNC_4(&VAR_2->spu->register_lock);
}
