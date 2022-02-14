
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pdev; } ;
struct bnxt_re_dev {struct bnxt_en_dev* en_dev; TYPE_2__ qplib_res; } ;
struct bnxt_en_dev {int pdev; TYPE_1__* en_ops; } ;
struct TYPE_3__ {int (* bnxt_register_device ) (struct bnxt_en_dev*,int ,int *,struct bnxt_re_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt_en_dev*,int ,int *,struct bnxt_re_dev*) ;

__attribute__((used)) static int FUNC_1(struct bnxt_re_dev *VAR_3)
{
 struct bnxt_en_dev *VAR_4;
 int VAR_5 = 0;

 if (!VAR_3)
  return -VAR_1;

 VAR_4 = VAR_3->en_dev;

 VAR_5 = VAR_4->en_ops->bnxt_register_device(VAR_4, VAR_0,
        &VAR_2, VAR_3);
 VAR_3->qplib_res.pdev = VAR_3->en_dev->pdev;
 return VAR_5;
}
