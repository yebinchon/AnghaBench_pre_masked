
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int rdma_net; } ;
struct ib_device {TYPE_1__ coredev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct net const*) ;
 int FUNC_1 (int *) ;

bool FUNC_2(const struct ib_device *VAR_1, const struct net *VAR_2)
{
 return (VAR_0 ||
  FUNC_0(FUNC_1(&VAR_1->coredev.rdma_net), VAR_2));
}
