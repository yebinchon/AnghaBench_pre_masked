
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mode ;
typedef int cursor_radius ;
typedef int cursor_interval ;
typedef int button_interval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int *,int*,int) ;
 int FUNC_4 (int ,char*,char*,char*,char*,char*,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(uint8_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 128;
 int VAR_11 = 75;
 int VAR_12 = 0;

 FUNC_2(VAR_4);

 while (1) {

  VAR_7 = FUNC_3("hw.usb.g_mouse.mode", ((void*)0), ((void*)0),
      &VAR_9, sizeof(VAR_9));

  if (VAR_7 != 0) {
   FUNC_1("WARNING: Could not set mouse mode "
       "to %d (error=%d)\n", VAR_9, VAR_5);
  }
  VAR_7 = FUNC_3("hw.usb.g_mouse.cursor_update_interval", ((void*)0), ((void*)0),
      &VAR_10, sizeof(VAR_10));

  if (VAR_7 != 0) {
   FUNC_1("WARNING: Could not set cursor update interval "
       "to %d (error=%d)\n", VAR_10, VAR_5);
  }
  VAR_7 = FUNC_3("hw.usb.g_mouse.button_press_interval", ((void*)0), ((void*)0),
      &VAR_12, sizeof(VAR_12));

  if (VAR_7 != 0) {
   FUNC_1("WARNING: Could not set button press interval "
       "to %d (error=%d)\n", VAR_12, VAR_5);
  }
  VAR_7 = FUNC_3("hw.usb.g_mouse.cursor_radius", ((void*)0), ((void*)0),
      &VAR_11, sizeof(VAR_11));

  if (VAR_7 != 0) {
   FUNC_1("WARNING: Could not set cursor radius "
       "to %d (error=%d)\n", VAR_11, VAR_5);
  }
  VAR_8 = FUNC_4(VAR_6, "Default Mouse Settings",
      "1) Set Silent mode %s\n"
      "2) Set Circle mode %s\n"
      "3) Set Square mode %s\n"
      "4) Set Spiral mode %s\n"
      "5) Change cursor radius: %d pixels\n"
      "6) Change cursor update interval: %d ms\n"
      "7) Change button[0] press interval: %d ms\n"
      "x) Return to previous menu\n"
      "s: Ready for enumeration\n",
      (VAR_9 == VAR_2) ? "(selected)" : "",
      (VAR_9 == VAR_1) ? "(selected)" : "",
      (VAR_9 == VAR_0) ? "(selected)" : "",
      (VAR_9 == VAR_3) ? "(selected)" : "",
      VAR_11, VAR_10, VAR_12);

  switch (VAR_8) {
  case 0:
   break;
  case 1:
   VAR_9 = VAR_2;
   break;
  case 2:
   VAR_9 = VAR_1;
   break;
  case 3:
   VAR_9 = VAR_0;
   break;
  case 4:
   VAR_9 = VAR_3;
   break;
  case 5:
   VAR_11 = FUNC_0();
   break;
  case 6:
   VAR_10 = FUNC_0();
   break;
  case 7:
   VAR_12 = FUNC_0();
   break;
  default:
   return;
  }
 }
}
