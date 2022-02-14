
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rmi_function {struct device dev; } ;
struct f03_data {int device_count; struct rmi_function* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct f03_data*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct f03_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct f03_data*) ;

__attribute__((used)) static int FUNC_4(struct rmi_function *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct f03_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, sizeof(struct f03_data), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->fn = VAR_2;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4->device_count != 1)
  FUNC_1(VAR_3, "found %d devices on PS/2 passthrough",
    VAR_4->device_count);

 FUNC_0(VAR_3, VAR_4);
 return 0;
}
