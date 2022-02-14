
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnet_device {scalar_t__ queued_datagrams; int netdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct fwnet_device *VAR_1)
{
 if (--VAR_1->queued_datagrams == VAR_0)
  FUNC_0(VAR_1->netdev);
}
