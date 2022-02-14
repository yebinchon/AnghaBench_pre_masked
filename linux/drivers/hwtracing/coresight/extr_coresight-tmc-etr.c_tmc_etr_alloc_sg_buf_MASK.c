
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {TYPE_1__* csdev; } ;
struct etr_sg_table {int hwaddr; } ;
struct etr_buf {struct etr_sg_table* private; int mode; int hwaddr; int size; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct etr_sg_table*) ;
 struct etr_sg_table* FUNC_1 (struct device*,int,int ,void**) ;

__attribute__((used)) static int FUNC_2(struct tmc_drvdata *VAR_2,
    struct etr_buf *VAR_3, int VAR_4,
    void **VAR_5)
{
 struct etr_sg_table *VAR_6;
 struct device *VAR_7 = &VAR_2->csdev->dev;

 VAR_6 = FUNC_1(VAR_7, VAR_4,
       VAR_3->size, VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_0;
 VAR_3->hwaddr = VAR_6->hwaddr;
 VAR_3->mode = VAR_1;
 VAR_3->private = VAR_6;
 return 0;
}
