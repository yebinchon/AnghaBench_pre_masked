
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {int logical_maximum; int physical_maximum; unsigned int unit; int unit_exponent; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_field*,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2,
          unsigned VAR_3, int VAR_4)
{
 struct hid_field VAR_5 = {
  .logical_maximum = VAR_1,
  .physical_maximum = VAR_2,
  .unit = VAR_3,
  .unit_exponent = VAR_4,
 };

 return FUNC_0(&VAR_5, VAR_0);
}
