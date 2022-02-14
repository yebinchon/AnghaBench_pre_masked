
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct in6_addr {int dummy; } ;
struct ib_gid_attr {int device; } ;
struct bnxt_re_gid_ctx {size_t idx; int refcnt; } ;
struct bnxt_qplib_sgid_tbl {size_t max; struct bnxt_re_gid_ctx** ctx; TYPE_2__* tbl; scalar_t__ active; } ;
struct TYPE_3__ {struct bnxt_qplib_sgid_tbl sgid_tbl; } ;
struct bnxt_re_dev {scalar_t__ qp1_sqp; TYPE_1__ qplib_res; } ;
struct bnxt_qplib_gid {int dummy; } ;
struct TYPE_4__ {int vlan_id; struct bnxt_qplib_gid gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_qplib_sgid_tbl*,struct bnxt_qplib_gid*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct bnxt_re_gid_ctx*) ;
 int FUNC_4 (struct bnxt_re_dev*) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;
 struct bnxt_re_dev* FUNC_6 (int ,int ) ;

int FUNC_7(const struct ib_gid_attr *VAR_3, void **VAR_4)
{
 int VAR_5 = 0;
 struct bnxt_re_gid_ctx *VAR_6, **VAR_7;
 struct bnxt_re_dev *VAR_8 = FUNC_6(VAR_3->device, VAR_2);
 struct bnxt_qplib_sgid_tbl *VAR_9 = &VAR_8->qplib_res.sgid_tbl;
 struct bnxt_qplib_gid *VAR_10;
 u16 VAR_11 = 0xFFFF;


 VAR_6 = *VAR_4;
 if (!VAR_6)
  return -VAR_1;

 if (VAR_9 && VAR_9->active) {
  if (VAR_6->idx >= VAR_9->max)
   return -VAR_1;
  VAR_10 = &VAR_9->tbl[VAR_6->idx].gid;
  VAR_11 = VAR_9->tbl[VAR_6->idx].vlan_id;
  if (VAR_6->idx == 0 &&
      FUNC_5((struct in6_addr *)VAR_10) &&
      VAR_6->refcnt == 1 && VAR_8->qp1_sqp) {
   FUNC_1(FUNC_4(VAR_8),
    "Trying to delete GID0 while QP1 is alive\n");
   return -VAR_0;
  }
  VAR_6->refcnt--;
  if (!VAR_6->refcnt) {
   VAR_5 = FUNC_0(VAR_9, VAR_10,
       VAR_11, 1);
   if (VAR_5) {
    FUNC_2(FUNC_4(VAR_8),
     "Failed to remove GID: %#x", VAR_5);
   } else {
    VAR_7 = VAR_9->ctx;
    VAR_7[VAR_6->idx] = ((void*)0);
    FUNC_3(VAR_6);
   }
  }
 } else {
  return -VAR_1;
 }
 return VAR_5;
}
