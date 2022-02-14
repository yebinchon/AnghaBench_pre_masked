
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {TYPE_3__ lldi; } ;
struct c4iw_dev {scalar_t__ avail_ird; TYPE_2__ rdev; int qps; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct c4iw_dev *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_1->qps);
 if (VAR_2 <= VAR_1->avail_ird)
  VAR_1->avail_ird -= VAR_2;
 else
  VAR_3 = -VAR_0;
 FUNC_2(&VAR_1->qps);

 if (VAR_3)
  FUNC_0(&VAR_1->rdev.lldi.pdev->dev,
    "device IRD resources exhausted\n");

 return VAR_3;
}
