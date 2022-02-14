
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_driver_data {int f01_container; } ;
struct rmi_device {int dev; } ;
struct input_dev {char* name; } ;


 int VAR_0 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ,char*,char const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rmi_device *VAR_1,
    struct input_dev *VAR_2)
{
 struct rmi_driver_data *VAR_3 = FUNC_0(&VAR_1->dev);
 const char *VAR_4 = FUNC_2(VAR_3->f01_container);
 char *VAR_5;

 VAR_5 = FUNC_1(&VAR_1->dev, VAR_0,
         "Synaptics %s", VAR_4);
 if (!VAR_5)
  return;

 VAR_2->name = VAR_5;
}
