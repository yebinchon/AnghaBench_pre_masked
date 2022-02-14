
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t rd_size; int country; int version; int product; int vendor; int bus; int uniq; int phys; int name; int rd_data; } ;
struct TYPE_6__ {TYPE_1__ create2; } ;
struct uhid_event {TYPE_2__ u; } ;
struct uhid_device {int running; size_t rd_size; int * rd_data; int worker; struct hid_device* hid; } ;
struct TYPE_7__ {int parent; } ;
struct hid_device {TYPE_3__ dev; struct uhid_device* driver_data; int country; int version; int product; int vendor; int bus; int * ll_driver; int uniq; int phys; int name; } ;
struct TYPE_8__ {int this_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 struct hid_device* FUNC_2 () ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,size_t) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static int FUNC_8(struct uhid_device *VAR_7,
       const struct uhid_event *VAR_8)
{
 struct hid_device *VAR_9;
 size_t VAR_10, VAR_11;
 void *VAR_12;
 int VAR_13;

 if (VAR_7->running)
  return -VAR_0;

 VAR_10 = VAR_8->u.create2.rd_size;
 if (VAR_10 <= 0 || VAR_10 > VAR_4)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_8->u.create2.rd_data, VAR_10, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_7->rd_size = VAR_10;
 VAR_7->rd_data = VAR_12;

 VAR_9 = FUNC_2();
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_1(VAR_9);
  goto err_free;
 }


 VAR_11 = FUNC_5(sizeof(VAR_9->name), sizeof(VAR_8->u.create2.name)) - 1;
 FUNC_7(VAR_9->name, VAR_8->u.create2.name, VAR_11);
 VAR_11 = FUNC_5(sizeof(VAR_9->phys), sizeof(VAR_8->u.create2.phys)) - 1;
 FUNC_7(VAR_9->phys, VAR_8->u.create2.phys, VAR_11);
 VAR_11 = FUNC_5(sizeof(VAR_9->uniq), sizeof(VAR_8->u.create2.uniq)) - 1;
 FUNC_7(VAR_9->uniq, VAR_8->u.create2.uniq, VAR_11);

 VAR_9->ll_driver = &VAR_5;
 VAR_9->bus = VAR_8->u.create2.bus;
 VAR_9->vendor = VAR_8->u.create2.vendor;
 VAR_9->product = VAR_8->u.create2.product;
 VAR_9->version = VAR_8->u.create2.version;
 VAR_9->country = VAR_8->u.create2.country;
 VAR_9->driver_data = VAR_7;
 VAR_9->dev.parent = VAR_6.this_device;

 VAR_7->hid = VAR_9;
 VAR_7->running = 1;





 FUNC_6(&VAR_7->worker);

 return 0;

err_free:
 FUNC_3(VAR_7->rd_data);
 VAR_7->rd_data = ((void*)0);
 VAR_7->rd_size = 0;
 return VAR_13;
}
