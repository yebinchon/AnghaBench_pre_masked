
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hsi_controller {int dummy; } ;


 int FUNC_0 (int *,int *,int ) ;
 struct hsi_controller* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hsi_controller*) ;
 int FUNC_5 (struct hsi_controller*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct hsi_controller *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(&VAR_1->dev, ((void*)0), VAR_0);




 FUNC_5(VAR_2);
 FUNC_2(VAR_1, ((void*)0));

 FUNC_3(&VAR_1->dev);

 return 0;
}
