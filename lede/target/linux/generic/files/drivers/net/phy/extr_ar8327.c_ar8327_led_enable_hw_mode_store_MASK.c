
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ar8327_led {int enable_hw_mode; int lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ar8327_led*,int ) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,int *) ;
 struct ar8327_led* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5,
    size_t VAR_6)
{
        struct led_classdev *VAR_7 = FUNC_1(VAR_3);
 struct ar8327_led *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5, 10, &VAR_10);
 if (VAR_11 < 0)
  return -VAR_2;

 FUNC_4(&VAR_8->lock);

 VAR_8->enable_hw_mode = !!VAR_10;
 if (VAR_8->enable_hw_mode)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 FUNC_0(VAR_8, VAR_9);

 FUNC_5(&VAR_8->lock);

 return VAR_6;
}
