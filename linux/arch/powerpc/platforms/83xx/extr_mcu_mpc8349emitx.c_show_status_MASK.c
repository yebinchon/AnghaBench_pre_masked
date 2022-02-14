
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu {int reg_ctrl; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mcu* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 struct mcu *VAR_7 = VAR_2;

 VAR_6 = FUNC_0(VAR_7->client, VAR_1);
 if (VAR_6 < 0)
  return -VAR_0;
 VAR_7->reg_ctrl = VAR_6;

 return FUNC_1(VAR_5, "%02x\n", VAR_6);
}
