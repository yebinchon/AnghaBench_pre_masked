
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x_cdma {int dummy; } ;
struct host1x {TYPE_1__* cdma_op; } ;
struct TYPE_2__ {int (* resume ) (struct host1x_cdma*,int ) ;} ;


 int FUNC_0 (struct host1x_cdma*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0,
      struct host1x_cdma *VAR_1, u32 VAR_2)
{
 VAR_0->cdma_op->resume(VAR_1, VAR_2);
}
