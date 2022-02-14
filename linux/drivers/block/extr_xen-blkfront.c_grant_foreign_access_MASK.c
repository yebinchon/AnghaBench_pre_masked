
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grant {int page; int gref; } ;
struct blkfront_info {TYPE_1__* xbdev; } ;
struct TYPE_2__ {int otherend_id; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(const struct grant *VAR_0,
     const struct blkfront_info *VAR_1)
{
 FUNC_0(VAR_0->gref,
       VAR_1->xbdev->otherend_id,
       VAR_0->page,
       0);
}
