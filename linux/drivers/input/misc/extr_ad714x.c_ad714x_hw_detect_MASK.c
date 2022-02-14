
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad714x_chip {int product; unsigned short version; int dev; int (* read ) (struct ad714x_chip*,int ,unsigned short*,int) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 int FUNC_1 (int ,char*,unsigned short) ;
 int FUNC_2 (struct ad714x_chip*,int ,unsigned short*,int) ;

__attribute__((used)) static int FUNC_3(struct ad714x_chip *VAR_2)
{
 unsigned short VAR_3;

 VAR_2->read(VAR_2, VAR_0, &VAR_3, 1);
 switch (VAR_3 & 0xFFF0) {
 case 131:
  VAR_2->product = 0x7142;
  VAR_2->version = VAR_3 & 0xF;
  FUNC_1(VAR_2->dev, "found AD7142 captouch, rev:%d\n",
    VAR_2->version);
  return 0;

 case 130:
  VAR_2->product = 0x7143;
  VAR_2->version = VAR_3 & 0xF;
  FUNC_1(VAR_2->dev, "found AD7143 captouch, rev:%d\n",
    VAR_2->version);
  return 0;

 case 129:
  VAR_2->product = 0x7147;
  VAR_2->version = VAR_3 & 0xF;
  FUNC_1(VAR_2->dev, "found AD7147(A) captouch, rev:%d\n",
    VAR_2->version);
  return 0;

 case 128:
  VAR_2->product = 0x7148;
  VAR_2->version = VAR_3 & 0xF;
  FUNC_1(VAR_2->dev, "found AD7148 captouch, rev:%d\n",
    VAR_2->version);
  return 0;

 default:
  FUNC_0(VAR_2->dev,
   "fail to detect AD714X captouch, read ID is %04x\n",
   VAR_3);
  return -VAR_1;
 }
}
