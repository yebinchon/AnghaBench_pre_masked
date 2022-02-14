
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hid_field {int logical_minimum; int logical_maximum; } ;


 int FUNC_0 (struct hid_field*,unsigned int) ;
 int FUNC_1 (struct input_dev*,unsigned int,int ) ;
 int FUNC_2 (struct input_dev*,unsigned int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0, unsigned int VAR_1,
  struct hid_field *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->logical_minimum;
 int VAR_5 = VAR_2->logical_maximum;
 int VAR_6 = VAR_3 ? (VAR_5 - VAR_4) / VAR_3 : 0;
 FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, 0);
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2, VAR_1));
}
