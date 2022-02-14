
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int original_handler_id; int input; } ;


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
 TYPE_1__** VAR_11 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_6(unsigned char *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = (VAR_12[0] >> 4) & 0x0f;

 if (!VAR_11[VAR_15]) {
  FUNC_4("ADB HID on ID %d not yet registered\n", VAR_15);
  return;
 }

 switch (VAR_11[VAR_15]->original_handler_id) {
 default:
 case 0x02:
   {
  int VAR_16 = (VAR_12[1] == (VAR_12[1] & 0xf));

  switch (VAR_12[1] & 0x0f) {
  case 0x0:
   FUNC_0(VAR_11[VAR_15]->input, VAR_7, VAR_16);
   break;

  case 0x1:
   FUNC_0(VAR_11[VAR_15]->input, VAR_6, VAR_16);
   break;

  case 0x2:
   FUNC_0(VAR_11[VAR_15]->input, VAR_9, VAR_16);
   break;

  case 0x3:
   FUNC_0(VAR_11[VAR_15]->input, VAR_10, VAR_16);
   break;

  default:
   FUNC_5("Unhandled ADB_MISC event %02x, %02x, %02x, %02x\n",
    VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);
   break;
  }
   }
   break;

 case 0x1f:
   {
  int VAR_17 = (VAR_12[1] == (VAR_12[1] & 0xf));






  switch (VAR_12[1] & 0x0f) {
  case 0x8:
   FUNC_0(VAR_11[VAR_15]->input, VAR_6, VAR_17);
   break;

  case 0x7:
   FUNC_0(VAR_11[VAR_15]->input, VAR_9, VAR_17);
   break;

  case 0x6:
   FUNC_0(VAR_11[VAR_15]->input, VAR_10, VAR_17);
   break;

  case 0xb:
   FUNC_0(VAR_11[VAR_15]->input, VAR_2, VAR_17);
   break;

  case 0xa:




   FUNC_0(VAR_11[VAR_15]->input, VAR_0, VAR_17);
   break;

  case 0x9:




   FUNC_0(VAR_11[VAR_15]->input, VAR_1, VAR_17);
   break;

  case 0xc:
   FUNC_0(VAR_11[VAR_15]->input, VAR_8, VAR_17);
   break;

  case 0xd:
   FUNC_0(VAR_11[VAR_15]->input, VAR_4, VAR_17);
   break;

  case 0xe:
   FUNC_0(VAR_11[VAR_15]->input, VAR_3, VAR_17);
   break;

  case 0xf:
   switch (VAR_12[1]) {
   case 0x8f:
   case 0x0f:

    FUNC_0(VAR_11[VAR_15]->input, VAR_5, VAR_17);
    break;

   case 0x7f:
   case 0xff:

    break;

   default:
    FUNC_5("Unhandled ADB_MISC event %02x, %02x, %02x, %02x\n",
     VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);
    break;
   }
   break;
  default:
   FUNC_5("Unhandled ADB_MISC event %02x, %02x, %02x, %02x\n",
    VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);
   break;
  }
   }
   break;
 }

 FUNC_1(VAR_11[VAR_15]->input);
}
