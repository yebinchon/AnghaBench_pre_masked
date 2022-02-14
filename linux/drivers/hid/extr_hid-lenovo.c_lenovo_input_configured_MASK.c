
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_input {TYPE_1__* input; } ;
struct hid_device {int product; } ;
struct TYPE_2__ {int propbit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3,
  struct hid_input *VAR_4)
{
 switch (VAR_3->product) {
  case 128:
  case 129:
  case 130:
   if (FUNC_1(VAR_0, VAR_4->input->evbit)) {

    FUNC_0(VAR_1, VAR_4->input->propbit);
    FUNC_0(VAR_2,
      VAR_4->input->propbit);
   }
   break;
 }

 return 0;
}
