
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {scalar_t__ type; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int evbit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_1, struct hid_input *VAR_2,
  struct hid_field *VAR_3, struct hid_usage *VAR_4,
  unsigned long **VAR_5, int *VAR_6)
{
 if (VAR_4->type == VAR_0)
  FUNC_0(VAR_4->type, VAR_2->input->evbit);

 return -1;
}
