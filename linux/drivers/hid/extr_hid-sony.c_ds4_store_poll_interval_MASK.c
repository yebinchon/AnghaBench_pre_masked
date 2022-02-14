
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sony_sc {int lock; scalar_t__ ds4_bt_poll_interval; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct sony_sc* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (char const*,int ,scalar_t__*) ;
 int FUNC_2 (struct sony_sc*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct hid_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct hid_device *VAR_7 = FUNC_5(VAR_3);
 struct sony_sc *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9;
 u8 VAR_10;

 if (FUNC_1(VAR_5, 0, &VAR_10))
  return -VAR_1;

 if (VAR_10 > VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_8->lock, VAR_9);
 VAR_8->ds4_bt_poll_interval = VAR_10;
 FUNC_4(&VAR_8->lock, VAR_9);

 FUNC_2(VAR_8, VAR_2);

 return VAR_6;
}
