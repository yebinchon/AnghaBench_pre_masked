
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {scalar_t__ external_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct fsi_master_acf* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct fsi_master_acf *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0 - 1, "%u\n",
   VAR_4->external_mode ? 1 : 0);
}
