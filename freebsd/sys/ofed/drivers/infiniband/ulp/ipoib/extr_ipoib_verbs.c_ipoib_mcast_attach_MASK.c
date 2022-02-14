
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct ipoib_dev_priv {int qp; int qkey; int flags; int pkey; int port; int ca; } ;
struct ib_qp_attr {int qkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,union ib_gid*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_5 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct ipoib_dev_priv *VAR_5, u16 VAR_6, union ib_gid *VAR_7, int VAR_8)
{
 struct ib_qp_attr *VAR_9 = ((void*)0);
 int VAR_10;
 u16 VAR_11;

 if (FUNC_2(VAR_5->ca, VAR_5->port, VAR_5->pkey, &VAR_11)) {
  FUNC_0(VAR_4, &VAR_5->flags);
  VAR_10 = -VAR_1;
  goto out;
 }
 FUNC_7(VAR_4, &VAR_5->flags);

 if (VAR_8) {
  VAR_10 = -VAR_0;
  VAR_9 = FUNC_6(sizeof *VAR_9, VAR_2);
  if (!VAR_9)
   goto out;


  VAR_9->qkey = VAR_5->qkey;
  VAR_10 = FUNC_3(VAR_5->qp, VAR_9, VAR_3);
  if (VAR_10) {
   FUNC_4(VAR_5, "failed to modify QP, ret = %d\n", VAR_10);
   goto out;
  }
 }


 VAR_10 = FUNC_1(VAR_5->qp, VAR_7, VAR_6);
 if (VAR_10)
  FUNC_4(VAR_5, "failed to attach to multicast group, ret = %d\n", VAR_10);

out:
 FUNC_5(VAR_9);
 return VAR_10;
}
