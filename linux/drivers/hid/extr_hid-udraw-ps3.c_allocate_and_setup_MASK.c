
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int version; int product; int vendor; int bustype; } ;
struct TYPE_3__ {int * parent; } ;
struct input_dev {char const* name; TYPE_2__ id; int uniq; int close; int open; TYPE_1__ dev; int phys; } ;
struct hid_device {int version; int product; int vendor; int bus; int uniq; int dev; int phys; } ;


 struct input_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct input_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct input_dev *FUNC_3(struct hid_device *VAR_2,
  const char *VAR_3)
{
 struct input_dev *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->dev);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->name = VAR_3;
 VAR_4->phys = VAR_2->phys;
 VAR_4->dev.parent = &VAR_2->dev;
 VAR_4->open = VAR_1;
 VAR_4->close = VAR_0;
 VAR_4->uniq = VAR_2->uniq;
 VAR_4->id.bustype = VAR_2->bus;
 VAR_4->id.vendor = VAR_2->vendor;
 VAR_4->id.product = VAR_2->product;
 VAR_4->id.version = VAR_2->version;
 FUNC_2(VAR_4, FUNC_1(VAR_2));

 return VAR_4;
}
