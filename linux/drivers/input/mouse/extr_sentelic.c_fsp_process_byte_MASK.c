
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; int pktcnt; struct fsp_data* private; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
struct fsp_data {int last_mt_fgr; int flags; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;



 char VAR_14 ;
 unsigned short FUNC_1 (unsigned char*) ;
 unsigned short FUNC_2 (unsigned char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct psmouse*,unsigned char*) ;
 int FUNC_4 (struct input_dev*,int,int,unsigned short,unsigned short) ;
 int FUNC_5 (struct input_dev*,int ,unsigned short) ;
 int FUNC_6 (struct input_dev*,int ,unsigned char) ;
 int FUNC_7 (struct input_dev*,int ,unsigned char) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,unsigned char*) ;

__attribute__((used)) static psmouse_ret_t FUNC_10(struct psmouse *VAR_19)
{
 struct input_dev *VAR_20 = VAR_19->dev;
 struct fsp_data *VAR_21 = VAR_19->private;
 unsigned char *VAR_22 = VAR_19->packet;
 unsigned char VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 unsigned short VAR_26, VAR_27, VAR_28 = 0;

 if (VAR_19->pktcnt < 4)
  return VAR_16;





 FUNC_3(VAR_19, VAR_22);

 switch (VAR_19->packet[0] >> VAR_14) {
 case 130:

  if ((VAR_22[0] == 0x48 || VAR_22[0] == 0x49) &&
      VAR_22[1] == 0 && VAR_22[2] == 0) {





   VAR_22[3] &= 0xf0;
  }

  VAR_26 = FUNC_1(VAR_22);
  VAR_27 = FUNC_2(VAR_22);

  if (VAR_22[0] & VAR_11) {




   VAR_28 = 2;


   if (VAR_22[0] & VAR_12) {

    if (VAR_21->last_mt_fgr == 2) {





     VAR_28 = 1;
     FUNC_4(VAR_20, 0, 0, 0, 0);
    }
    VAR_21->last_mt_fgr = 2;

    FUNC_4(VAR_20, 1, VAR_28 == 2, VAR_26, VAR_27);
   } else {

    if (VAR_21->last_mt_fgr == 1) {





     VAR_28 = 1;
     FUNC_4(VAR_20, 1, 0, 0, 0);
    }
    VAR_21->last_mt_fgr = 1;
    FUNC_4(VAR_20, 0, VAR_28 != 0, VAR_26, VAR_27);
   }
  } else {

   if ((VAR_22[0] & (VAR_10|VAR_13)) ==
    VAR_10) {




    VAR_22[0] &= ~VAR_10;
   }


   VAR_21->last_mt_fgr = 0;

   if (VAR_26 != 0 && VAR_27 != 0)
    VAR_28 = 1;

   FUNC_4(VAR_20, 0, VAR_28 > 0, VAR_26, VAR_27);
   FUNC_4(VAR_20, 1, 0, 0, 0);
  }
  if (VAR_28 == 1 || (VAR_28 == 2 && !(VAR_22[0] & VAR_12))) {
   FUNC_5(VAR_20, VAR_0, VAR_26);
   FUNC_5(VAR_20, VAR_1, VAR_27);
  }
  FUNC_6(VAR_20, VAR_4, VAR_22[0] & 0x01);
  FUNC_6(VAR_20, VAR_5, VAR_22[0] & 0x02);
  FUNC_6(VAR_20, VAR_8, VAR_28);
  FUNC_6(VAR_20, VAR_7, VAR_28 == 1);
  FUNC_6(VAR_20, VAR_6, VAR_28 == 2);
  break;

 case 128:

  if ((VAR_21->flags & VAR_9) != VAR_9)
   VAR_22[0] &= ~VAR_10;


 case 129:


  if (VAR_22[3] != 0) {
   if (VAR_22[3] & FUNC_0(0))
    VAR_23 |= 0x01;
   if (VAR_22[3] & FUNC_0(1))
    VAR_23 |= 0x0f;
   if (VAR_22[3] & FUNC_0(2))
    VAR_23 |= FUNC_0(4);
   if (VAR_22[3] & FUNC_0(3))
    VAR_23 |= FUNC_0(5);

   if (VAR_23 != 0)
    VAR_22[3] = VAR_23;
   VAR_25 = (VAR_22[3] >> 4) & 1;
   VAR_24 = (VAR_22[3] >> 5) & 1;
  }



  FUNC_7(VAR_20, VAR_18,
     (int)(VAR_22[3] & 8) - (int)(VAR_22[3] & 7));
  FUNC_7(VAR_20, VAR_17, VAR_24 - VAR_25);
  FUNC_6(VAR_20, VAR_2, VAR_24);
  FUNC_6(VAR_20, VAR_3, VAR_25);




  FUNC_9(VAR_20, VAR_22);
  break;
 }

 FUNC_8(VAR_20);

 return VAR_15;
}
