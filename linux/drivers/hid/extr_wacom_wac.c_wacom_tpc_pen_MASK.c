
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; int * tool; TYPE_1__* shared; struct input_dev* pen_input; } ;
struct input_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {int stylus_in_proximity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wacom_wac*) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 unsigned char FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_8)
{
 unsigned char *VAR_9 = VAR_8->data;
 struct input_dev *VAR_10 = VAR_8->pen_input;
 bool VAR_11 = VAR_9[1] & 0x20;

 if (!VAR_8->shared->stylus_in_proximity)

  VAR_8->tool[0] = (VAR_9[1] & 0x0c) ? VAR_6 : VAR_5;


 VAR_8->shared->stylus_in_proximity = VAR_11;




 if (!FUNC_0(VAR_8)) {
  FUNC_2(VAR_10, VAR_3, VAR_9[1] & 0x02);
  FUNC_2(VAR_10, VAR_4, VAR_9[1] & 0x10);
  FUNC_1(VAR_10, VAR_1, FUNC_3((__le16 *)&VAR_9[2]));
  FUNC_1(VAR_10, VAR_2, FUNC_3((__le16 *)&VAR_9[4]));
  FUNC_1(VAR_10, VAR_0, ((VAR_9[7] & 0x07) << 8) | VAR_9[6]);
  FUNC_2(VAR_10, VAR_7, VAR_9[1] & 0x05);
  FUNC_2(VAR_10, VAR_8->tool[0], VAR_11);
  return 1;
 }

 return 0;
}
