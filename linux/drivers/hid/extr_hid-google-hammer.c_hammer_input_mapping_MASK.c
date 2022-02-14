
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hid_device *VAR_2, struct hid_input *VAR_3,
    struct hid_field *VAR_4,
    struct hid_usage *VAR_5,
    unsigned long **VAR_6, int *VAR_7)
{
 if (VAR_2->product == VAR_0 &&
     VAR_5->hid == VAR_1) {





  return -1;
 }

 return 0;
}
