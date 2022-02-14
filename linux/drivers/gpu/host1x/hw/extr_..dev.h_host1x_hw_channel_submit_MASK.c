
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_job {int dummy; } ;
struct host1x {TYPE_1__* channel_op; } ;
struct TYPE_2__ {int (* submit ) (struct host1x_job*) ;} ;


 int FUNC_0 (struct host1x_job*) ;

__attribute__((used)) static inline int FUNC_1(struct host1x *VAR_0,
        struct host1x_job *VAR_1)
{
 return VAR_0->channel_op->submit(VAR_1);
}
