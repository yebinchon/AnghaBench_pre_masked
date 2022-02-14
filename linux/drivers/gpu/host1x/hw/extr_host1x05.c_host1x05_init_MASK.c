
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x {int * debug_op; int * intr_op; int * syncpt_op; int * cdma_pb_op; int * cdma_op; int * channel_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(struct host1x *VAR_6)
{
 VAR_6->channel_op = &VAR_1;
 VAR_6->cdma_op = &VAR_0;
 VAR_6->cdma_pb_op = &VAR_4;
 VAR_6->syncpt_op = &VAR_5;
 VAR_6->intr_op = &VAR_3;
 VAR_6->debug_op = &VAR_2;

 return 0;
}
