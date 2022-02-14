
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct gt683r_led {int work; int lock; int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gt683r_led* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hid_device* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 u8 VAR_8;
 struct hid_device *VAR_9 = FUNC_5(VAR_4->parent);
 struct gt683r_led *VAR_10 = FUNC_0(VAR_9);


 if (FUNC_1(VAR_6, 10, &VAR_8) || VAR_8 > 2)
  return -VAR_0;

 FUNC_2(&VAR_10->lock);

 if (VAR_8 == 0)
  VAR_10->mode = VAR_3;
 else if (VAR_8 == 1)
  VAR_10->mode = VAR_1;
 else
  VAR_10->mode = VAR_2;

 FUNC_3(&VAR_10->lock);
 FUNC_4(&VAR_10->work);

 return VAR_7;
}
