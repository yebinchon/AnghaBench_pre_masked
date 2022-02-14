
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_pwm_tacho_data {struct aspeed_cooling_device** cdev; } ;
struct aspeed_cooling_device {int pwm_port; struct aspeed_pwm_tacho_data* priv; int tcdev; int name; void* cooling_levels; int max_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,struct device_node*,int ,struct aspeed_cooling_device*,int *) ;
 int FUNC_5 (struct device_node*,char*,void*,int) ;
 int FUNC_6 (int ,int ,char*,struct device_node*,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4,
         struct device_node *VAR_5,
         struct aspeed_pwm_tacho_data *VAR_6,
         u32 VAR_7, u8 VAR_8)
{
 int VAR_9;
 struct aspeed_cooling_device *VAR_10;

 VAR_10 = FUNC_3(VAR_4, sizeof(*VAR_10), VAR_1);

 if (!VAR_10)
  return -VAR_0;

 VAR_10->cooling_levels = FUNC_3(VAR_4, VAR_8, VAR_1);
 if (!VAR_10->cooling_levels)
  return -VAR_0;

 VAR_10->max_state = VAR_8 - 1;
 VAR_9 = FUNC_5(VAR_5, "cooling-levels",
     VAR_10->cooling_levels,
     VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_4, "Property 'cooling-levels' cannot be read.\n");
  return VAR_9;
 }
 FUNC_6(VAR_10->name, VAR_2, "%pOFn%d", VAR_5, VAR_7);

 VAR_10->tcdev = FUNC_4(VAR_4, VAR_5,
     VAR_10->name, VAR_10, &VAR_3);
 if (FUNC_0(VAR_10->tcdev))
  return FUNC_1(VAR_10->tcdev);

 VAR_10->priv = VAR_6;
 VAR_10->pwm_port = VAR_7;

 VAR_6->cdev[VAR_7] = VAR_10;

 return 0;
}
