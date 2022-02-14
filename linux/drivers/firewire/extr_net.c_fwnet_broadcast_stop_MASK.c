
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnet_device {scalar_t__ broadcast_state; int broadcast_rcv_context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fwnet_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fwnet_device *VAR_1)
{
 if (VAR_1->broadcast_state == VAR_0)
  return;
 FUNC_1(VAR_1->broadcast_rcv_context);
 FUNC_0(VAR_1);
}
