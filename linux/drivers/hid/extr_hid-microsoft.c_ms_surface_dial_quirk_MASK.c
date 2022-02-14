
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;







 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hid_input *VAR_1, struct hid_field *VAR_2,
  struct hid_usage *VAR_3, unsigned long **VAR_4, int *VAR_5)
{
 switch (VAR_3->hid & VAR_0) {
 case 0xff070000:

 case 129:

  return -1;
 case 128:
  switch (VAR_3->hid) {
  case 131:

  case 130:

  case 132:

   return -1;
  }
 }

 return 0;
}
