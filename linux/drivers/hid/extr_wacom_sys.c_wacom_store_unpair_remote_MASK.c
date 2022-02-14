
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {int lock; int hdev; } ;
struct kobject {int parent; } ;
struct kobj_attribute {int dummy; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,int) ;
 struct hid_device* FUNC_6 (struct device*) ;
 int FUNC_7 (struct wacom*,unsigned char) ;

__attribute__((used)) static ssize_t FUNC_8(struct kobject *VAR_1,
      struct kobj_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5 = 0;
 struct device *VAR_6 = FUNC_2(VAR_1->parent);
 struct hid_device *VAR_7 = FUNC_6(VAR_6);
 struct wacom *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;

 if (!FUNC_5(VAR_3, "*\n", 2)) {
  VAR_5 = VAR_0;
 } else {
  FUNC_1(VAR_8->hdev, "remote: unrecognized unpair code: %s\n",
    VAR_3);
  return -1;
 }

 FUNC_3(&VAR_8->lock);

 VAR_9 = FUNC_7(VAR_8, VAR_5);
 FUNC_4(&VAR_8->lock);

 return VAR_9 < 0 ? VAR_9 : VAR_4;
}
