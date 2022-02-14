
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_3,
  struct hid_input *VAR_4, struct hid_field *VAR_5,
  struct hid_usage *VAR_6, unsigned long **VAR_7, int *VAR_8)
{
 if (VAR_6->hid == VAR_1) {
  FUNC_0(VAR_4, VAR_6, VAR_7, VAR_8, VAR_0, VAR_2);
  return 1;
 }
 return 0;
}
