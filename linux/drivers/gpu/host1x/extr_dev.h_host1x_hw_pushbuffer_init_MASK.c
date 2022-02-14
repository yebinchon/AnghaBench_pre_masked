
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_buffer {int dummy; } ;
struct host1x {TYPE_1__* cdma_pb_op; } ;
struct TYPE_2__ {int (* init ) (struct push_buffer*) ;} ;


 int FUNC_0 (struct push_buffer*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0,
          struct push_buffer *VAR_1)
{
 VAR_0->cdma_pb_op->init(VAR_1);
}
