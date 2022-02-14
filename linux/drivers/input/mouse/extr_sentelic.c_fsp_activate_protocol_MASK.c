
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; struct fsp_data* private; } ;
struct fsp_data {scalar_t__ ver; int buttons; int flags; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct psmouse*,int*) ;
 int FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct psmouse*,int) ;
 scalar_t__ FUNC_3 (struct psmouse*,int) ;
 scalar_t__ FUNC_4 (struct psmouse*,int ,int*) ;
 scalar_t__ FUNC_5 (struct psmouse*,int ,int) ;
 int FUNC_6 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_7 (struct psmouse*,char*) ;
 int FUNC_8 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_9(struct psmouse *VAR_16)
{
 struct fsp_data *VAR_17 = VAR_16->private;
 struct ps2dev *VAR_18 = &VAR_16->ps2dev;
 unsigned char VAR_19[2];
 int VAR_20;





 VAR_19[0] = 200;
 FUNC_6(VAR_18, VAR_19, VAR_15);
 VAR_19[0] = 200;
 FUNC_6(VAR_18, VAR_19, VAR_15);
 VAR_19[0] = 80;
 FUNC_6(VAR_18, VAR_19, VAR_15);

 FUNC_6(VAR_18, VAR_19, VAR_14);
 if (VAR_19[0] != 0x04) {
  FUNC_7(VAR_16,
       "Unable to enable 4 bytes packet format.\n");
  return -VAR_0;
 }

 if (VAR_17->ver < VAR_13) {

  if (FUNC_4(VAR_16, VAR_12, &VAR_20)) {
   FUNC_7(VAR_16,
        "Unable to read SYSCTL5 register.\n");
   return -VAR_0;
  }

  if (FUNC_0(VAR_16, &VAR_17->buttons)) {
   FUNC_7(VAR_16,
        "Unable to retrieve number of buttons.\n");
   return -VAR_0;
  }

  VAR_20 &= ~(VAR_4 | VAR_5 | VAR_2);

  VAR_20 &= ~VAR_6;
  if (VAR_17->buttons == 0x06) {

   VAR_20 |= VAR_3;
  }

  if (FUNC_5(VAR_16, VAR_12, VAR_20)) {
   FUNC_7(VAR_16,
        "Unable to set up required mode bits.\n");
   return -VAR_0;
  }





  if (FUNC_3(VAR_16, 1))
   FUNC_8(VAR_16,
         "Failed to enable OPC tag mode.\n");

  VAR_17->flags |= VAR_1;


  FUNC_2(VAR_16, 1);
  FUNC_1(VAR_16, 1);
 } else {

  if (FUNC_5(VAR_16, VAR_11,
      VAR_7 |
      VAR_8 |
      VAR_10 |
      VAR_9)) {
   FUNC_7(VAR_16,
        "Unable to enable absolute coordinates output.\n");
   return -VAR_0;
  }
 }

 return 0;
}
