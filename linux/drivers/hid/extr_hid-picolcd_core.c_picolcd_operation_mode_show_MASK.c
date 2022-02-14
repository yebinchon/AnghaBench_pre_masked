
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct picolcd_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct picolcd_data *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->status & VAR_1)
  return FUNC_1(VAR_4, VAR_0, "[bootloader] lcd\n");
 else
  return FUNC_1(VAR_4, VAR_0, "bootloader [lcd]\n");
}
