
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma8452_data {TYPE_1__* chip_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mma_scales; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mma8452_data* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct mma8452_data *VAR_3 = FUNC_2(FUNC_1(
          FUNC_4(VAR_0)));

 return FUNC_3(VAR_2, VAR_3->chip_info->mma_scales,
  FUNC_0(VAR_3->chip_info->mma_scales));
}
