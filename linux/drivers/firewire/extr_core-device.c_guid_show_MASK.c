
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_device {int* config_rom; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fw_device* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct fw_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 FUNC_0(&VAR_1);
 VAR_6 = FUNC_2(VAR_4, VAR_0, "0x%08x%08x\n",
         VAR_5->config_rom[3], VAR_5->config_rom[4]);
 FUNC_3(&VAR_1);

 return VAR_6;
}
