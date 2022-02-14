
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mouse_kind; int input; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(unsigned char *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = (VAR_6[0] >> 4) & 0x0f;

 if (!VAR_5[VAR_9]) {
  FUNC_3("ADB HID on ID %d not yet registered\n", VAR_9);
  return;
 }
 switch (VAR_5[VAR_9]->mouse_kind)
 {
     case 128:
  VAR_6[1] = (VAR_6[1] & 0x7f) | ((VAR_6[1] & VAR_6[2]) & 0x80);
  VAR_6[2] = VAR_6[2] | 0x80;
  break;
     case 131:
  VAR_6[1] = (VAR_6[1] & 0x7f) | ((VAR_6[3] & 0x01) << 7);
  VAR_6[2] = (VAR_6[2] & 0x7f) | ((VAR_6[3] & 0x02) << 6);
  VAR_6[3] = (VAR_6[3] & 0x77) | ((VAR_6[3] & 0x04) << 5)
   | (VAR_6[3] & 0x08);
  break;
     case 129:
  VAR_6[1] = (VAR_6[1] & 0x7f) | (((VAR_6[3] & 0x04) << 5)
   & ((VAR_6[3] & 0x08) << 4));
  VAR_6[2] = (VAR_6[2] & 0x7f) | ((VAR_6[3] & 0x01) << 7);
  VAR_6[3] = (VAR_6[3] & 0x77) | ((VAR_6[3] & 0x02) << 6);
  break;
     case 130:
  VAR_6[1] = (VAR_6[1] & 0x7f) | ((VAR_6[3] & 0x01) << 7);
  VAR_6[2] = (VAR_6[2] & 0x7f) | ((VAR_6[3] & 0x02) << 6);
  VAR_6[3] = ((VAR_6[3] & 0x04) << 5);
  break;
            case 132:
  VAR_6[3] = (VAR_6[2] & 0x80) ? 0x80 : 0x00;
  VAR_6[2] |= 0x80;
  VAR_7=4;
                break;
 }

 FUNC_0(VAR_5[VAR_9]->input, VAR_0, !((VAR_6[1] >> 7) & 1));
 FUNC_0(VAR_5[VAR_9]->input, VAR_1, !((VAR_6[2] >> 7) & 1));

 if (VAR_7 >= 4 && VAR_5[VAR_9]->mouse_kind != 128)
  FUNC_0(VAR_5[VAR_9]->input, VAR_2, !((VAR_6[3] >> 7) & 1));

 FUNC_1(VAR_5[VAR_9]->input, VAR_3,
    ((VAR_6[2]&0x7f) < 64 ? (VAR_6[2]&0x7f) : (VAR_6[2]&0x7f)-128 ));
 FUNC_1(VAR_5[VAR_9]->input, VAR_4,
    ((VAR_6[1]&0x7f) < 64 ? (VAR_6[1]&0x7f) : (VAR_6[1]&0x7f)-128 ));

 FUNC_2(VAR_5[VAR_9]->input);
}
