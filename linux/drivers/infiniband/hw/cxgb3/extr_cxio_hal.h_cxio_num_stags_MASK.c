
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tpt_top; int tpt_base; } ;
struct cxio_rdev {TYPE_1__ rnic_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(struct cxio_rdev *VAR_1)
{
 return FUNC_0((int)VAR_0, (int)((VAR_1->rnic_info.tpt_top - VAR_1->rnic_info.tpt_base) >> 5));
}
