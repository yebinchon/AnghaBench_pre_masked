
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_netdev_alloc_params {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_netdev_t { ____Placeholder_rdma_netdev_t } rdma_netdev_t ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_device*,struct rdma_netdev_alloc_params*) ;
 TYPE_1__* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_2, u8 VAR_3,
     enum rdma_netdev_t VAR_4,
     struct rdma_netdev_alloc_params *VAR_5)
{
 if (VAR_4 != VAR_1)
  return -VAR_0;

 return FUNC_0(FUNC_1(VAR_2)->mdev, VAR_2, VAR_5);
}
