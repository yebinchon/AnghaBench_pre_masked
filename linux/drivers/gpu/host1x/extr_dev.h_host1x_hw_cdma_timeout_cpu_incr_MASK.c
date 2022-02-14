
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x_cdma {int dummy; } ;
struct host1x {TYPE_1__* cdma_op; } ;
struct TYPE_2__ {int (* timeout_cpu_incr ) (struct host1x_cdma*,int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct host1x_cdma*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0,
         struct host1x_cdma *VAR_1,
         u32 VAR_2,
         u32 VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 VAR_0->cdma_op->timeout_cpu_incr(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5);
}
