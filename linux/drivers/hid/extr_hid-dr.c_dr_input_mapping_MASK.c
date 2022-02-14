
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int flags; } ;
struct hid_device {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, struct hid_input *VAR_2,
       struct hid_field *VAR_3, struct hid_usage *VAR_4,
       unsigned long **VAR_5, int *VAR_6)
{
 switch (VAR_4->hid) {




 case 130: case 129: case 128:
 case 133: case 132: case 131:
  if (VAR_3->flags & VAR_0)
   FUNC_1(VAR_4->hid & 0xf);
  else
   FUNC_0(VAR_4->hid & 0xf);
  return 1;
 }

 return 0;
}
