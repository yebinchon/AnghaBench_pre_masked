
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct wacom_wac {scalar_t__ pid; TYPE_1__ features; } ;
struct wacom {struct wacom_wac wacom_wac; struct hid_device* hdev; } ;
struct TYPE_6__ {int version; scalar_t__ product; int vendor; int bustype; } ;
struct TYPE_5__ {int * parent; } ;
struct input_dev {TYPE_3__ id; int uniq; int close; int open; TYPE_2__ dev; int phys; int name; } ;
struct hid_device {int version; scalar_t__ product; int vendor; int bus; int uniq; int dev; int phys; } ;


 struct input_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,struct wacom*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct input_dev *FUNC_2(struct wacom *VAR_2)
{
 struct input_dev *VAR_3;
 struct hid_device *VAR_4 = VAR_2->hdev;
 struct wacom_wac *VAR_5 = &(VAR_2->wacom_wac);

 VAR_3 = FUNC_0(&VAR_4->dev);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->name = VAR_5->features.name;
 VAR_3->phys = VAR_4->phys;
 VAR_3->dev.parent = &VAR_4->dev;
 VAR_3->open = VAR_1;
 VAR_3->close = VAR_0;
 VAR_3->uniq = VAR_4->uniq;
 VAR_3->id.bustype = VAR_4->bus;
 VAR_3->id.vendor = VAR_4->vendor;
 VAR_3->id.product = VAR_5->pid ? VAR_5->pid : VAR_4->product;
 VAR_3->id.version = VAR_4->version;
 FUNC_1(VAR_3, VAR_2);

 return VAR_3;
}
