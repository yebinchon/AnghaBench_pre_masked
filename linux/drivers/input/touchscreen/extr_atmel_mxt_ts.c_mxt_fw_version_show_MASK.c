
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_info {int version; int build; } ;
struct mxt_data {struct mxt_info* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mxt_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int,int,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct mxt_data *VAR_4 = FUNC_0(VAR_1);
 struct mxt_info *VAR_5 = VAR_4->info;
 return FUNC_1(VAR_3, VAR_0, "%u.%u.%02X\n",
    VAR_5->version >> 4, VAR_5->version & 0xf, VAR_5->build);
}
