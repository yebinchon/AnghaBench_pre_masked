
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int max_depth; } ;
struct rq_wb {unsigned int wb_background; unsigned int wb_normal; TYPE_1__ rq_depth; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct rq_wb*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rq_wb*) ;
 scalar_t__ FUNC_3 (struct rq_wb*) ;

__attribute__((used)) static inline unsigned int FUNC_4(struct rq_wb *VAR_5, unsigned long VAR_6)
{
 unsigned int VAR_7;





 if (!FUNC_2(VAR_5))
  return VAR_4;

 if ((VAR_6 & VAR_3) == VAR_2)
  return VAR_5->wb_background;
 if ((VAR_6 & VAR_1) || FUNC_3(VAR_5) || FUNC_1())
  VAR_7 = VAR_5->rq_depth.max_depth;
 else if ((VAR_6 & VAR_0) || FUNC_0(VAR_5)) {




  VAR_7 = VAR_5->wb_background;
 } else
  VAR_7 = VAR_5->wb_normal;

 return VAR_7;
}
