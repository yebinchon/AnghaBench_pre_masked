
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_channel {int dummy; } ;
struct host1x {TYPE_1__* channel_op; } ;
struct TYPE_2__ {int (* init ) (struct host1x_channel*,struct host1x*,unsigned int) ;} ;


 int FUNC_0 (struct host1x_channel*,struct host1x*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct host1x *VAR_0,
      struct host1x_channel *VAR_1,
      unsigned int VAR_2)
{
 return VAR_0->channel_op->init(VAR_1, VAR_0, VAR_2);
}
