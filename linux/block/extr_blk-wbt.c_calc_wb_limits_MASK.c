
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_depth; } ;
struct rq_wb {scalar_t__ min_lat_nsec; int wb_normal; int wb_background; TYPE_1__ rq_depth; } ;



__attribute__((used)) static void FUNC_0(struct rq_wb *VAR_0)
{
 if (VAR_0->min_lat_nsec == 0) {
  VAR_0->wb_normal = VAR_0->wb_background = 0;
 } else if (VAR_0->rq_depth.max_depth <= 2) {
  VAR_0->wb_normal = VAR_0->rq_depth.max_depth;
  VAR_0->wb_background = 1;
 } else {
  VAR_0->wb_normal = (VAR_0->rq_depth.max_depth + 1) / 2;
  VAR_0->wb_background = (VAR_0->rq_depth.max_depth + 3) / 4;
 }
}
