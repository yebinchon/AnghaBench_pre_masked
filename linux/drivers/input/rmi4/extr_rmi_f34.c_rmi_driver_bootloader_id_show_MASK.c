
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rmi_function {struct device dev; } ;
struct rmi_driver_data {struct rmi_function* f34_container; } ;
struct f34_data {int bl_version; int * bootloader_id; } ;
struct device_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 void* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct rmi_driver_data *VAR_4 = FUNC_0(VAR_1);
 struct rmi_function *VAR_5 = VAR_4->f34_container;
 struct f34_data *VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(&VAR_5->dev);

  if (VAR_6->bl_version == 5)
   return FUNC_1(VAR_3, VAR_0, "%c%c\n",
      VAR_6->bootloader_id[0],
      VAR_6->bootloader_id[1]);
  else
   return FUNC_1(VAR_3, VAR_0, "V%d.%d\n",
      VAR_6->bootloader_id[1],
      VAR_6->bootloader_id[0]);
 }

 return 0;
}
