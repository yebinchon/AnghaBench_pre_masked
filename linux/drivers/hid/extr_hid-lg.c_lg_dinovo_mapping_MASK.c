
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_input *VAR_4, struct hid_usage *VAR_5,
  unsigned long **VAR_6, int *VAR_7)
{
 if ((VAR_5->hid & VAR_2) != VAR_0)
  return 0;

 switch (VAR_5->hid & VAR_1) {

 case 0x00d: FUNC_0(VAR_3); break;
 default:
  return 0;

 }
 return 1;
}
