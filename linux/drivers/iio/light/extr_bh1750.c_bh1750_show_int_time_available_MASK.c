
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1750_data {struct bh1750_chip_info* chip_info; } ;
struct bh1750_chip_info {int mtreg_min; int mtreg_max; int mtreg_to_usec; scalar_t__ inc; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct bh1750_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 size_t VAR_5 = 0;
 struct bh1750_data *VAR_6 = FUNC_1(FUNC_0(VAR_1));
 const struct bh1750_chip_info *VAR_7 = VAR_6->chip_info;

 for (VAR_4 = VAR_7->mtreg_min; VAR_4 <= VAR_7->mtreg_max; VAR_4 += VAR_7->inc)
  VAR_5 += FUNC_2(VAR_3 + VAR_5, VAR_0 - VAR_5, "0.%06d ",
     VAR_7->mtreg_to_usec * VAR_4);

 VAR_3[VAR_5 - 1] = '\n';

 return VAR_5;
}
