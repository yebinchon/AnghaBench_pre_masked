
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {scalar_t__ bus; scalar_t__ vendor; int product; int version; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct hid_device_id* FUNC_0 (struct hid_device const*) ;
 unsigned long FUNC_1 (struct hid_device const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

unsigned long FUNC_4(const struct hid_device *VAR_8)
{
 unsigned long VAR_9 = 0;
 const struct hid_device_id *VAR_10 = ((void*)0);


 if (VAR_8->bus == VAR_0 &&
     VAR_8->vendor == VAR_6 &&
     VAR_8->product >= VAR_3 &&
     VAR_8->product <= VAR_4)
  return VAR_2;


 if (VAR_8->bus == VAR_0 && VAR_8->vendor == VAR_5) {
  switch (VAR_8->product) {
  case 129:
   if (VAR_8->version < 0x0111)
    return VAR_1;
   break;
  case 128:
   if (VAR_8->version < 0x0214)
    return VAR_1;
   break;
  }
 }

 FUNC_2(&VAR_7);
 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10)
  VAR_9 = VAR_10->driver_data;
 else
  VAR_9 = FUNC_1(VAR_8);
 FUNC_3(&VAR_7);

 return VAR_9;
}
