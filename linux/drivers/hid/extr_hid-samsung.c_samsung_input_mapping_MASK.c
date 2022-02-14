
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hid_device*,struct hid_input*,struct hid_field*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_1, struct hid_input *VAR_2,
 struct hid_field *VAR_3, struct hid_usage *VAR_4,
 unsigned long **VAR_5, int *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_0 == VAR_1->product)
  VAR_7 = FUNC_0(VAR_1,
   VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
