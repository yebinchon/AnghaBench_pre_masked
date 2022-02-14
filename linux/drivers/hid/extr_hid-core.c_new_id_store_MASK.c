
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long driver_data; void* product; void* vendor; int group; void* bus; } ;
struct hid_dynid {int list; TYPE_1__ id; } ;
struct hid_driver {int driver; int dyn_lock; int dyn_list; } ;
struct device_driver {int dummy; } ;
typedef size_t ssize_t ;
typedef void* __u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct hid_dynid* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*,void**,void**,void**,unsigned long*) ;
 struct hid_driver* FUNC_6 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device_driver *VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 struct hid_driver *VAR_7 = FUNC_6(VAR_4);
 struct hid_dynid *VAR_8;
 __u32 VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_5, "%x %x %x %lx",
   &VAR_9, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_13 < 3)
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->id.bus = VAR_9;
 VAR_8->id.group = VAR_3;
 VAR_8->id.vendor = VAR_10;
 VAR_8->id.product = VAR_11;
 VAR_8->id.driver_data = VAR_12;

 FUNC_3(&VAR_7->dyn_lock);
 FUNC_2(&VAR_8->list, &VAR_7->dyn_list);
 FUNC_4(&VAR_7->dyn_lock);

 VAR_13 = FUNC_0(&VAR_7->driver);

 return VAR_13 ? : VAR_6;
}
