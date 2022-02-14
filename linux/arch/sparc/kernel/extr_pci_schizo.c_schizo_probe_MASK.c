
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,unsigned long) ;
 struct of_device_id* FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 const struct of_device_id *VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2->dev);
 if (!VAR_3)
  return -VAR_0;
 return FUNC_0(VAR_2, (unsigned long)VAR_3->data);
}
