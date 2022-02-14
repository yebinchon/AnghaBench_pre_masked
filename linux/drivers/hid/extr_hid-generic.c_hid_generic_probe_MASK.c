
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,int ) ;
 int FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2,
        const struct hid_device_id *VAR_3)
{
 int VAR_4;

 VAR_2->quirks |= VAR_1;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_0);
}
