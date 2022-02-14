
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_re_dev {struct bnxt_en_dev* en_dev; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; } ;
struct TYPE_2__ {int (* bnxt_free_msix ) (struct bnxt_en_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_en_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt_re_dev *VAR_2)
{
 struct bnxt_en_dev *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_3 = VAR_2->en_dev;


 VAR_4 = VAR_3->en_ops->bnxt_free_msix(VAR_2->en_dev, VAR_0);

 return VAR_4;
}
