
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ type; int code; } ;
struct hid_input {int dummy; } ;
struct hid_field {scalar_t__ physical; } ;
struct hid_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_3, struct hid_input *VAR_4,
         struct hid_field *VAR_5, struct hid_usage *VAR_6,
         unsigned long **VAR_7, int *VAR_8)
{

 if (VAR_5->physical)
  return 0;

 if (VAR_6->type == VAR_1 || VAR_6->type == VAR_2
   || VAR_6->type == VAR_0)
  FUNC_0(VAR_6->code, *VAR_7);

 return 0;
}
