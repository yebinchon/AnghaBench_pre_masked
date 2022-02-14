
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tsc_ser {int* data; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct tsc_ser *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->dev;
 u8 *VAR_5 = VAR_3->data;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = ((VAR_5[1] & 0x03) << 8) | VAR_5[2];
 VAR_7 = ((VAR_5[3] & 0x03) << 8) | VAR_5[4];

 FUNC_0(VAR_4, VAR_0, VAR_6);
 FUNC_0(VAR_4, VAR_1, VAR_7);
 FUNC_1(VAR_4, VAR_2, 1);

 FUNC_2(VAR_4);
}
