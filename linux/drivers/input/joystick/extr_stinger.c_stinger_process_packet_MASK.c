
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stinger {unsigned char* data; int idx; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


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
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct stinger *VAR_12)
{
 struct input_dev *VAR_13 = VAR_12->dev;
 unsigned char *VAR_14 = VAR_12->data;

 if (!VAR_12->idx) return;

 FUNC_1(VAR_13, VAR_2, ((VAR_14[0] & 0x20) >> 5));
 FUNC_1(VAR_13, VAR_3, ((VAR_14[0] & 0x10) >> 4));
 FUNC_1(VAR_13, VAR_4, ((VAR_14[0] & 0x08) >> 3));
 FUNC_1(VAR_13, VAR_9, ((VAR_14[0] & 0x04) >> 2));
 FUNC_1(VAR_13, VAR_10, ((VAR_14[3] & 0x20) >> 5));
 FUNC_1(VAR_13, VAR_11, ((VAR_14[3] & 0x10) >> 4));
 FUNC_1(VAR_13, VAR_7, ((VAR_14[3] & 0x08) >> 3));
 FUNC_1(VAR_13, VAR_8, ((VAR_14[3] & 0x04) >> 2));
 FUNC_1(VAR_13, VAR_5, ((VAR_14[3] & 0x02) >> 1));
 FUNC_1(VAR_13, VAR_6, (VAR_14[3] & 0x01));

 FUNC_0(VAR_13, VAR_0, (VAR_14[1] & 0x3F) - ((VAR_14[0] & 0x01) << 6));
 FUNC_0(VAR_13, VAR_1, ((VAR_14[0] & 0x02) << 5) - (VAR_14[2] & 0x3F));

 FUNC_2(VAR_13);

 return;
}
