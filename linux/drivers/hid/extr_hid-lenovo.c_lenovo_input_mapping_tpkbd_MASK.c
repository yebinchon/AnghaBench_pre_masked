
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2,
  struct hid_input *VAR_3, struct hid_field *VAR_4,
  struct hid_usage *VAR_5, unsigned long **VAR_6, int *VAR_7)
{
 if (VAR_5->hid == (VAR_0 | 0x0010)) {

  FUNC_0(VAR_2, (void *)1);
  FUNC_1(VAR_1);
  return 1;
 }
 return 0;
}
