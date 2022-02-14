
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int sgid_tbl; } ;
struct bnxt_re_dev {TYPE_1__ qplib_res; } ;
struct bnxt_qplib_gid {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int *,int,struct bnxt_qplib_gid*) ;
 int FUNC_1 (union ib_gid*,int ,int) ;
 struct bnxt_re_dev* FUNC_2 (struct ib_device*,struct ib_device*) ;

int FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
        int VAR_2, union ib_gid *VAR_3)
{
 struct bnxt_re_dev *VAR_4 = FUNC_2(VAR_0, VAR_0);
 int VAR_5 = 0;


 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_5 = FUNC_0(&VAR_4->qplib_res,
     &VAR_4->qplib_res.sgid_tbl, VAR_2,
     (struct bnxt_qplib_gid *)VAR_3);
 return VAR_5;
}
