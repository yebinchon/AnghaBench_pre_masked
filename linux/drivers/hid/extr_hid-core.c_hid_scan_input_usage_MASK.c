
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hid_parser {struct hid_device* device; } ;
struct hid_device {int group; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hid_parser *VAR_2, u32 VAR_3)
{
 struct hid_device *VAR_4 = VAR_2->device;

 if (VAR_3 == VAR_0)
  VAR_4->group = VAR_1;
}
