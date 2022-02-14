
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_11, struct hid_input *VAR_12,
  struct hid_field *VAR_13, struct hid_usage *VAR_14,
  unsigned long **VAR_15, int *VAR_16)
{
 if ((VAR_14->hid & VAR_2) != VAR_0)
  return 0;

 switch (VAR_14->hid & VAR_1) {
        case 0x046: FUNC_0(VAR_10); break;
        case 0x047: FUNC_0(VAR_4); break;
        case 0x049: FUNC_0(VAR_3); break;
        case 0x04a: FUNC_0(VAR_7); break;
        case 0x00d: FUNC_0(VAR_5); break;
        case 0x025: FUNC_0(VAR_8); break;
        case 0x048: FUNC_0(VAR_9); break;
        case 0x024: FUNC_0(VAR_6); break;
        default:
        return 0;
 }

 return 1;
}
