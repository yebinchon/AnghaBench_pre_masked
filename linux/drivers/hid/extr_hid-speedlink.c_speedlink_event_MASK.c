
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
typedef scalar_t__ __s32 ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_0, struct hid_field *VAR_1,
  struct hid_usage *VAR_2, __s32 VAR_3)
{







 if (FUNC_0(VAR_3) >= 256)
  return 1;

 if (VAR_3 == 0)
  return 1;

 return 0;
}
