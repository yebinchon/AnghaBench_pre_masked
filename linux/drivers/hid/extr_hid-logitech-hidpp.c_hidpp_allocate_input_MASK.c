
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; int product; int vendor; int bustype; } ;
struct input_dev {TYPE_2__ dev; TYPE_1__ id; int uniq; int phys; int name; int close; int open; } ;
struct hidpp_device {int name; } ;
struct hid_device {int dev; int version; int product; int vendor; int bus; int uniq; int phys; } ;


 struct input_dev* FUNC_0 (int *) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct input_dev*,struct hid_device*) ;

__attribute__((used)) static struct input_dev *FUNC_3(struct hid_device *VAR_2)
{
 struct input_dev *VAR_3 = FUNC_0(&VAR_2->dev);
 struct hidpp_device *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3, VAR_2);
 VAR_3->open = VAR_1;
 VAR_3->close = VAR_0;

 VAR_3->name = VAR_4->name;
 VAR_3->phys = VAR_2->phys;
 VAR_3->uniq = VAR_2->uniq;
 VAR_3->id.bustype = VAR_2->bus;
 VAR_3->id.vendor = VAR_2->vendor;
 VAR_3->id.product = VAR_2->product;
 VAR_3->id.version = VAR_2->version;
 VAR_3->dev.parent = &VAR_2->dev;

 return VAR_3;
}
