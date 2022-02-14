
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct psmouse {int* packet; scalar_t__ pktcnt; scalar_t__ pktsize; int extra_buttons; TYPE_1__* protocol; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int s8 ;
typedef int psmouse_ret_t ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int VAR_6 ;
 int FUNC_5 (struct input_dev*,int*) ;
 int FUNC_6 (int,int) ;

psmouse_ret_t FUNC_7(struct psmouse *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->dev;
 u8 *VAR_9 = VAR_7->packet;
 int VAR_10;

 if (VAR_7->pktcnt < VAR_7->pktsize)
  return VAR_3;



 switch (VAR_7->protocol->type) {
 case 129:

  FUNC_3(VAR_8, VAR_5, -(s8) VAR_9[3]);
  break;

 case 130:

  switch (VAR_9[3] & 0xC0) {
  case 0x80:
   FUNC_3(VAR_8, VAR_5,
      -FUNC_6(VAR_9[3], 5));
   break;
  case 0x40:
   FUNC_3(VAR_8, VAR_4,
      -FUNC_6(VAR_9[3], 5));
   break;
  case 0x00:
  case 0xC0:
   VAR_10 = FUNC_6(VAR_9[3], 3);






   if (VAR_6 && FUNC_1(VAR_10) > 1)
    FUNC_3(VAR_8, VAR_4, VAR_10 / 2);
   else
    FUNC_3(VAR_8, VAR_5, -VAR_10);

   FUNC_2(VAR_8, VAR_1, VAR_9[3] & FUNC_0(4));
   FUNC_2(VAR_8, VAR_0, VAR_9[3] & FUNC_0(5));
   break;
  }
  break;

 case 131:

  FUNC_3(VAR_8, VAR_5, -(s8) VAR_9[3]);


  FUNC_2(VAR_8, VAR_1, VAR_9[0] & FUNC_0(6));
  FUNC_2(VAR_8, VAR_0, VAR_9[0] & FUNC_0(7));
  break;

 case 128:

  FUNC_2(VAR_8, VAR_0, VAR_9[0] & FUNC_0(3));





  VAR_9[1] |= (VAR_9[0] & 0x40) << 1;
  break;

 case 132:




  FUNC_2(VAR_8, VAR_1, VAR_9[0] & FUNC_0(3));
  VAR_9[0] |= FUNC_0(3);
  break;

 default:
  break;
 }


 VAR_9[0] |= VAR_7->extra_buttons;
 FUNC_5(VAR_8, VAR_9);

 FUNC_4(VAR_8);

 return VAR_2;
}
