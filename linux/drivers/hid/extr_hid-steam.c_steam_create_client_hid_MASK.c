
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct hid_device {int group; int phys; int name; int country; int type; int version; int product; int vendor; int bus; TYPE_1__ dev; int * ll_driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 struct hid_device* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static struct hid_device *FUNC_3(struct hid_device *VAR_2)
{
 struct hid_device *VAR_3;

 VAR_3 = FUNC_1();
 if (FUNC_0(VAR_3))
  return VAR_3;

 VAR_3->ll_driver = &VAR_1;
 VAR_3->dev.parent = VAR_2->dev.parent;
 VAR_3->bus = VAR_2->bus;
 VAR_3->vendor = VAR_2->vendor;
 VAR_3->product = VAR_2->product;
 VAR_3->version = VAR_2->version;
 VAR_3->type = VAR_2->type;
 VAR_3->country = VAR_2->country;
 FUNC_2(VAR_3->name, VAR_2->name,
   sizeof(VAR_3->name));
 FUNC_2(VAR_3->phys, VAR_2->phys,
   sizeof(VAR_3->phys));





 VAR_3->group = VAR_0;
 return VAR_3;
}
