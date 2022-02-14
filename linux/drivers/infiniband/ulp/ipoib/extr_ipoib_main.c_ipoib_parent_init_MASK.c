
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int raw; } ;
struct ipoib_dev_priv {scalar_t__ port; TYPE_6__* dev; TYPE_2__* ca; TYPE_3__ local_gid; int pkey; int max_ib_mtu; } ;
struct ib_port_attr {int max_mtu; } ;
struct TYPE_10__ {scalar_t__ dev_id; scalar_t__ dev_port; scalar_t__ dev_addr; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ dev; int name; } ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,struct ib_port_attr*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (char*,int ,scalar_t__,...) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_4(VAR_0);
 struct ib_port_attr VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1->ca, VAR_1->port, &VAR_2);
 if (VAR_3) {
  FUNC_6("%s: ib_query_port %d failed\n", VAR_1->ca->name,
   VAR_1->port);
  return VAR_3;
 }
 VAR_1->max_ib_mtu = FUNC_1(VAR_2.max_mtu);

 VAR_3 = FUNC_2(VAR_1->ca, VAR_1->port, 0, &VAR_1->pkey);
 if (VAR_3) {
  FUNC_6("%s: ib_query_pkey port %d failed (ret = %d)\n",
   VAR_1->ca->name, VAR_1->port, VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_7(VAR_1->ca, VAR_1->port, 0, &VAR_1->local_gid);
 if (VAR_3) {
  FUNC_6("%s: rdma_query_gid port %d failed (ret = %d)\n",
   VAR_1->ca->name, VAR_1->port, VAR_3);
  return VAR_3;
 }
 FUNC_5(VAR_1->dev->dev_addr + 4, VAR_1->local_gid.raw,
        sizeof(union ib_gid));

 FUNC_0(VAR_1->dev, VAR_1->ca->dev.parent);
 VAR_1->dev->dev_port = VAR_1->port - 1;

 VAR_1->dev->dev_id = VAR_1->port - 1;

 return 0;
}
