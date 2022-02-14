
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_5__ {void* rkey; void* lkey; } ;
struct TYPE_6__ {int index; TYPE_1__* pool; } ;
struct rxe_mem {int map_shift; int type; int state; void* rkey; void* lkey; TYPE_2__ ibmr; TYPE_3__ pelem; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_5, struct rxe_mem *VAR_6)
{
 u32 VAR_7 = VAR_6->pelem.index << 8 | FUNC_1();
 u32 VAR_8 = (VAR_5 & VAR_0) ? VAR_7 : 0;

 if (VAR_6->pelem.pool->type == VAR_4) {
  VAR_6->ibmr.lkey = VAR_7;
  VAR_6->ibmr.rkey = VAR_8;
 }

 VAR_6->lkey = VAR_7;
 VAR_6->rkey = VAR_8;
 VAR_6->state = VAR_2;
 VAR_6->type = VAR_3;
 VAR_6->map_shift = FUNC_0(VAR_1);
}
