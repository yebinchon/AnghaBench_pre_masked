
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct palmas_gpadc_platform_data {int extended_delay; void* ch3_current; void* ch0_current; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct palmas_gpadc_platform_data* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,void**) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
 struct palmas_gpadc_platform_data **VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct palmas_gpadc_platform_data *VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(&VAR_2->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, "ti,channel0-current-microamp", &VAR_7);
 if (!VAR_6)
  VAR_5->ch0_current = VAR_7;

 VAR_6 = FUNC_2(VAR_4, "ti,channel3-current-microamp", &VAR_7);
 if (!VAR_6)
  VAR_5->ch3_current = VAR_7;

 VAR_5->extended_delay = FUNC_1(VAR_4,
     "ti,enable-extended-delay");

 *VAR_3 = VAR_5;

 return 0;
}
