
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_device {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hidpp_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, bool VAR_2)
{
 struct hidpp_device *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_0)
  return 0;

 return FUNC_1(VAR_3);
}
