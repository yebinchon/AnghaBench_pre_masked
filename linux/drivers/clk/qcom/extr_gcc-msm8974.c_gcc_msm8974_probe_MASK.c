
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct of_device_id* FUNC_1 (int ,struct device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (struct device*,char*,char*,int) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 bool VAR_6;
 const struct of_device_id *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_5);
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = !!(VAR_7->data);

 if (VAR_6)
  FUNC_0();

 VAR_4 = FUNC_3(VAR_5, "xo_board", "xo", 19200000);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_3, &VAR_1);
}
