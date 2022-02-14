
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_ring_info {TYPE_1__* dev_info; int ring; } ;
struct TYPE_2__ {int rq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct blkfront_ring_info *VAR_0)
{
 if (!FUNC_0(&VAR_0->ring))
  FUNC_1(VAR_0->dev_info->rq, 1);
}
