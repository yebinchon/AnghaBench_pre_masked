
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ bound_dev_if; int net; } ;
struct TYPE_5__ {scalar_t__ ss_family; } ;
struct rdma_addr {TYPE_3__ dev_addr; TYPE_2__ src_addr; } ;
struct TYPE_4__ {struct rdma_addr addr; } ;
struct rdma_cm_id {scalar_t__ port_num; scalar_t__ ps; int device; TYPE_1__ route; } ;
struct net_device {scalar_t__ if_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(const struct rdma_cm_id *VAR_4,
         const struct net_device *VAR_5,
         u8 VAR_6)
{
 const struct rdma_addr *VAR_7 = &VAR_4->route.addr;

 if (!VAR_5) {
  if (VAR_4->port_num && VAR_4->port_num != VAR_6)
   return 0;

  if (VAR_4->ps == VAR_3) {
   if (VAR_7->src_addr.ss_family == VAR_1 ||
       VAR_7->src_addr.ss_family == VAR_2)
    return 1;
   return 0;
  }

  return VAR_7->src_addr.ss_family == VAR_0 ||
      FUNC_0(VAR_4->device, VAR_6);
 }

 return !VAR_7->dev_addr.bound_dev_if ||
        (FUNC_2(FUNC_1(VAR_5), VAR_7->dev_addr.net) &&
  VAR_7->dev_addr.bound_dev_if == VAR_5->if_index);
}
