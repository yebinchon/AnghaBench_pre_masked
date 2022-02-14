
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct ib_gid_attr {int gid; int device; } ;
struct bnxt_re_gid_ctx {int refcnt; size_t idx; } ;
struct bnxt_qplib_sgid_tbl {struct bnxt_re_gid_ctx** ctx; } ;
struct TYPE_4__ {TYPE_1__* netdev; struct bnxt_qplib_sgid_tbl sgid_tbl; } ;
struct bnxt_re_dev {TYPE_2__ qplib_res; } ;
struct bnxt_qplib_gid {int dummy; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt_qplib_sgid_tbl*,struct bnxt_qplib_gid*,int ,int,int,size_t*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 struct bnxt_re_gid_ctx* FUNC_2 (int,int ) ;
 int FUNC_3 (struct bnxt_re_dev*) ;
 int FUNC_4 (struct ib_gid_attr const*,int*,int *) ;
 struct bnxt_re_dev* FUNC_5 (int ,int ) ;

int FUNC_6(const struct ib_gid_attr *VAR_4, void **VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;
 u16 VAR_8 = 0xFFFF;
 struct bnxt_re_gid_ctx *VAR_9, **VAR_10;
 struct bnxt_re_dev *VAR_11 = FUNC_5(VAR_4->device, VAR_3);
 struct bnxt_qplib_sgid_tbl *VAR_12 = &VAR_11->qplib_res.sgid_tbl;

 VAR_6 = FUNC_4(VAR_4, &VAR_8, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_12, (struct bnxt_qplib_gid *)&VAR_4->gid,
     VAR_11->qplib_res.netdev->dev_addr,
     VAR_8, 1, &VAR_7);
 if (VAR_6 == -VAR_0) {
  VAR_10 = VAR_12->ctx;
  VAR_10[VAR_7]->refcnt++;
  *VAR_5 = VAR_10[VAR_7];
  return 0;
 }

 if (VAR_6 < 0) {
  FUNC_1(FUNC_3(VAR_11), "Failed to add GID: %#x", VAR_6);
  return VAR_6;
 }

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_10 = VAR_12->ctx;
 VAR_9->idx = VAR_7;
 VAR_9->refcnt = 1;
 VAR_10[VAR_7] = VAR_9;
 *VAR_5 = VAR_9;

 return VAR_6;
}
