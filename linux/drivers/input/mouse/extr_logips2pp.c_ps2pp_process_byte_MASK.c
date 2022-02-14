
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int* packet; int pktcnt; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int psmouse_ret_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct psmouse*,char*,int) ;
 int FUNC_5 (struct input_dev*,int) ;
 int FUNC_6 (struct input_dev*,int*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static psmouse_ret_t FUNC_8(struct psmouse *VAR_9)
{
 struct input_dev *VAR_10 = VAR_9->dev;
 u8 *VAR_11 = VAR_9->packet;

 if (VAR_9->pktcnt < 3)
  return VAR_6;





 if ((VAR_11[0] & 0x48) == 0x48 && (VAR_11[1] & 0x02) == 0x02) {


  switch ((VAR_11[1] >> 4) | (VAR_11[0] & 0x30)) {

  case 0x0d:

   FUNC_2(VAR_10,
    VAR_11[2] & 0x80 ? VAR_7 : VAR_8,
    -FUNC_7(VAR_11[2], 3));
   FUNC_1(VAR_10, VAR_3, VAR_11[2] & FUNC_0(4));
   FUNC_1(VAR_10, VAR_1, VAR_11[2] & FUNC_0(5));

   break;

  case 0x0e:

   FUNC_1(VAR_10, VAR_3, VAR_11[2] & FUNC_0(0));
   FUNC_1(VAR_10, VAR_1, VAR_11[2] & FUNC_0(1));
   FUNC_1(VAR_10, VAR_4, VAR_11[2] & FUNC_0(2));
   FUNC_1(VAR_10, VAR_0, VAR_11[2] & FUNC_0(3));
   FUNC_1(VAR_10, VAR_2, VAR_11[2] & FUNC_0(4));

   break;

  case 0x0f:

   FUNC_2(VAR_10,
    VAR_11[2] & 0x08 ? VAR_7 : VAR_8,
    -FUNC_7(VAR_11[2] >> 4, 3));
   VAR_11[0] = VAR_11[2] | FUNC_0(3);
   break;

  default:
   FUNC_4(VAR_9,
        "Received PS2++ packet #%x, but don't know how to handle.\n",
        (VAR_11[1] >> 4) | (VAR_11[0] & 0x30));
   break;
  }

  FUNC_5(VAR_10, VAR_11[0]);

 } else {

  FUNC_6(VAR_10, VAR_11);
 }

 FUNC_3(VAR_10);

 return VAR_5;

}
