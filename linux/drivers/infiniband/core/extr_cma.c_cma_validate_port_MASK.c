
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct rdma_dev_addr {int bound_dev_if; int dev_type; int net; } ;
struct TYPE_4__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; } ;
struct net_device {int dummy; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_gid_attr const* FUNC_0 (int ) ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ib_device*,int ) ;
 struct ib_gid_attr* FUNC_4 (struct ib_device*,union ib_gid*,int,int ,struct net_device*) ;
 scalar_t__ FUNC_5 (struct ib_device*,int ) ;
 scalar_t__ FUNC_6 (struct ib_device*,int ) ;

__attribute__((used)) static const struct ib_gid_attr *
FUNC_7(struct ib_device *VAR_4, u8 VAR_5,
    enum ib_gid_type VAR_6,
    union ib_gid *VAR_7,
    struct rdma_id_private *VAR_8)
{
 struct rdma_dev_addr *VAR_9 = &VAR_8->id.route.addr.dev_addr;
 int VAR_10 = VAR_9->bound_dev_if;
 const struct ib_gid_attr *VAR_11;
 int VAR_12 = VAR_9->dev_type;
 struct net_device *VAR_13 = ((void*)0);

 if (!FUNC_3(VAR_4, VAR_8->id.route.addr.dev_addr.net))
  return FUNC_0(-VAR_2);

 if ((VAR_12 == VAR_1) && !FUNC_5(VAR_4, VAR_5))
  return FUNC_0(-VAR_2);

 if ((VAR_12 != VAR_1) && FUNC_5(VAR_4, VAR_5))
  return FUNC_0(-VAR_2);

 if (VAR_12 == VAR_0 && FUNC_6(VAR_4, VAR_5)) {
  VAR_13 = FUNC_1(VAR_9->net, VAR_10);
  if (!VAR_13)
   return FUNC_0(-VAR_2);
 } else {
  VAR_6 = VAR_3;
 }

 VAR_11 = FUNC_4(VAR_4, VAR_7, VAR_6, VAR_5, VAR_13);
 if (VAR_13)
  FUNC_2(VAR_13);
 return VAR_11;
}
