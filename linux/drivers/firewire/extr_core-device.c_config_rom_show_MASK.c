
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_device {int config_rom_length; int config_rom; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 struct fw_device* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct fw_device *VAR_4 = FUNC_1(VAR_1);
 size_t VAR_5;

 FUNC_0(&VAR_0);
 VAR_5 = VAR_4->config_rom_length * 4;
 FUNC_2(VAR_3, VAR_4->config_rom, VAR_5);
 FUNC_3(&VAR_0);

 return VAR_5;
}
