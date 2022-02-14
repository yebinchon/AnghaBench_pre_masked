
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mousedev_motion {int buttons; scalar_t__ dz; scalar_t__ dy; scalar_t__ dx; } ;
struct mousedev_client {size_t tail; int mode; int bufsiz; size_t head; int last_buttons; scalar_t__ ready; struct mousedev_motion* packets; } ;
typedef int s8 ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(struct mousedev_client *VAR_1, u8 *VAR_2)
{
 struct mousedev_motion *VAR_3 = &VAR_1->packets[VAR_1->tail];
 s8 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_3->dx, -127, 127);
 VAR_3->dx -= VAR_4;

 VAR_5 = FUNC_1(VAR_3->dy, -127, 127);
 VAR_3->dy -= VAR_5;

 VAR_2[0] = FUNC_0(3);
 VAR_2[0] |= ((VAR_4 & FUNC_0(7)) >> 3) | ((VAR_5 & FUNC_0(7)) >> 2);
 VAR_2[0] |= VAR_3->buttons & 0x07;
 VAR_2[1] = VAR_4;
 VAR_2[2] = VAR_5;

 switch (VAR_1->mode) {
 case 130:
  VAR_6 = FUNC_1(VAR_3->dz, -7, 7);
  VAR_3->dz -= VAR_6;

  VAR_2[3] = (VAR_6 & 0x0f) | ((VAR_3->buttons & 0x18) << 1);
  VAR_1->bufsiz = 4;
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_3->dz, -127, 127);
  VAR_3->dz -= VAR_6;

  VAR_2[0] |= ((VAR_3->buttons & 0x10) >> 3) |
          ((VAR_3->buttons & 0x08) >> 1);
  VAR_2[3] = VAR_6;

  VAR_1->bufsiz = 4;
  break;

 case 128:
 default:
  VAR_3->dz = 0;

  VAR_2[0] |= ((VAR_3->buttons & 0x10) >> 3) |
          ((VAR_3->buttons & 0x08) >> 1);

  VAR_1->bufsiz = 3;
  break;
 }

 if (!VAR_3->dx && !VAR_3->dy && !VAR_3->dz) {
  if (VAR_1->tail == VAR_1->head) {
   VAR_1->ready = 0;
   VAR_1->last_buttons = VAR_3->buttons;
  } else
   VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 }
}
