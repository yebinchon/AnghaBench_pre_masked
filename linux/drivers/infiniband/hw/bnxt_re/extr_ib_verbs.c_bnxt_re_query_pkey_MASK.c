
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int pkey_tbl; } ;
struct bnxt_re_dev {TYPE_1__ qplib_res; } ;


 int FUNC_0 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 struct bnxt_re_dev* FUNC_2 (struct ib_device*,struct ib_device*) ;

int FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
         u16 VAR_2, u16 *VAR_3)
{
 struct bnxt_re_dev *VAR_4 = FUNC_2(VAR_0, VAR_0);



 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 return FUNC_0(&VAR_4->qplib_res,
       &VAR_4->qplib_res.pkey_tbl, VAR_2, VAR_3);
}
