
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {scalar_t__ id; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (unsigned int,int ) ;
 int VAR_0 ;
 struct input_dev* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct input_dev *VAR_2 = FUNC_6(VAR_1);
 unsigned int VAR_3 = (unsigned int) FUNC_3(VAR_2);

 FUNC_4(VAR_2);


 FUNC_0(VAR_0);
 FUNC_5(VAR_3, 0);

 FUNC_1(VAR_0, (void *)VAR_1->id);
 FUNC_2(VAR_1->id);

 return 0;
}
