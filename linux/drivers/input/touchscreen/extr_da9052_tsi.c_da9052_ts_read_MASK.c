
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct input_dev {int dummy; } ;
struct da9052_tsi {int da9052; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct da9052_tsi *VAR_8)
{
 struct input_dev *VAR_9 = VAR_8->dev;
 int VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 u8 VAR_14;

 VAR_10 = FUNC_0(VAR_8->da9052, VAR_5);
 if (VAR_10 < 0)
  return;

 VAR_11 = (u16) VAR_10;

 VAR_10 = FUNC_0(VAR_8->da9052, VAR_6);
 if (VAR_10 < 0)
  return;

 VAR_12 = (u16) VAR_10;

 VAR_10 = FUNC_0(VAR_8->da9052, VAR_7);
 if (VAR_10 < 0)
  return;

 VAR_13 = (u16) VAR_10;

 VAR_10 = FUNC_0(VAR_8->da9052, VAR_4);
 if (VAR_10 < 0)
  return;

 VAR_14 = (u8) VAR_10;

 VAR_11 = ((VAR_11 << 2) & 0x3fc) | (VAR_14 & 0x3);
 VAR_12 = ((VAR_12 << 2) & 0x3fc) | ((VAR_14 & 0xc) >> 2);
 VAR_13 = ((VAR_13 << 2) & 0x3fc) | ((VAR_14 & 0x30) >> 4);

 FUNC_2(VAR_9, VAR_3, 1);
 FUNC_1(VAR_9, VAR_1, VAR_11);
 FUNC_1(VAR_9, VAR_2, VAR_12);
 FUNC_1(VAR_9, VAR_0, VAR_13);
 FUNC_3(VAR_9);
}
