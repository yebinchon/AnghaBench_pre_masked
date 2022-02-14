
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum cvmx_helper_board_usb_clock_types { ____Placeholder_cvmx_helper_board_usb_clock_types } cvmx_helper_board_usb_clock_types ;
struct TYPE_2__ {int board_type; } ;
 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 () ;

enum cvmx_helper_board_usb_clock_types FUNC_2(void)
{
 switch (FUNC_1()->board_type) {
 case 134:
 case 133:
 case 131:
 case 132:
 case 129:
 case 128:
  return VAR_0;
 case 130:
  return VAR_1;
 default:
  break;
 }

 if (FUNC_0())
  return VAR_0;
 return VAR_2;
}
