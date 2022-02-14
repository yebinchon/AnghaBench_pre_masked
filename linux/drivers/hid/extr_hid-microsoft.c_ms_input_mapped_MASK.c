
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_data {unsigned long quirks; } ;
struct hid_usage {int code; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;
 struct ms_data* FUNC_1 (struct hid_device*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, struct hid_input *VAR_2,
  struct hid_field *VAR_3, struct hid_usage *VAR_4,
  unsigned long **VAR_5, int *VAR_6)
{
 struct ms_data *VAR_7 = FUNC_1(VAR_1);
 unsigned long VAR_8 = VAR_7->quirks;

 if (VAR_8 & VAR_0)
  FUNC_0(VAR_4->code, *VAR_5);

 return 0;
}
