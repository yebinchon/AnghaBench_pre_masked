
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcf50633_input {int input_dev; int pcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcf50633_input*) ;
 int FUNC_2 (int ,int ) ;
 struct pcf50633_input* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct pcf50633_input *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_3->pcf, VAR_1);
 FUNC_2(VAR_3->pcf, VAR_0);

 FUNC_0(VAR_3->input_dev);
 FUNC_1(VAR_3);

 return 0;
}
