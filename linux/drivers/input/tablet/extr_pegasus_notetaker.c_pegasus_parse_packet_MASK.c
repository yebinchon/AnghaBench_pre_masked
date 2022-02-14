
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pegasus {unsigned char* data; TYPE_1__* usbdev; int init; struct input_dev* dev; } ;
struct input_dev {int dev; } ;
typedef int s16 ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pegasus *VAR_8)
{
 unsigned char *VAR_9 = VAR_8->data;
 struct input_dev *VAR_10 = VAR_8->dev;
 u16 VAR_11, VAR_12;

 switch (VAR_9[0]) {
 case 128:

  if (VAR_9[1] == VAR_5)
   FUNC_5(&VAR_8->init);

  break;


 case 130:
  FUNC_0(&VAR_10->dev, "Pen battery low\n");


 case 129:
 case 131:
  VAR_11 = FUNC_4((__le16 *)&VAR_9[2]);
  VAR_12 = FUNC_4((__le16 *)&VAR_9[4]);


  if (VAR_11 == 0 && VAR_12 == 0)
   break;

  FUNC_2(VAR_10, VAR_4, VAR_9[1] & VAR_7);
  FUNC_2(VAR_10, VAR_2, VAR_9[1] & VAR_6);
  FUNC_2(VAR_10, VAR_3, 1);
  FUNC_1(VAR_10, VAR_0, (s16)VAR_11);
  FUNC_1(VAR_10, VAR_1, VAR_12);

  FUNC_3(VAR_10);
  break;

 default:
  FUNC_0(&VAR_8->usbdev->dev,
         "unknown answer from device\n");
 }
}
