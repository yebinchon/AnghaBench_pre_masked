
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpp_device {int quirks; } ;
struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {scalar_t__ application; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct hidpp_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;
 int FUNC_2 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3, struct hid_input *VAR_4,
  struct hid_field *VAR_5, struct hid_usage *VAR_6,
  unsigned long **VAR_7, int *VAR_8)
{
 struct hidpp_device *VAR_9 = FUNC_0(VAR_3);

 if (!VAR_9)
  return 0;

 if (VAR_9->quirks & VAR_1)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 else if (VAR_9->quirks & VAR_0 &&
   VAR_5->application != VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 return 0;
}
