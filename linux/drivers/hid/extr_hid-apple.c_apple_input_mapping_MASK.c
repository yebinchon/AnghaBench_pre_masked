
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_5, struct hid_input *VAR_6,
  struct hid_field *VAR_7, struct hid_usage *VAR_8,
  unsigned long **VAR_9, int *VAR_10)
{
 if (VAR_8->hid == (VAR_2 | 0x0003) ||
   VAR_8->hid == (VAR_3 | 0x0003)) {

  FUNC_2(VAR_1, VAR_6->input->evbit);
  FUNC_1(VAR_6, VAR_8, VAR_9, VAR_10, VAR_0, VAR_4);
  FUNC_0(VAR_6->input);
  return 1;
 }


 return 0;
}
