
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_queue_ops {int submit_packet; int uninitialize; int initialize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct kernel_queue_ops *VAR_3)
{
 VAR_3->initialize = VAR_0;
 VAR_3->uninitialize = VAR_2;
 VAR_3->submit_packet = VAR_1;
}
