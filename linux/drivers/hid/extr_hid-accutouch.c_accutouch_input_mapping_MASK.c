
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_4,
       struct hid_input *VAR_5,
       struct hid_field *VAR_6,
       struct hid_usage *VAR_7,
       unsigned long **VAR_8, int *VAR_9)
{
 if ((VAR_7->hid & VAR_3) == VAR_2) {
  FUNC_0(VAR_5, VAR_7, VAR_8, VAR_9, VAR_1, VAR_0);
  return 1;
 }

 return 0;
}
