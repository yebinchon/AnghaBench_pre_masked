
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int qp; int flags; int pkey; int port; int ca; } ;
struct ib_qp_attr {int qkey; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,union ib_gid*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,struct ib_qp_attr*,int ) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_6 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct net_device *VAR_5, struct ib_device *VAR_6,
         union ib_gid *VAR_7, u16 VAR_8, int VAR_9, u32 VAR_10)
{
 struct ipoib_dev_priv *VAR_11 = FUNC_4(VAR_5);
 struct ib_qp_attr *VAR_12 = ((void*)0);
 int VAR_13;
 u16 VAR_14;

 if (FUNC_2(VAR_11->ca, VAR_11->port, VAR_11->pkey, &VAR_14)) {
  FUNC_0(VAR_4, &VAR_11->flags);
  VAR_13 = -VAR_1;
  goto out;
 }
 FUNC_8(VAR_4, &VAR_11->flags);

 if (VAR_9) {
  VAR_13 = -VAR_0;
  VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_2);
  if (!VAR_12)
   goto out;


  VAR_12->qkey = VAR_10;
  VAR_13 = FUNC_3(VAR_11->qp, VAR_12, VAR_3);
  if (VAR_13) {
   FUNC_5(VAR_11, "failed to modify QP, ret = %d\n", VAR_13);
   goto out;
  }
 }


 VAR_13 = FUNC_1(VAR_11->qp, VAR_7, VAR_8);
 if (VAR_13)
  FUNC_5(VAR_11, "failed to attach to multicast group, ret = %d\n", VAR_13);

out:
 FUNC_6(VAR_12);
 return VAR_13;
}
