
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_1__*,char*) ;
 struct of_device_id* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 const struct of_device_id *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3->dev.of_node);
 if (FUNC_4(!VAR_4))
  return -VAR_0;

 switch (*(u32 *)VAR_4->data) {
 case 128:
  VAR_5 = FUNC_3(VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(&VAR_3->dev, "Unsupported crossbar\n");
  VAR_5 = -VAR_1;
  break;
 }

 return VAR_5;
}
