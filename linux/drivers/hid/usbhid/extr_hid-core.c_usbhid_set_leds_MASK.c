
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int report; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,int ,int,struct hid_field**) ;
 int FUNC_1 (struct hid_field*,int,int ) ;
 int FUNC_2 (struct hid_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_2)
{
 struct hid_field *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_0, 0x01, &VAR_3)) != -1) {
  FUNC_1(VAR_3, VAR_4, 0);
  FUNC_2(VAR_2, VAR_3->report, VAR_1);
 }
}
