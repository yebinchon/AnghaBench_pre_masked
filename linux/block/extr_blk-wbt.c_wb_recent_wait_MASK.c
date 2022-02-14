
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* q; } ;
struct rq_wb {TYPE_3__ rqos; } ;
struct bdi_writeback {scalar_t__ dirty_sleep; } ;
struct TYPE_5__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_4__ {struct bdi_writeback wb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct rq_wb *VAR_2)
{
 struct bdi_writeback *VAR_3 = &VAR_2->rqos.q->backing_dev_info->wb;

 return FUNC_0(VAR_1, VAR_3->dirty_sleep + VAR_0);
}
