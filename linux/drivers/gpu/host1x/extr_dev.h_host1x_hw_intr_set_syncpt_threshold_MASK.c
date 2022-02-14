
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x {TYPE_1__* intr_op; } ;
struct TYPE_2__ {int (* set_syncpt_threshold ) (struct host1x*,unsigned int,int ) ;} ;


 int FUNC_0 (struct host1x*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0,
             unsigned int VAR_1,
             u32 VAR_2)
{
 VAR_0->intr_op->set_syncpt_threshold(VAR_0, VAR_1, VAR_2);
}
